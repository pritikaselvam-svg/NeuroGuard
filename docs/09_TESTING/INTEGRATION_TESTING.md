# Integration Testing

## Current

Software integration is complete for simulated data.

## Future

``` text
Sensors → ESP32-C3 → BLE → Android → Dashboard
```

Test each boundary independently before full-system integration.

## Acceptance criterion

A live sensor value should reach the app with timestamp/source metadata
and the app should visibly distinguish live mode from simulation mode.
