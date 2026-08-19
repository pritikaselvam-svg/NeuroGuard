# System Requirements

  ID      Requirement                          Verification
  ------- ------------------------------------ ---------------------
  FR-01   Acquire optical physiological data   Sensor test
  FR-02   Acquire motion data                  IMU test
  FR-03   Process signals using ESP32-C3       Firmware test
  FR-04   Provide haptic notification          Motor test
  FR-05   Monitor battery voltage              ADC test
  FR-06   Support medication reminders         App test
  FR-07   Display trends and alerts            App test
  FR-08   Operate in Demo Mode                 Software test
  FR-09   Define a future BLE interface        Architecture review

## Physical constraints

-   Wrist-worn form factor.
-   Rechargeable single-cell Li-ion.
-   Compact PCB.
-   Sensor-to-skin access.
-   Accessible charging.
-   Safe battery enclosure.

## Safety

The prototype must not be used as a medical decision-making system.
Electrical safety and battery protection must be verified before
physical use.
