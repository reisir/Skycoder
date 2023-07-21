[Variables]
; ╔═╗  ╔═╗  ╔╦╗  ╔╦╗  ╦  ╔╗╔  ╔═╗  ╔═╗
; ╚═╗  ║╣    ║    ║   ║  ║║║  ║ ╦  ╚═╗
; ╚═╝  ╚═╝   ╩    ╩   ╩  ╝╚╝  ╚═╝  ╚═╝

OverlayScale=1.4

Scale=1.2

Bounce=1
MaxBounce=0.5
BounceTreshold=0.2

Jitter=0
MaxJitter=35

RingJitter=0
MaxRingJitter=35

JitterSpeed=2
JitterDirectionSpeed=2

; ╔═╗  ╔═╗  ╦    ╔═╗  ╦═╗  ╔═╗
; ║    ║ ║  ║    ║ ║  ╠╦╝  ╚═╗
; ╚═╝  ╚═╝  ╩═╝  ╚═╝  ╩╚═  ╚═╝

; Default RGB color
DefaultRED=255
DefaultGREEN=255
DefaultBLUE=255
DefaultALPHA=255

; RGB color to transform into
RED=255
GREEN=0
BLUE=255
ALPHA=0

; ╦═╗  ╔═╗  ╔╦╗  ╔═╗  ╔╦╗  ╦  ╔═╗  ╔╗╔
; ╠╦╝  ║ ║   ║   ╠═╣   ║   ║  ║ ║  ║║║
; ╩╚═  ╚═╝   ╩   ╩ ╩   ╩   ╩  ╚═╝  ╝╚╝

; Intensity is how much sound affects the rotation
; Sustain is the base speed of the rotation

; Inner ring
RotateIntensity=6
RotateSustain=1200
RotationDirection=1

; Middle ring
RotateIntensity1=10
RotateSustain1=1600
RotationDirection1=-1

; Outer ring
RotateIntensity2=8
RotateSustain2=1400
RotationDirection2=1

; ╔═╗  ╦ ╦  ╔╦╗  ╦  ╔═╗  ╦    ╔═╗  ╦  ╦  ╔═╗  ╦  
; ╠═╣  ║ ║   ║║  ║  ║ ║  ║    ║╣   ╚╗╔╝  ║╣   ║  
; ╩ ╩  ╚═╝  ═╩╝  ╩  ╚═╝  ╩═╝  ╚═╝   ╚╝   ╚═╝  ╩═╝

Accuracy=5
FreqMin=20
FreqMax=16000
Sensitivity=25
FFTAttack=0
FFTDecay=0

; Change this to 48000 if AudioLevel reports errors that say "FFT must be a multiple of 2" or something similar.
SamplingRateOverride=\1
; The real fix is to set your audio devices sample rate to 48k / 96k from windows audio settings but if that's not possible, use this.
