
[Variables]
JitterSpeed=2

[JXR]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#

[JYR]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#

[JitterX]
Measure=Calc
Formula=(#MaxJitter# - (JXR * Bounce * Random))
HighBound=#MaxJitter#
UpdateRandom=1

[JitterY]
Measure=Calc
Formula=(#MaxJitter# - (JYR * Bounce * Random))
HighBound=#MaxJitter#
UpdateRandom=1
