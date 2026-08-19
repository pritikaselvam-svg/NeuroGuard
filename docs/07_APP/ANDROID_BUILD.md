# Android Build

The application is packaged as an Android WebView project in Android
Studio.

## Assets

``` text
app/src/main/assets/
├── index.html
├── style.css
├── app.js
└── sensor.js
```

## MainActivity

The Kotlin activity loads:

``` text
file:///android_asset/index.html
```

and enables JavaScript for the web application.

## Build

``` text
Build
→ Generate App Bundles or APKs
→ Build APKs
```

The debug APK is normally found under:

``` text
app/build/outputs/apk/debug/
```

## Current evidence

The app has been successfully demonstrated in an Android emulator.
