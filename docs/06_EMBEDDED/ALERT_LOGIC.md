# Alert Logic

  Event                  Source         Output
  ---------------------- -------------- -----------------
  Medication reminder    App schedule   Vibration + app
  Fall candidate         MPU6050        Alert
  Unusual activity       MPU6050        Flag
  Physiological change   MAX30102       Flag
  Low battery            ADC            Warning

Alerts should eventually have severity levels and an acknowledgement
workflow.
