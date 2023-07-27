; Source measure. Should have MinValue / MaxValue set if not automatically provided by the measure
[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
AverageSize=62

; Transform the source to 0-1 for easier use
[decimal]
Measure=Calc
Formula=([MeasureProgress:%] / 100)
DynamicVariables=1

; Arc positions on the ellipse. Measured in rotations (0.5 = 180 deg)
; Breaks if start > end || start < 0 || end < 0
[start]
Measure=Calc
Formula=0
[end]
Measure=Calc
Formula=(decimal * #RotationAngle# / 360)

; Offset the "cycle" of the arc. Basically rotates it along the ellipse.
[arcoffset]
Measure=Calc
Formula=[MeasureRotate4:%] / 100
DynamicVariables=1

; The radiuses can be made dynamic if you want to animate the size of the ellipse
[RX]
Measure=Calc
Formula=#Width# / 2
DynamicVariables=1
[RY]
Measure=Calc
Formula=#Height# / 2
DynamicVariables=1

; Get the direction multiplier
[Direction]
Measure=Calc
Formula=0 - #RotationDirection4#
UpdateDivider=-1

; Arc cordinates
[X1]
Measure=Calc
Formula=RX + RX * Sin((start + arcoffset) * Pi * 2 * Direction + Rad(#StartAngle#))
[Y1]
Measure=Calc
Formula=RY + RY * Cos((start + arcoffset) * Pi * 2 * Direction + Rad(#StartAngle#))
[X2]
Measure=Calc
Formula=RX + RX * Sin((end + arcoffset) * Pi * 2 * Direction + Rad(#StartAngle#))
[Y2]
Measure=Calc
Formula=RY + RY * Cos((end + arcoffset) * Pi * 2 * Direction + Rad(#StartAngle#))

; Arc shape options
[SweepDirection]
Measure=Calc
Formula=#RotationDirection4# = 1 ? 0 : 1
UpdateDivider=-1
[ArcSize]
Measure=Calc
Formula=((end - start) <= 0.5) ? 0 : 1
