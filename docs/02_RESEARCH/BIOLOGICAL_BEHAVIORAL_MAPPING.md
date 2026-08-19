# Biological / Behavioral Mapping

  ----------------------------------------------------------------------------------------
  Concern             Observable change     Sensor/data    Measurable?    Interpretation
                                            source                        
  ------------------- --------------------- -------------- -------------- ----------------
  Wandering           Increased/unusual     MPU6050        Yes            Behavioral flag
                      movement                                            

  Sleep disturbance   Altered activity      MPU6050        Indirect       Activity proxy
                      during sleep period                                 

  Falls               Sudden                MPU6050        Yes            Event candidate
                      acceleration/impact                                 
                      pattern                                             

  Elevated HR         Pulse-rate increase   MAX30102       Yes            Physiological
                                                                          observation

  Reduced activity    Lower movement        MPU6050        Yes            Activity trend
                      intensity                                           

  Dehydration risk    HR + activity pattern MPU6050 +      Indirect       Risk indicator
                                            MAX30102                      

  Medication          Missed                App            Yes            Adherence log
  non-adherence       acknowledgement                                     

  Infection-related   Possible HR elevation MAX30102       Indirect       Not infection
  concern                                                                 detection
  ----------------------------------------------------------------------------------------

## Interpretation rule

A sensor measures a physical signal. Software creates a feature from
that signal. A feature may support an event flag. None of these
automatically constitutes a clinical diagnosis.
