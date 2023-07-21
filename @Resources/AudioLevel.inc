; Optimal AudioLevel setup
; Thanks to @kodikuu for the math

[Variables]
Bands=6
FPS=60
SkipBands=1

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":"","(.*)":"#SamplingRateOverride#"
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=([MeasureSamplingRate] * #Accuracy# / #FPS#)
FFTOverlap=([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#)
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=(#Bands# + #SkipBands#)
FreqMin=#FreqMin#
FreqMax=#FreqMax#
Sensitivity=#Sensitivity#

[MeasureBand0]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=1

[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=2

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=3

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=4

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=5

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=6
