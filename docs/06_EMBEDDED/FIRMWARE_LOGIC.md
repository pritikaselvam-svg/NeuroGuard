# Firmware Logic

## Motion

A basic acceleration magnitude is:

``` text
sqrt(ax² + ay² + az²)
```

This can be used as an input to activity/fall logic.

## Fall candidate

A more robust future algorithm should combine:

-   Acceleration spike.
-   Orientation change.
-   Post-event inactivity.

A single threshold is not a clinically validated fall detector.

## Haptic

``` text
Event → GPIO → transistor ON → motor vibration → transistor OFF
```

## Battery

``` text
ADC → voltage conversion → battery estimate → warning
```

Battery percentage should ultimately use a calibrated discharge curve
rather than a purely linear assumption.
