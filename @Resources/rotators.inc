[MeasureRotate]
Measure=Calc
Formula=(((MeasureRotate % (#RotateSustain#  * MaxScale)) + (MeasureAudioRMS * (#RotateIntensity# * MaxScale) + 1)))
MaxValue=(#RotateSustain# * [&MaxScale])
MinValue=0
DynamicVariables=1

[MeasureRotate1]
Measure=Calc
Formula=(((MeasureRotate1 % (#RotateSustain1#  * MaxScale)) + (MeasureAudioRMS1 * (#RotateIntensity1#  * MaxScale) + 1)))
MaxValue=(#RotateSustain1# * [&MaxScale])
DynamicVariables=1

[MeasureRotate2]
Measure=Calc
Formula=(((MeasureRotate2 % (#RotateSustain2#  * MaxScale)) + (MeasureAudioRMS3 * (#RotateIntensity2# * MaxScale) + 1)))
MaxValue=(#RotateSustain2#  * [&MaxScale])
DynamicVariables=1
