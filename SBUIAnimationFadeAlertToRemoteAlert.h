//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationFadeAlertToRemoteAlert : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBRemoteAlertAdapter *_remoteAlert;
    SBMainAlertManager *_alertManager;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _initialFakeStatusBarNeeded;
    double _animationDuration;
}

- (void).cxx_destruct;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

