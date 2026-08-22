# KiCad Design Files

This folder contains the editable KiCad design files for the NeuroGuard wearable PCB.

## Files

- `NeuroGuard.kicad_sch` — Complete circuit schematic
- `NeuroGuard.kicad_pcb` — PCB layout and routing
- `NeuroGuard.kicad_pro` — KiCad project configuration

## Design

The PCB integrates:

- WEMOS C3 Mini / ESP32-C3
- MAX30102 physiological sensor
- MPU6050 motion sensor
- TP4056 battery charging
- 3.3 V regulation
- Battery voltage monitoring
- Vibration motor driver
- Status LED
- USB-C power input

## Design Verification

The schematic was checked using KiCad Electrical Rules Check (ERC).

The PCB was subsequently routed and checked using KiCad Design Rules Check (DRC).

## Editing

Open the `.kicad_pro` file in KiCad to access the complete project.
