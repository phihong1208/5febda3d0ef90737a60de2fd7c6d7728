//
//  UIApplication+JTSImageViewController.m
//  Riposte
//
//  Created by Jared on 4/3/14.
//  Copyright (c) 2014 Riposte LLC. All rights reserved.
//

#import "UIApplication+JTSImageViewController.h"

@implementation UIApplication (JTSImageViewController)

- (BOOL)jts_usesViewControllerBasedStatusBarAppearance {
    static dispatch_once_t once;
    static BOOL viewControllerBased;
    dispatch_once(&once, ^ {
        NSString *key = @"UIViewControllerBasedStatusBarAppearance";
        id object = [[NSBundle mainBundle] objectForInfoDictionaryKey:key];
        viewControllerBased = [object boolValue];
    });
    return viewControllerBased;
}

@end

// Copyright belongs to original author
// http://code4app.net (en) http://code4app.com (cn)
// From the most professional code share website: Code4App.net 
