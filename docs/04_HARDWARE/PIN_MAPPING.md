# Pin Mapping

> The final KiCad schematic is the source of truth. Verify GPIO numbers
> against the exact WEMOS C3 Mini board revision before firmware freeze.

  Function        Current schematic role    Peripheral
  --------------- ------------------------- -------------------------
  I2C SDA         Assigned in schematic     MAX30102 + MPU6050
  I2C SCL         Assigned in schematic     MAX30102 + MPU6050
  Battery ADC     D0 in current schematic   100 kΩ / 100 kΩ divider
  Motor control   Assigned GPIO             1 kΩ → 2N2219
  Status LED      Assigned GPIO             220 Ω → LED
  3.3 V           3V3                       Sensors
  Ground          GND                       Common return
