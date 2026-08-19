# Biological Rationale

NeuroGuard starts from the question: **what caregiver-relevant changes
can be observed non-invasively?**

``` text
Patient physiology/behavior
        ↓
Observable signal
        ↓
Sensor
        ↓
Feature
        ↓
Event/trend
        ↓
Caregiver information
```

### Movement

Acceleration and angular velocity can represent activity and sudden
events.

### Heart rate

Pulse rate is a measurable physiological variable but is highly
non-specific.

### SpO2-related measurement

The MAX30102 provides optical signals from which pulse and
oxygen-saturation-related estimates can be produced. Accuracy must be
validated before clinical interpretation.

### Medication adherence

The current system treats adherence as a software event: reminder →
response → log.

### Infection-related monitoring

The current hardware does not contain a temperature sensor. Therefore it
cannot claim temperature measurement or infection detection. Heart-rate
elevation is only an indirect physiological indicator.
