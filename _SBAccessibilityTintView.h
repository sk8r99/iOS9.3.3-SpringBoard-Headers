//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_SBFakeBlur.h"

@class NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver>
{
    long long _variant;
    _Bool _fullscreen;
    id <_SBFakeBlurObserver> _observer;
}

@property(nonatomic) __weak id <_SBFakeBlurObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

