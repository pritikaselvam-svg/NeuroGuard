# PCB Layout Decisions

The WEMOS C3 Mini is the main placement anchor because of its module
size and antenna/keep-out considerations.

The optical sensor should be positioned to permit skin contact. The
MPU6050 should be mechanically stable to produce predictable motion
data.

Power components are grouped around USB-C, charging and regulation. The
vibration motor driver should have a compact high-current path and
should be kept away from the most sensitive sensor area where practical.

The final enclosure must be checked against the actual assembled PCB,
not only the schematic.
