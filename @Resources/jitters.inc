[JitterRandoms]
@IncludeJXR=#@#Jitters\JXR.inc
@IncludeJYR=#@#Jitters\JYR.inc

[JitterIncludes]
@IncludeJitterX=#@#Jitters\XJitters.inc
@IncludeJitterY=#@#Jitters\YJitters.inc

[JitterX0]
Formula=(((#EnableJitter# = 1) ? (JXR0 * MeasureBand0 * Random) : 0) + ([#EnableRingJitter] = 1 ? ([&MaxJitter] / 2) : 0))
[JitterY0]
Formula=(((#EnableJitter# = 1) ? (JYR0 * MeasureBand0 * Random) : 0) + ([#EnableRingJitter] = 1 ? ([&MaxJitter] / 2) : 0))

[JXRFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#Jitters\JXR.inc
Number=6
SectionName=JXR%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((Random = 1) ? 1 : -1)"
Option2=HighBound
Value2=1
Option3=UpdateRandom
Value3=1
Option4=UpdateDivider
Value4=#*JitterDirectionSpeed*#

[JYRFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#Jitters\JYR.inc
Number=6
SectionName=JYR%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((Random = 1) ? 1 : -1)"
Option2=HighBound
Value2=1
Option3=UpdateRandom
Value3=1
Option4=UpdateDivider
Value4=#*JitterDirectionSpeed*#

[JitterFactoryX]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#Jitters\XJitters.inc
Number=6
SectionName=JitterX%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((JXR%% * MeasureBand%% * Random))"
Option2=HighBound
Value2=#*MaxJitter%%*#
Option3=UpdateRandom
Value3=1
Option4=UpdateDivider
Value4=#*JitterSpeed*#

[JitterFactoryY]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=#@#Jitters\YJitters.inc
Number=6
SectionName=JitterY%%
Option0=Measure
Value0=Calc
Option1=Formula
Value1="((JYR%% * MeasureBand%% * Random))"
Option2=HighBound
Value2=#*MaxJitter%%*#
Option3=UpdateRandom
Value3=1
Option4=UpdateDivider
Value4=#*JitterSpeed*#
