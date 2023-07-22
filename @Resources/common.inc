[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1

MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement# < 0.5 ? 0.5 : [#Scale]-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]" "#@#settings.inc"][!UpdateMeter *][!Redraw]

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
ContextAction6=["#CONFIGEDITOR#" "#@#Variables.inc"]
ContextTitle7=#__Refresh#
ContextAction7=[!RefreshGroup Skycoder]
ContextTitle8=-
ContextAction8=
ContextTitle9=#__ToggleBounce#
ContextAction9=[!SetVariable Bounce "([#Bounce] = 1 ? 0 : 1)"][!WriteKeyValue Variables Bounce [#Bounce] "#@#settings.inc"][!Refresh]
ContextTitle10=#__ToggleJitter#
ContextAction10=[!SetVariable Jitter "([#EnableJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables Jitter [#EnableJitter] "#@#settings.inc"][!Refresh]
ContextTitle11=#__ToggleRingJitter#
ContextAction11=[!SetVariable RingJitter "([#EnableRingJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables RingJitter [#EnableRingJitter] "#@#settings.inc"][!Refresh]
ContextTitle12=-
ContextAction12=
ContextTitle13=#__SkinMenu#
ContextAction13=[!SkinMenu]

RightMouseUpAction=[!SkinCustomMenu]
Group=Skycoder
