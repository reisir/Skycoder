[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
Group=Skycoder
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
ContextTitle7=#__RefreshGroup#
ContextAction7=[!RefreshGroup Skycoder]
ContextTitle8=-
ContextAction8=
ContextTitle9=#__ToggleEnableBounce#
ContextAction9=[!SetVariable "EnableBounce" "([#EnableBounce] = 1 ? 0 : 1)"][!WriteKeyValue Variables "EnableBounce" [#EnableBounce] "#@#settings.inc"][!Refresh]
ContextTitle10=#__ToggleEnableJitter#
ContextAction10=[!SetVariable "EnableJitter" "([#EnableJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables "EnableJitter" [#EnableJitter] "#@#settings.inc"][!Refresh]
ContextTitle11=#__ToggleEnableRingJitter#
ContextAction11=[!SetVariable "EnableRingJitter" "([#EnableRingJitter] = 1 ? 0 : 1)"][!WriteKeyValue Variables "EnableRingJitter" [#EnableRingJitter] "#@#settings.inc"][!Refresh]
ContextTitle12=-
ContextAction12=
ContextTitle13=#__SkinMenu#
ContextAction13=[!SkinMenu]

