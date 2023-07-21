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
ContextTitle6=#__ToggleBounce#
ContextAction6=[!SetVariable Bounce "([#Bounce] = 1 ? 0 : 1)"][!WriteKeyValue Variables Bounce [#Bounce] "#@#settings.inc"][!Refresh]
ContextTitle7=#__ToggleJitter#
ContextAction7=[!SetVariable Jitter "([#Jitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables Jitter [#Jitter] "#@#settings.inc"][!Refresh]
ContextTitle8=#__ToggleRingJitter#
ContextAction8=[!SetVariable RingJitter "([#RingJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables RingJitter [#RingJitter] "#@#settings.inc"][!Refresh]
ContextTitle9=-
ContextAction9=
ContextTitle10=#__Refresh#
ContextAction10=[!RefreshGroup Skycoder]

RightMouseUpAction=[!SkinCustomMenu]
Group=Skycoder
