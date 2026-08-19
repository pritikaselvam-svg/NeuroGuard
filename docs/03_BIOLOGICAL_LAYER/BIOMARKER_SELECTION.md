# Signal / Biomarker Selection

  --------------------------------------------------------------------------
  Signal            Rationale            Sensor            Limitation
  ----------------- -------------------- ----------------- -----------------
  Heart rate        Non-invasive         MAX30102          Non-specific
                    physiological                          
                    observation                            

  SpO2-related      Additional           MAX30102          Requires
  optical signal    physiological                          validation
                    context                                

  Acceleration      Activity/fall events MPU6050           False positives
                                                           possible

  Gyroscope         Orientation/motion   MPU6050           Drift/noise
                    context                                

  Battery voltage   Device reliability   Divider + ADC     Calibration
                                                           required

  Medication        Adherence support    App               Self/caregiver
  response                                                 reported
  --------------------------------------------------------------------------

The selection principle is: **every sensor must answer a defined
question.**
