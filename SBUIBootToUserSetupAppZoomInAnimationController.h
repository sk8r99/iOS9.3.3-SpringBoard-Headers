//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIBootToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController
{
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    UIView *_snapshotView;
}

- (void).cxx_destruct;
- (void)_finishedZooming;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
