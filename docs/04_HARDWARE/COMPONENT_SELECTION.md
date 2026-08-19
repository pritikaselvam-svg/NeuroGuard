# Component Selection

  Ref   Selected part          Purpose                          Why
  ----- ---------------------- -------------------------------- ----------------------------
  U1    WEMOS C3 Mini          MCU/wireless                     Compact ESP32-C3 platform
  U2    MAX30102               Optical sensing                  HR/SpO2-related sensing
  U3    MPU6050                Motion                           Accelerometer + gyroscope
  U5    TP4056-42-ESOP8        Charging                         Single-cell Li-ion charger
  U6    RT9701                 Regulation                       3.3 V rail
  Q1    2N2219                 Motor switch                     Low-side switching
  M1    Coin vibration motor   Haptic                           Compact feedback
  D1    LED                    Status                           Visual indication
  D2    1N4148                 Flyback path in current design   Compact diode
  J1    USB-C power-only       Charging input                   Compact
  BT1   1-cell Li-ion          Energy                           Rechargeable

### Footprint rule

Before fabrication, compare every footprint against the exact purchased
component mechanical drawing.
