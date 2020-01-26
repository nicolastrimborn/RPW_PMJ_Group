N10 G0 X0 Y0 (Zero Axes)
N20 M05 (Handshake)
N30 G01 X30 Y100 F4000  (Linear interpolation)
N30 G01 X-15 Y-100 F4000  (Linear interpolation)
N40 G01 X30 F4000
N50 G01 Y180 F4000
N60 G01 X0 Y-100 F4000
N70 G01 Y0 (Zero Y Axes)
N80 G01 X0 (Zero X Axes)
N90 G01 X15 Y15 F4000
N70 G01 Y0 (Zero Y Axes)
N80 G01 X0 (Zero X Axes)
M30 (End Program)