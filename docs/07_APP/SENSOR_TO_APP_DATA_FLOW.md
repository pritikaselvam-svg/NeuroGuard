# Sensor-to-App Data Flow

## Current

``` text
sensor.js
   ↓
simulated values
   ↓
app.js
   ↓
HTML UI
   ↓
Android WebView
```

## Target

``` text
MAX30102 ─┐
MPU6050 ──┤
Battery ──┤
          ↓
       ESP32-C3
          ↓
         BLE
          ↓
 SensorDataService
          ↓
       App State
          ↓
          UI
```

This abstraction lets the same UI be tested with simulation, recorded
datasets and eventually live BLE data.
