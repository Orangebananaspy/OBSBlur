//
//  ViewController.m
//  OBSBlur
//
//  Created by Rutvik Sanghavi on 2014-08-27.
//  Copyright (c) 2014 Orangebananaspy. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    //Adding the the blurview
    testBlur = [[_UIBackdropView alloc] initWithStyle:2060];
	[[testBlur inputSettings] setColorTint:[UIColor colorWithRed:0.5 green:0.5 blue:0.0 alpha:1.0]];
	[[testBlur inputSettings] setColorTintAlpha:0.1];
    [testBlur setBlurRadiusSetOnce:NO];
    [testBlur setBlurRadius:4.0];
    [testBlur setBlurHardEdges:2];
    [testBlur setBlursWithHardEdges:YES];
    [testBlur setBlurQuality:@"default"];
	[self.view addSubview:testBlur];
    
    //Hiding it so you can see it animated
    testBlur.alpha = 0.0f;
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
