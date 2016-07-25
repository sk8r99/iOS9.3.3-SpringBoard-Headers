//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBWallpaperControllerCoordinator : NSObject
{
    NSMutableDictionary *_bundleIDToApplicationTransitionStates;
    NSMutableDictionary *_bundleIDToApplicationAnimationTransitionStates;
}

- (void).cxx_destruct;
- (_Bool)removeHomescreenStyleForBundleID:(id)arg1 priority:(long long)arg2 animationFactory:(id)arg3;
- (_Bool)setHomescreenStyleTransitionState:(CDStruct_059c2b36)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4;
- (_Bool)setHomescreenStyle:(long long)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4;
- (_Bool)_updateWallpaperAndBackgroundStatesForModifiedBundleID:(id)arg1 animationFactory:(id)arg2;
- (long long)_effectivePriorityForBundleID:(id)arg1;
- (id)_effectiveStateForBundleID:(id)arg1;
- (id)_stateLookupForPriority:(long long)arg1;
- (id)_backgroundColorForApp:(id)arg1;
- (void)_setBackgroundColor:(id)arg1 forBundleID:(id)arg2 withAnimationFactory:(id)arg3;
- (id)description;
- (id)init;

@end

