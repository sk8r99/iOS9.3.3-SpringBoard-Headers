//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBLockScreenPluginTransitionContext;

@interface SBLockScreenPluginTransition : NSObject
{
    SBLockScreenPluginTransitionContext *_context;
}

@property(readonly, nonatomic) SBLockScreenPluginTransitionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_addToView;
- (void)_removeFromView;
- (void)_removeViewFromHierarchy:(id)arg1;
- (void)beginTransition;
- (id)initWithContext:(id)arg1;

@end

