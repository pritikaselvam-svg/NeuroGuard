# NeuroGuard[README.md](https://github.com/user-attachments/files/31235367/README.md)
# NeuroGuard --- Wearable Alzheimer's Patient Monitoring & Caregiver Support System

NeuroGuard is an interdisciplinary engineering prototype combining
**biological/behavioral reasoning, embedded electronics, PCB design,
software, Android packaging, and wearable CAD**.

> **Current prototype status:** The caregiver application is functional
> in Demo/Simulation Mode. The Android application is a WebView wrapper
> around the HTML/CSS/JavaScript interface. The physical PCB and live
> sensor-to-phone BLE pipeline remain hardware-integration stages.

## What the system is designed to support

-   Heart-rate monitoring using MAX30102.
-   SpO2-related optical measurement capability.
-   Motion/activity monitoring using MPU6050.
-   Fall-event detection logic.
-   Unusual activity / wandering-support logic.
-   Sleep/activity trend estimation.
-   Medication reminders and adherence logging.
-   Haptic alerts through a vibration motor.
-   Battery monitoring.
-   Caregiver dashboard and alerts.

## System architecture

``` text
       BIOLOGICAL / BEHAVIORAL LAYER
                    |
                    v
             Signal selection
                    |
                    v
 MAX30102 ----+                 +---- MPU6050
              |                 |
              +---- ESP32-C3 ---+
                       |
             +---------+---------+
             |         |         |
             v         v         v
          Haptic    Battery     BLE
          Alert     Monitor      |
                                 v
                           Android App
                                 |
                                 v
                          Caregiver UI
```

## Repository structure

``` text
docs/        Research, design decisions, testing and evidence
hardware/    KiCad, Gerbers, BOM and datasheets
firmware/    ESP32-C3 firmware
app/         Web application and Android wrapper
cad/         Wearable enclosure files
data/        Simulated/test data
media/       Portfolio images and diagrams
```

## Important medical boundary

NeuroGuard is a **student engineering prototype, not a medical
diagnostic device**.

The current system must not be described as diagnosing Alzheimer's
disease, infection, dehydration, or another medical condition. In
particular, MAX30102 heart-rate data is a physiological signal, not an
infection detector. The current hardware also does not contain a
dedicated temperature sensor.

## Current versus future implementation

### Current

``` text
Simulated JavaScript data
        ↓
HTML/CSS/JS dashboard
        ↓
Android WebView
```

### Target

``` text
MAX30102 + MPU6050 + battery
             ↓
          ESP32-C3
             ↓
             BLE
             ↓
        Android App
             ↓
       Caregiver UI
```

## Engineering evidence

The repository documents the complete path:

**Problem → research → biological mapping → requirements → component
selection → schematic → PCB → firmware architecture → app → CAD →
testing → limitations → future work.**

## Status

-   [x] Problem definition
-   [x] Biological/behavioral mapping
-   [x] Component selection
-   [x] KiCad schematic
-   [x] PCB routing
-   [x] Web dashboard
-   [x] Simulated sensor layer
-   [x] Android WebView packaging
-   [ ] Physical PCB bring-up
-   [ ] Real sensor validation
-   [ ] ESP32-C3 firmware validation
-   [ ] BLE integration
-   [ ] Enclosure fabrication
-   [ ] Integrated hardware testing
-   [ ] Human/clinical validation
