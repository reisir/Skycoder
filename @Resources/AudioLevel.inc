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

[MeasureBass]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=1

[MeasureAudioRMSskull]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=2

[MeasureAudioRMS]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=3

[MeasureAudioRMS1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=4

[MeasureAudioRMS2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=5

[MeasureAudioRMS3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=6
