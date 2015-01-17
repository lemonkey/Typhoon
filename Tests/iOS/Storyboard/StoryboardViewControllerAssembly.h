////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////


#import "TyphoonAssembly.h"

@class StoryboardInitialViewController;

@interface StoryboardViewControllerAssembly : TyphoonAssembly

- (StoryboardInitialViewController *)initialViewController;

- (UIViewController *)firstViewController;

- (UIViewController *)secondViewController;

- (UIViewController *)uniqueViewController;

@end