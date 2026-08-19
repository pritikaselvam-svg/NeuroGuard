# Sensor Data Flow

``` text
MAX30102 → optical samples → HR/SpO2-related feature
MPU6050 → accel/gyro → activity/fall/sleep features
Divider → ADC → battery estimate

                  ↓
              ESP32-C3
                  ↓
             Event logic
                  ↓
          BLE + haptic output
```
