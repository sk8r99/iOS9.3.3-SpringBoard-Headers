//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class BSAuditToken, NSString;

@interface SBWidgetViewController : UIViewController
{
    _Bool _hasContent;
    long long _requestState;
    _Bool _implementsPerformUpdate;
    NSString *_appBundleID;
    NSString *_widgetIdentifier;
    BSAuditToken *_auditToken;
    id <SBWidgetViewControllerDelegate> _delegate;
}

+ (id)requestViewController:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_requestLocalViewControllerOfClass:(Class)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)widgetViewControllerWithIdentifier:(id)arg1 bundlePath:(id)arg2;
@property(nonatomic) __weak id <SBWidgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(readonly, nonatomic) _Bool implementsPerformUpdate; // @synthesize implementsPerformUpdate=_implementsPerformUpdate;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (void).cxx_destruct;
- (void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)insertSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validateSnapshotViewForActiveLayoutMode;
- (void)captureSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_cancelTouches;
- (void)performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)endAppearanceTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContentWidth:(double)arg1;
- (void)_requestLaunchOfURL:(id)arg1;
- (void)requestPreferredViewHeightWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
- (id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2;

@end
