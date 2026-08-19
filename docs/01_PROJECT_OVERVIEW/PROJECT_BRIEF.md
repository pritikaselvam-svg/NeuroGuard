# Project Brief

## Concept

NeuroGuard is a compact wearable concept intended to provide caregivers
with continuous observations of selected physiological and movement
signals while supporting medication reminders and event alerts.

## Intended users

-   People living with Alzheimer's disease or related cognitive
    impairment.
-   Family caregivers.
-   Professional caregivers.
-   Student/research teams exploring assistive-health technology.

## Core problem

A caregiver cannot continuously observe a patient's movement,
sleep/activity pattern, physiological state, or medication response. A
wearable can provide an additional stream of observations and alerts.

## Proposed solution

A wrist-worn device combines:

-   WEMOS C3 Mini / ESP32-C3.
-   MAX30102 optical sensor.
-   MPU6050 accelerometer/gyroscope.
-   Battery monitor.
-   Vibration motor.
-   Status LED.
-   Rechargeable Li-ion power system.

The companion application presents the resulting information in a
caregiver-oriented interface.

## Design philosophy

NeuroGuard is a **support system**, not a diagnostic system. It reports
observations, trends and event candidates and clearly identifies
uncertainty.

## Demonstration strategy

Because the physical sensor-to-app pipeline is not yet complete, the
software uses deterministic/randomized simulated values to demonstrate
the complete user workflow before hardware integration.
