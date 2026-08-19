# Communication Protocols

## Current

The app uses local simulated JavaScript data. Live BLE has not yet been
validated.

## Target

``` text
ESP32-C3 → BLE → Android
```

## Suggested data packet

``` json
{
  "timestamp": 0,
  "heartRate": 78,
  "spo2": 98,
  "activity": 0.42,
  "fall": false,
  "battery": 84
}
```

The final BLE UUIDs, packet format and update rate should be defined
before live integration.
