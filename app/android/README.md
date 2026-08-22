# NeuroGuard Mobile Application

The NeuroGuard application is the software interface for the wearable Alzheimer's patient monitoring system.

It provides a caregiver-facing dashboard for viewing patient information, monitoring simulated health metrics, identifying abnormal activity and presenting alerts.

> **Current implementation:** The application currently runs using simulated sensor data. Hardware sensor-to-app communication will be integrated in a later stage.

---

## Application Overview

The application is built as a lightweight web-based interface that can also be packaged and deployed as an Android application using Android Studio and a WebView.

The current application consists of:

- HTML — application structure and interface
- CSS — visual design and responsive layout
- JavaScript — application logic and dashboard interactions
- Sensor Service — simulated sensor data generation and processing

---

## Project Files

### `index.html`

The main entry point of the application.

It defines:

- Application layout
- Dashboard structure
- Patient information
- Health metric cards
- Navigation
- Alerts
- Monitoring sections
- Media and visual elements

The HTML file provides the structure that is rendered inside the Android WebView.

---

### `style.css`

Contains the visual styling of the application.

It controls:

- Colours
- Typography
- Cards
- Buttons
- Navigation
- Dashboard layout
- Responsive behaviour
- Spacing
- Icons
- Alerts
- Mobile presentation

The stylesheet allows the same interface to operate as both a web application and a mobile interface.

---

### `app.js`

Contains the main application logic.

Responsibilities include:

- Dashboard updates
- UI interactions
- Navigation
- Updating displayed values
- Alert presentation
- Patient monitoring interface
- Interaction between the interface and sensor data

---

### `sensorService.js`

Handles the sensor-data layer of the application.

Since the physical wearable prototype is currently under development, this service provides **simulated sensor readings** representing the data expected from the wearable.

The simulated data can represent parameters such as:

- Heart rate
- SpO₂
- Activity
- Movement
- Fall events
- Other wearable-derived metrics

This allows the complete application interface and monitoring logic to be demonstrated before the physical ESP32 wearable is connected.

---

# Data Flow

The intended architecture is:

```text
Wearable Sensors
       ↓
   ESP32-C3
       ↓
 Sensor Processing
       ↓
      BLE
       ↓
NeuroGuard Android App
       ↓
Caregiver Dashboard
       ↓
Alerts / Monitoring
