# Hardware Architecture

``` text
USB-C
  ↓
TP4056
  ↓
1-cell Li-ion
  ↓
RT9701
  ↓
3.3 V
  ├── ESP32-C3
  ├── MAX30102
  └── MPU6050

ESP32-C3
  ├── Battery ADC
  ├── Status LED
  ├── 2N2219 → vibration motor
  └── Future BLE
```

## Design intent

The WEMOS C3 Mini is the controller. MAX30102 provides optical sensing.
MPU6050 provides motion sensing. The power stage provides a rechargeable
supply. The motor is driven through a transistor rather than directly
from a GPIO.

## Hardware validation boundary

The architecture is a design artifact until the physical board is
powered and each subsystem is measured.
