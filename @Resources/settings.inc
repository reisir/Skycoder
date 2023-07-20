[Variables]
;Skycoder scale 
SCALE=1

;Sombra overlay scale
OverlayScale=1.4

;Default RGB color
DefaultRED=255
DefaultGREEN=255
DefaultBLUE=255
DefaultALPHA=255

;RGB color to transform into
RED=255
GREEN=0
BLUE=255
ALPHA=0

;Ring options
;Intensity is how much the ring reacts to sound
;Sustain is the default speed
;Direction is 1 for clockwise, -1 for counterclockwise

;Inner ring options
RotateIntensity=6
RotateSustain=1200
RotationDirection=1

;Middle ring options
RotateIntensity1=10
RotateSustain1=1600
RotationDirection1=-1

;Outer ring options
RotateIntensity2=8
RotateSustain2=1400
RotationDirection2=1

;Individual colors. DO NOT TOUCH!
CenterColor=		(#DefaultRED# - (#DefaultRED# - #RED#) * [MeasureAudioRMSskull]),	(#DefaultGREEN# - (#DefaultGREEN# - #GREEN#) * [MeasureAudioRMSskull]),	(#DefaultBLUE# - (#DefaultBLUE# - #BLUE#) * [MeasureAudioRMSskull]),(#DefaultALPHA# - (#DefaultALPHA# - #ALPHA#) * [MeasureAudioRMSskull])
InnerColor=			(#DefaultRED# - (#DefaultRED# - #RED#) * [MeasureAudioRMS]),	 	(#DefaultGREEN# - (#DefaultGREEN# - #GREEN#) * [MeasureAudioRMS]),	 	(#DefaultBLUE# - (#DefaultBLUE# - #BLUE#) * [MeasureAudioRMS])     ,(#DefaultALPHA# - (#DefaultALPHA# - #ALPHA#) * [MeasureAudioRMS])	 
MiddleSolidColor=	(#DefaultRED# - (#DefaultRED# - #RED#) * [MeasureAudioRMS1]),	 	(#DefaultGREEN# - (#DefaultGREEN# - #GREEN#) * [MeasureAudioRMS1]),	 	(#DefaultBLUE# - (#DefaultBLUE# - #BLUE#) * [MeasureAudioRMS1])	   ,(#DefaultALPHA# - (#DefaultALPHA# - #ALPHA#) * [MeasureAudioRMS1])	 
MiddleColor=		(#DefaultRED# - (#DefaultRED# - #RED#) * [MeasureAudioRMS2]),	 	(#DefaultGREEN# - (#DefaultGREEN# - #GREEN#) * [MeasureAudioRMS2]),	 	(#DefaultBLUE# - (#DefaultBLUE# - #BLUE#) * [MeasureAudioRMS2])	   ,(#DefaultALPHA# - (#DefaultALPHA# - #ALPHA#) * [MeasureAudioRMS2])	 
OuterColor=			(#DefaultRED# - (#DefaultRED# - #RED#) * [MeasureAudioRMS3]),	 	(#DefaultGREEN# - (#DefaultGREEN# - #GREEN#) * [MeasureAudioRMS3]),	 	(#DefaultBLUE# - (#DefaultBLUE# - #BLUE#) * [MeasureAudioRMS3])	   ,(#DefaultALPHA# - (#DefaultALPHA# - #ALPHA#) * [MeasureAudioRMS3]) 