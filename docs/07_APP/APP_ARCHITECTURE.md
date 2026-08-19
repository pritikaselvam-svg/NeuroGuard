# Application Architecture

``` text
index.html
  ├── style.css
  ├── app.js
  └── sensor.js
          ↓
   simulated data layer
          ↓
      app state
          ↓
          UI
```

Android wrapper:

``` text
MainActivity.kt
      ↓
    WebView
      ↓
file:///android_asset/index.html
```

Future:

``` text
BLE → SensorDataService → App State → UI
```
