[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1

MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeasureGroup Scale][!UpdateMeterGroup Scale][!Redraw]
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement# < 0.2 ? 0.2 : [#Scale]-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeasureGroup Scale][!UpdateMeterGroup Scale][!Redraw]

ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=#__CenterHorizontal#
ContextAction3=[!SetWindowPosition "50%" "[#CURRENTCONFIGY]" "50%" "0%"]
ContextTitle4=#__CenterVertical#
ContextAction4=[!SetWindowPosition "([#CURRENTCONFIGX] + ([#CURRENTCONFIGWIDTH] / 2))" "50%" "50%" "50%"]
ContextTitle5=-
ContextAction5=
ContextTitle6=#__EditVariables#
ContextAction6=["#CONFIGEDITOR#" "#@#settings.inc"]
ContextTitle7=#__Refresh#
ContextAction7=[!RefreshGroup Skycoder]
ContextTitle8=-
ContextAction8=
ContextTitle9=#__ToggleBounce#
ContextAction9=[!SetVariable Bounce "([#Bounce] = 1 ? 0 : 1)"][!WriteKeyValue Variables Bounce [#Bounce] "#@#settings.inc"][!Refresh]
ContextTitle10=#__ToggleJitter#
ContextAction10=[!SetVariable EnableJitter "([#EnableJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables EnableJitter [#EnableJitter] "#@#settings.inc"][!Refresh]
ContextTitle11=#__ToggleRingJitter#
ContextAction11=[!SetVariable EnableRingJitter "([#EnableRingJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables EnableRingJitter [#EnableRingJitter] "#@#settings.inc"][!Refresh]
ContextTitle12=-
ContextAction12=
ContextTitle13=#__SkinMenu#
ContextAction13=[!SkinMenu]

RightMouseUpAction=[!SkinCustomMenu]
Group=Skycoder
