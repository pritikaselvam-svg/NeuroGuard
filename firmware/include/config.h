#ifndef NEUROGUARD_CONFIG_H
#define NEUROGUARD_CONFIG_H

// ===============================
// NeuroGuard ESP32-C3 Configuration
// ===============================

// ---------- I2C ----------
// Based on the current schematic
#define I2C_SDA 8
#define I2C_SCL 10

// ---------- Vibration Motor ----------
#define VIBRATION_PIN 3

// ---------- Status LED ----------
#define STATUS_LED_PIN 4

// ---------- Battery Monitoring ----------
#define BATTERY_ADC_PIN 0

// Battery divider:
// Battery -> 100k -> ADC -> 100k -> GND
#define R1 100000.0
#define R2 100000.0

// ESP32-C3 ADC reference approximation
#define ADC_REFERENCE 3.3

// ---------- Sensor Addresses ----------

#define MAX30102_ADDRESS 0x57
#define MPU6050_ADDRESS 0x68

// ---------- Monitoring thresholds ----------

#define HEART_RATE_LOW 50
#define HEART_RATE_HIGH 120

#define SPO2_LOW 90

// Fall detection threshold
#define FALL_ACCEL_THRESHOLD 2.5

// Vibration duration
#define VIBRATION_DURATION 500

#endif
