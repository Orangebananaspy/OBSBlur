@interface _UIBackdropViewSettings : NSObject
	+ (id)settingsForStyle:(int)arg1;
- (void)setColorTintAlpha:(CGFloat)alpha;
- (void)setColorTint:(UIColor *)tint;
@end

@interface _UIBackdropView : UIView
	- (id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(BOOL)arg2 settings:(id)arg3;
	- (id)initWithPrivateStyle:(int)arg1;
	- (id)initWithSettings:(id)arg1;
	- (id)initWithStyle:(int)arg1;
	
	- (void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2 blurHardEdges:(int)arg3;
	- (void)setBlurFilterWithRadius:(float)arg1 blurQuality:(id)arg2;
	- (void)setBlurHardEdges:(int)arg1;
	- (void)setBlurQuality:(id)arg1;
	- (void)setBlurRadius:(float)arg1;
	- (void)setBlurRadiusSetOnce:(BOOL)arg1;
	- (void)setBlursBackground:(BOOL)arg1;
	- (void)setBlursWithHardEdges:(BOOL)arg1;
- (_UIBackdropViewSettings *)outputSettings;
- (_UIBackdropViewSettings *)inputSettings;

-(void)setAppliesOutputSettingsAnimationDuration:(CGFloat)duration;

- (void)setComputesColorSettings:(BOOL)val;
- (void)setSimulatesMasks:(BOOL)val;

- (NSString *)groupName;
- (void)setGroupName:(NSString *)groupName;

@end