//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "UIInteractionProgressObserver.h"

@class NSString, SBAppSwitcherSettings, SBMainWorkspaceTransitionRequest, SBSceneLayoutWorkspaceTransaction, SBUIDismissSwitcherAnimationController, SBUIPresentSwitcherAnimationController, SBWorkspaceAlert, UIPreviewForceInteractionProgress;

@interface SBSwitcherForcePressSystemGestureTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, UIInteractionProgressObserver>
{
    SBAppSwitcherSettings *_switcherSettings;
    UIPreviewForceInteractionProgress *_forceObserver;
    _Bool _isPanning;
    _Bool _didAnimateToInitialPosition;
    _Bool _didFinishAnimatingToInitialPosition;
    _Bool _didPop;
    _Bool _didBump;
    _Bool _canPan;
    _Bool _didCommitToSwitcher;
    _Bool _didCommitToNextDisplayItem;
    _Bool _didPerformPresentLayoutCompletion;
    double _minNormalizedTranslation;
    CDStruct_efa48ab2 _currentTransitionParameters;
    struct CGPoint _currentVelocity;
    SBUIPresentSwitcherAnimationController *_presentAnimationController;
    SBUIDismissSwitcherAnimationController *_dismissAnimationController;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    CDUnknownBlockType _presentLayoutCompletion;
    CDUnknownBlockType _dismissLayoutCompletion;
    SBMainWorkspaceTransitionRequest *_dismissTransitionRequest;
    SBWorkspaceAlert *_alertToGoTo;
}

- (void).cxx_destruct;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)_runDismissLayoutCompletionIfPossible;
- (void)_runPresentLayoutCompletionIfPossible;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)_currentProgressForForceObserver:(id)arg1 withMaxProgress:(double)arg2;
- (void)_cancelInteractionWithGesture:(id)arg1;
- (void)_endInteractionWithGesture:(id)arg1;
- (void)_updateInteractionProgressWithGesture:(id)arg1;
- (double)_currentProgressForGesture:(id)arg1 rawNormalizedTranslation:(double *)arg2 normalizedTranslation:(double *)arg3;
- (void)_noteInteractionProgressWithGesture:(id)arg1 orForceObserver:(id)arg2;
- (void)_tearDownForceObserver;
- (void)_endInteractionWithParameters:(CDStruct_efa48ab2)arg1 velocity:(struct CGPoint)arg2;
- (void)_crossFadeToEndInteraction;
- (_Bool)_requiresAdditionalAnimation;
- (void)_beginDismissalWithCurrentTranslation:(double)arg1;
- (id)_transitionRequestForPresentationWithCommitment:(_Bool)arg1 toNextDisplayItem:(_Bool)arg2;
- (double)_translationWithVelocity:(struct CGPoint)arg1 acceleration:(double)arg2;
- (void)_noteDidCommitToActivatingSwitcher:(_Bool)arg1 didCommitToNextDisplayItem:(_Bool)arg2;
- (double)_initialSpringVelocityForVelocity:(struct CGPoint)arg1 withTranslation:(double)arg2;
- (void)_updateInteractionParameters:(CDStruct_efa48ab2)arg1;
- (void)_releaseOrientationLock;
- (void)_lockOrientation;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

