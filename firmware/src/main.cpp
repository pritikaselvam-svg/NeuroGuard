#include <Arduino.h>
#include <Wire.h>

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <MAX30105.h>

#include "../include/config.h"

// =====================================
// SENSOR OBJECTS
// =====================================

Adafruit_MPU6050 mpu;
MAX30105 max30102;

// =====================================
// VARIABLES
// =====================================

float heartRate = 0;
float spo2 = 0;

float accelX = 0;
float accelY = 0;
float accelZ = 0;

float batteryVoltage = 0;

unsigned long lastSensorRead = 0;

// =====================================
// VIBRATION
// =====================================

void vibrate(int duration)
{
    digitalWrite(VIBRATION_PIN, HIGH);
    delay(duration);
    digitalWrite(VIBRATION_PIN, LOW);
}

// =====================================
// BATTERY MONITORING
// =====================================

float readBatteryVoltage()
{
    int raw = analogRead(BATTERY_ADC_PIN);

    float adcVoltage =
        ((float)raw / 4095.0) * ADC_REFERENCE;

    // Voltage divider:
    // Vout = Vin * R2 / (R1 + R2)
    float battery =
        adcVoltage * ((R1 + R2) / R2);

    return battery;
}

// =====================================
// MPU6050
// =====================================

void readMotion()
{
    sensors_event_t acceleration;
    sensors_event_t gyro;
    sensors_event_t temperature;

    mpu.getEvent(
        &acceleration,
        &gyro,
        &temperature
    );

    accelX = acceleration.acceleration.x;
    accelY = acceleration.acceleration.y;
    accelZ = acceleration.acceleration.z;

    float totalAcceleration =
        sqrt(
            accelX * accelX +
            accelY * accelY +
            accelZ * accelZ
        );

    Serial.print("Acceleration: ");
    Serial.println(totalAcceleration);

    // Simple prototype fall detection
    if (totalAcceleration > FALL_ACCEL_THRESHOLD * 9.81)
    {
        Serial.println("⚠ POTENTIAL FALL DETECTED");

        vibrate(VIBRATION_DURATION);
    }
}

// =====================================
// MAX30102
// =====================================

void readHeartSensor()
{
    long irValue = max30102.getIR();

    Serial.print("IR: ");
    Serial.println(irValue);

    /*
       NOTE:

       The MAX30102 raw IR signal is available here.

       Actual heart-rate and SpO2 calculation
       should be implemented using a proper
       MAX30102 algorithm/library once the
       physical sensor is connected and tested.
    */

    if (irValue < 50000)
    {
        Serial.println("No finger / poor contact");
        return;
    }

    // Placeholder values for current prototype
    heartRate = 78;
    spo2 = 98;

    Serial.print("Heart Rate: ");
    Serial.println(heartRate);

    Serial.print("SpO2: ");
    Serial.println(spo2);
}

// =====================================
// HEALTH ALERTS
// =====================================

void checkHealthAlerts()
{
    if (heartRate < HEART_RATE_LOW ||
        heartRate > HEART_RATE_HIGH)
    {
        Serial.println("⚠ ABNORMAL HEART RATE");

        vibrate(VIBRATION_DURATION);
    }

    if (spo2 < SPO2_LOW)
    {
        Serial.println("⚠ LOW SpO2");

        vibrate(VIBRATION_DURATION);
    }
}

// =====================================
// SETUP
// =====================================

void setup()
{
    Serial.begin(115200);

    delay(1000);

    Serial.println();
    Serial.println("==============================");
    Serial.println("      NEUROGUARD DEVICE");
    Serial.println("==============================");

    // GPIO
    pinMode(VIBRATION_PIN, OUTPUT);
    pinMode(STATUS_LED_PIN, OUTPUT);

    digitalWrite(VIBRATION_PIN, LOW);
    digitalWrite(STATUS_LED_PIN, LOW);

    // =================================
    // I2C
    // =================================

    Wire.begin(
        I2C_SDA,
        I2C_SCL
    );

    Serial.println("I2C initialized");

    // =================================
    // MPU6050
    // =================================

    if (!mpu.begin(MPU6050_ADDRESS, &Wire))
    {
        Serial.println("ERROR: MPU6050 not detected!");

        while (1)
        {
            digitalWrite(STATUS_LED_PIN, !digitalRead(STATUS_LED_PIN));
            delay(500);
        }
    }

    Serial.println("MPU6050 detected");

    // Configure MPU6050

    mpu.setAccelerometerRange(
        MPU6050_RANGE_8_G
    );

    mpu.setGyroRange(
        MPU6050_RANGE_500_DEG
    );

    // =================================
    // MAX30102
    // =================================

    if (!max30102.begin(
            Wire,
            I2C_SPEED_FAST,
            MAX30102_ADDRESS))
    {
        Serial.println("ERROR: MAX30102 not detected!");

        while (1)
        {
            digitalWrite(STATUS_LED_PIN, !digitalRead(STATUS_LED_PIN));
            delay(250);
        }
    }

    Serial.println("MAX30102 detected");

    // Configure MAX30102

    max30102.setup();

    max30102.setPulseAmplitudeRed(0x0A);
    max30102.setPulseAmplitudeIR(0x0A);

    // =================================
    // READY
    // =================================

    digitalWrite(STATUS_LED_PIN, HIGH);

    Serial.println("NeuroGuard system ready.");

    vibrate(200);
}

// =====================================
// LOOP
// =====================================

void loop()
{
    if (millis() - lastSensorRead >= 1000)
    {
        lastSensorRead = millis();

        Serial.println();
        Serial.println("---------- SENSOR DATA ----------");

        // Read sensors
        readHeartSensor();

        readMotion();

        // Battery
        batteryVoltage =
            readBatteryVoltage();

        Serial.print("Battery: ");
        Serial.print(batteryVoltage);
        Serial.println(" V");

        // Alerts
        checkHealthAlerts();

        Serial.println("--------------------------------");
    }

    delay(10);
}
