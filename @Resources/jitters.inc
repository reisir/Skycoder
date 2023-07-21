[Variables]
JitterSpeed=2

[JXR0]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JXR1]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JXR2]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JXR3]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JXR4]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JXR5]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#

[JYR0]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JYR1]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JYR2]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JYR3]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JYR4]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#
[JYR5]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterSpeed#

[JitterIncludes]
@IncludeJitterX=#@#XJitters.inc
@IncludeJitterY=#@#YJitters.inc

[JitterX0]
Formula=(((#Jitter# = 1) ? (JXR0 * MeasureBand0 * Random) : 0) + ([#RingJitter] = 1 ? (#MaxRingJitter# / 2) : 0))
[JitterY0]
Formula=(((#Jitter# = 1) ? (JXR0 * MeasureBand0 * Random) : 0) + ([#RingJitter] = 1 ? (#MaxRingJitter# / 2) : 0))

[JitterFactoryX]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#XJitters.inc
Number=6
SectionName=JitterX%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((JXR%% * MeasureBand%% * Random))"
Option2=HighBound
Value2=#*MaxRingJitter*#
Option3=UpdateRandom
Value3=1

[JitterFactoryY]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#YJitters.inc
Number=6
SectionName=JitterY%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((JYR%% * MeasureBand%% * Random))"
Option2=HighBound
Value2=#*MaxRingJitter*#
Option3=UpdateRandom
Value3=1
