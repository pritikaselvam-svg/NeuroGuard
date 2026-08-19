# Firmware Architecture

``` text
BOOT
 ↓
GPIO
 ↓
I2C
 ↓
MAX30102 + MPU6050
 ↓
Battery ADC
 ↓
BLE initialization
 ↓
Sensor acquisition
 ↓
Filtering/features
 ↓
Event logic
 ↓
Haptic/LED
 ↓
BLE packet
 ↓
Repeat
```

Recommended modules:

``` text
main
sensor_max30102
sensor_mpu6050
battery
alerts
motor
status_led
ble
data_model
```

Keep hardware drivers separate from event logic.
