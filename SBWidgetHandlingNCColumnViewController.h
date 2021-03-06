//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNCColumnViewController.h"

#import "NCWidgetDataSourceObserver.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBTodayViewSettingsViewControllerDelegate.h"
#import "SBWidgetHandling.h"
#import "SBWidgetViewControllerDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SBWidgetHandlingNCColumnViewController : SBNCColumnViewController <SBWidgetHandling, SBWidgetViewControllerDelegate, SBNotificationCenterWidgetHost, NCWidgetDataSourceObserver, SBTodayViewSettingsViewControllerDelegate>
{
    NSMutableDictionary *_identifiersToWidgetSections;
    NSArray *_topLevelInterfaceItemIdentifierOrder;
    NSMutableSet *_defaultEnabledIDs;
    CDUnknownBlockType _pendingVisibleWidgetCompletion;
    struct CGSize _cachedContentSize;
    id <SBWidgetViewControllerDelegate> _widgetDelegate;
    id <SBWidgetHandlingNCColumnViewControllerDelegate> _delegate;
}

+ (id)interfaceItemForDatum:(id)arg1 fromDataSourceWithIdentifier:(id)arg2;
@property(nonatomic) __weak id <SBWidgetHandlingNCColumnViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBWidgetViewControllerDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3;
- (id)todayViewSettingsViewController:(id)arg1 interfaceItemsForGroup:(id)arg2;
- (long long)layoutModeForTodayViewSettingsViewController:(id)arg1;
- (_Bool)canRemoveViewOnDismissal:(id)arg1;
- (long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3;
- (void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshWidget:(id)arg1 launchStats:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)_nextSequenceNumber;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)enableAllWidgets:(CDUnknownBlockType)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enableWidgetsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)widgetWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *visibleWidgetIDs;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (struct UIEdgeInsets)marginInsetsForWidget:(id)arg1;
- (struct CGSize)maxSizeForWidget:(id)arg1;
- (id)extensionForWidget:(id)arg1;
- (long long)activeLayoutModeForWidget:(id)arg1;
- (void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
- (_Bool)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
- (void)contentAvailabilityDidChangeForWidget:(id)arg1;
- (CDUnknownBlockType)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (void)invalidateDataAndRepopulateWithBlock:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (id)_widgetHandlingBulletinViewController;
- (void)reloadSortOrder;
- (void)invalidateContentLayout;
- (struct CGSize)contentSize;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)insertAppropriateViewWithContent;
- (id)_orderedEnabledInterfaceItems;
- (void)_invokeBlockWithAllWidgets:(CDUnknownBlockType)arg1;
- (void)widgetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (_Bool)_removeWidgetDatum:(id)arg1;
- (_Bool)_replaceWithWidgetDatum:(id)arg1;
- (_Bool)_removeWidgetRowIfPossible:(id)arg1;
- (_Bool)_replaceWithWidgetRowIfPossible:(id)arg1;
- (_Bool)_insertWidgetRowIfPossible:(id)arg1;
- (id)_sectionInfoForDatum:(id)arg1;
- (_Bool)_isWidgetWithIdentifierEnabled:(id)arg1;
- (id)_sectionAfterSection:(id)arg1 inCollection:(id)arg2;
- (void)_sortInterfaceItems:(id)arg1 usingGuide:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (id)_representedGroup;
- (Class)tableViewControllerClass;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

