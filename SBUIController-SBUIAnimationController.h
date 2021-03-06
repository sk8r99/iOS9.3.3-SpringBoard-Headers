//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIController.h"

@interface SBUIController (SBUIAnimationController)
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 application:(id)arg2;
+ (struct CGRect)_referenceBoundsForApp:(id)arg1;
+ (void)addStatusBarToView:(id)arg1 withSize:(struct CGSize)arg2 destinationFrame:(struct CGRect)arg3 interfaceOrientation:(long long)arg4 scaleFactor:(double)arg5 styleRequest:(id)arg6 statusBarDescriptor:(id)arg7 hidden:(_Bool)arg8;
+ (id)zoomViewWithIOSurfaceSnapshotOfApp:(id)arg1 sceneID:(id)arg2 screen:(id)arg3 statusBarDescriptor:(id)arg4;
+ (id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(long long)arg3 statusBarDescriptor:(id)arg4 imageName:(id)arg5 decodeImage:(_Bool)arg6;
+ (id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(long long)arg3 statusBarDescriptor:(id)arg4 decodeImage:(_Bool)arg5;
+ (id)_splashboardLaunchImageForApplication:(id)arg1 sceneID:(id)arg2 display:(id)arg3 interfaceOrientation:(long long)arg4 referenceSize:(struct CGSize)arg5;
+ (id)zoomViewForApplication:(id)arg1 screen:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(_Bool)arg7;
+ (id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 sceneID:(id)arg3 statusBarDescriptor:(id)arg4;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(_Bool)arg5;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(_Bool)arg4;
@end

