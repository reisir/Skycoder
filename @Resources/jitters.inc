[Variables]
; origin
o=194
; the radiai of the rings
r5=184
r4=158
r3=134
r2=110
; the radius of the skull
r1=95
; half of strokewidth
sw=9

[edge]
Measure=Calc
Formula=(#o# + #r5# + #sw#) * Scale
UpdateDivider=-1

[mj0]
Measure=Calc
Formula=edge + #MaxJitter0#
UpdateDivider=-1
[mj1]
Measure=Calc
Formula=((#o# + #r1#) * Scale) + [#MaxJitter1]
UpdateDivider=-1
[mj2]
Measure=Calc
Formula=((#o# + #r2# + #sw#) * Scale) + [#MaxJitter1]
UpdateDivider=-1
[mj3]
Measure=Calc
Formula=((#o# + #r3# + #sw#) * Scale) + [#MaxJitter1]
UpdateDivider=-1
[mj4]
Measure=Calc
Formula=((#o# + #r4# + #sw#) * Scale) + [#MaxJitter1]
UpdateDivider=-1
[mj5]
Measure=Calc
Formula=((#o# + #r5# + #sw#) * Scale) + [#MaxJitter1]
UpdateDivider=-1

[MaxJitter]
Measure=Calc
Formula=((Max(Max(Max(Max(Max(mj0,mj1),mj2),mj3),mj4),mj5) - edge) / 2)
UpdateDivider=-1

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
