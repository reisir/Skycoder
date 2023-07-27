[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1

MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeasureGroup Scale][!UpdateMeterGroup Scale][!Redraw]
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement# < 0.2 ? 0.2 : [#Scale]-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeasureGroup Scale][!UpdateMeterGroup Scale][!Redraw]

@IncludeContextMenu=#@#context.inc
