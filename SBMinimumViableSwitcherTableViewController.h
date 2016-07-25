//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherContentViewControlling.h"

@class NSArray, NSMutableArray, NSString, SBAppView, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, _UILegibilitySettings;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling>
{
    NSMutableArray *_displayItems;
    id <SBMainAppSwitcherContentViewControllerDelegate> _delegate;
    SBAppView *_temporaryAppView;
    SBAppView *_temporarySideAppView;
    _UILegibilitySettings *_legibilitySettings;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _invalidated;
}

+ (double)snapshotScale;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState; // @synthesize _initialLayoutState;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem; // @synthesize _returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem; // @synthesize _initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem; // @synthesize _returnToDisplayItem;
- (void).cxx_destruct;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)_unhostSideAppToStopHidingThem;
- (void)_hostSideAppToHideThem;
- (void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(CDStruct_efa48ab2)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDisplayItem:(id)arg1 updateScrollPosition:(_Bool)arg2 forReason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

