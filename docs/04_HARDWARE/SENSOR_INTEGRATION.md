# Sensor Integration

## I2C

MAX30102 and MPU6050 can share the I2C bus if their addresses and
electrical requirements are compatible.

``` text
ESP32 SDA ──┬── MAX30102 SDA
            └── MPU6050 SDA

ESP32 SCL ──┬── MAX30102 SCL
            └── MPU6050 SCL
```

Both share 3.3 V and GND.

## Integration sequence

1.  Power rails.
2.  I2C initialization.
3.  Bus scan.
4.  MAX30102 initialization.
5.  MPU6050 initialization.
6.  Raw-data read.
7.  Plausibility check.
8.  Feature extraction.
9.  Event logic.
10. Communication.

A successful I2C read does not prove sensor accuracy.
