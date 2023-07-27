[MeasureRotate2]
Measure=Calc
Formula=((MeasureRotate2 % (#RotateSustain2#  * MaxScale)) + (MeasureBand2 * (#RotateIntensity2# * MaxScale) + 1))
MaxValue=(#RotateSustain2# * [&MaxScale])
DynamicVariables=1

[MeasureRotate4]
Measure=Calc
Formula=((MeasureRotate4 % (#RotateSustain4#  * MaxScale)) + (MeasureBand4 * (#RotateIntensity4#  * MaxScale) + 1))
MaxValue=(#RotateSustain4# * [&MaxScale])
DynamicVariables=1

[MeasureRotate5]
Measure=Calc
Formula=((MeasureRotate5 % (#RotateSustain5#  * MaxScale)) + (MeasureBand5 * (#RotateIntensity5#  * MaxScale) + 1))
MaxValue=(#RotateSustain5# * [&MaxScale])
DynamicVariables=1

[MeasureRotate6]
Measure=Calc
Formula=((MeasureRotate6 % (#RotateSustain6#  * MaxScale)) + (MeasureBand6 * (#RotateIntensity6#  * MaxScale) + 1))
MaxValue=(#RotateSustain6# * [&MaxScale])
DynamicVariables=1
