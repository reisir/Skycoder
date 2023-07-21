[MeasureRotate]
Measure=Calc
Formula=(((MeasureRotate % (#RotateSustain#  * MaxScale)) + (MeasureBand2 * (#RotateIntensity# * MaxScale) + 1)))
MaxValue=(#RotateSustain# * [&MaxScale])
MinValue=0
DynamicVariables=1

[MeasureRotate1]
Measure=Calc
Formula=(((MeasureRotate1 % (#RotateSustain1#  * MaxScale)) + (MeasureBand3 * (#RotateIntensity1#  * MaxScale) + 1)))
MaxValue=(#RotateSustain1# * [&MaxScale])
DynamicVariables=1

[MeasureRotate2]
Measure=Calc
Formula=(((MeasureRotate2 % (#RotateSustain2#  * MaxScale)) + (MeasureBand5 * (#RotateIntensity2# * MaxScale) + 1)))
MaxValue=(#RotateSustain2#  * [&MaxScale])
DynamicVariables=1
