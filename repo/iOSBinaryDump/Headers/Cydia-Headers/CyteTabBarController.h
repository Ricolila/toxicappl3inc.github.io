/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@class UIViewController;

@interface CyteTabBarController : _CC_MD5
{
    UIViewController *transient_;
    struct MenesObjectHandle<UIViewController, 0> remembered_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (void)unloadData;
- (id)unselectedViewController;
- (void)setUnselectedViewController:(id)fp8;
- (void)dismissModalViewControllerAnimated:(BOOL)fp8;
- (void)tabBarController:(id)fp8 didSelectViewController:(id)fp12;
- (void)didReceiveMemoryWarning;

@end
