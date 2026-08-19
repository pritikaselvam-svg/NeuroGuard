# Power Architecture

``` text
USB-C VBUS
   ↓
TP4056 charger
   ↓
Li-ion battery
   ↓
RT9701
   ↓
3.3 V rail
```

## Battery divider

Current schematic concept:

``` text
Battery +
   |
100 kΩ
   |
   +---- ADC
   |
100 kΩ
   |
  GND
```

The ADC sees approximately half the battery voltage.

### Validation

Before hardware use, verify:

-   ADC input range.
-   Exact ESP32-C3 ADC behavior.
-   Resistor tolerance.
-   Regulator input range.
-   Peak motor current.
-   Battery protection.
-   Charging configuration.
