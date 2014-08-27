# OBSBlur

This is one of the easiest ways to add a Blur to your projects.
OBSBlur takes the iOS7+ blurs Private Frameworks and makes it available for your projects.
***
[Preview](http://obsvip.ipastore.me/Github/OBSBlur-Preview.gif)
***
##How TO Add To Your Project

### With Color Tint
`_UIBackdropView  *testBlur = [[_UIBackdropView alloc] initWithStyle:2060];`
<br>`[[testBlur inputSettings] setColorTint:[UIColor colorWithRed:0.5 green:0.5 blue:0.0 alpha:1.0]];`
<br>`[[testBlur inputSettings] setColorTintAlpha:0.1];`
<br>`[testBlur setBlurRadiusSetOnce:NO];`
<br>`[testBlur setBlurRadius:4.0];`
<br>`[testBlur setBlurHardEdges:2];`
<br>`[testBlur setBlursWithHardEdges:YES];`
<br>`[testBlur setBlurQuality:@"default"];`
<br>`[self.view addSubview:testBlur];`


### With No Color Tint
`_UIBackdropView *testBlur = [[_UIBackdropView alloc] initWithStyle:2060];`
<br>`[testBlur setBlurRadiusSetOnce:NO];`
<br>`[testBlur setBlurRadius:4.0];`
<br>`[testBlur setBlurHardEdges:2];`
<br>`[testBlur setBlursWithHardEdges:YES];`
<br>`[testBlur setBlurQuality:@"default"];`
<br>`[self.view addSubview:testBlur];`

### UIBackdropView Styles
![Styles](http://obsvip.ipastore.me/Github/OBSBlur-Styles.png)

I take no credit for this, I just took the blur header from UIKit and made it available for you guys.
