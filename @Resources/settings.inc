[Variables]
; ╔═╗  ╔═╗  ╔╦╗  ╔╦╗  ╦  ╔╗╔  ╔═╗  ╔═╗
; ╚═╗  ║╣    ║    ║   ║  ║║║  ║ ╦  ╚═╗
; ╚═╝  ╚═╝   ╩    ╩   ╩  ╝╚╝  ╚═╝  ╚═╝

Scale=1

EnableBounce=1
MaxBounce=0.5
BounceTreshold=0.2

;  ╦  ╦  ╔╦╗  ╔╦╗  ╔═╗  ╦═╗
;  ║  ║   ║    ║   ║╣   ╠╦╝
; ╚╝  ╩   ╩    ╩   ╚═╝  ╩╚═

EnableJitter=0
EnableRingJitter=1

; Maximum jitter
MaxJitter0=45

; Maximum ring jitters
MaxJitter1=90
MaxJitter2=40
MaxJitter3=30
MaxJitter4=20
MaxJitter5=10

; Higher number => slower updates
; Controls the main jitter speed
JitterSpeed=1
; Controls the speed of the jitter direction changes
JitterDirectionSpeed=3

; ╔═╗  ╔═╗  ╦    ╔═╗  ╦═╗  ╔═╗
; ║    ║ ║  ║    ║ ║  ╠╦╝  ╚═╗
; ╚═╝  ╚═╝  ╩═╝  ╚═╝  ╩╚═  ╚═╝

; Default colors
StandbyColor=255,255,255,255
ActiveColor=255,0,255,0

; Skull color override
StandbyColor1=#StandbyColor#
ActiveColor1=#ActiveColor#

; Inner ring color override
StandbyColor2=#StandbyColor#
ActiveColor2=#ActiveColor#

; Solid ring color override
StandbyColor3=#StandbyColor#
ActiveColor3=#ActiveColor#
; Progress bar color override
StandbyColor4=#ActiveColor3#
ActiveColor4=#StandbyColor3#

; "Middle" ring color override
StandbyColor5=#StandbyColor#
ActiveColor5=#ActiveColor#

; Outer ring color override
StandbyColor6=#StandbyColor#
ActiveColor6=#ActiveColor#

; ╦═╗  ╔═╗  ╔╦╗  ╔═╗  ╔╦╗  ╦  ╔═╗  ╔╗╔
; ╠╦╝  ║ ║   ║   ╠═╣   ║   ║  ║ ║  ║║║
; ╩╚═  ╚═╝   ╩   ╩ ╩   ╩   ╩  ╚═╝  ╝╚╝

; Intensity is how much sound affects the rotation
; Sustain is the base speed of the rotation
; Direction is 1 for clockwise, -1 counter clockwise

; Inner ring
RotateIntensity2=10
RotateSustain2=500
RotationDirection2=1

; Progress ring
RotateIntensity4=32
RotateSustain4=10000
RotationDirection4=-1

; "Middle" ring
RotateIntensity5=9
RotateSustain5=3200
RotationDirection5=-1

; Outer ring
RotateIntensity6=8
RotateSustain6=2000
RotationDirection6=1

; ╔═╗  ╦ ╦  ╔╦╗  ╦  ╔═╗  ╦    ╔═╗  ╦  ╦  ╔═╗  ╦  
; ╠═╣  ║ ║   ║║  ║  ║ ║  ║    ║╣   ╚╗╔╝  ║╣   ║  
; ╩ ╩  ╚═╝  ═╩╝  ╩  ╚═╝  ╩═╝  ╚═╝   ╚╝   ╚═╝  ╩═╝

Accuracy=5
FreqMin=20
FreqMax=16000
Sensitivity=15
FFTAttack=0
FFTDecay=0

; Change this to 48000 if AudioLevel reports errors that say "FFT must be a multiple of 2" or something similar.
SamplingRateOverride=\1
; The real fix is to set your audio devices sample rate to 48k / 96k from windows audio settings but if that's not possible, use this.
