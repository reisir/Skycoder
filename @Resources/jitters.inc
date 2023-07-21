[JXR0]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JXR1]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JXR2]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JXR3]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JXR4]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JXR5]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#

[JYR0]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JYR1]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JYR2]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JYR3]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JYR4]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#
[JYR5]
Measure=Calc
Formula=((Random = 1) ? 1 : -1)
HighBound=1
UpdateRandom=1
UpdateDivider=#JitterDirectionSpeed#

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
Option4=UpdateDivider
Value4=#*JitterSpeed*#

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
Option4=UpdateDivider
Value4=#*JitterSpeed*#
