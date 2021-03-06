//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIProgressiveBlur.h"

@class NSString, SBWallpaperEffectView, _SBSearchBackdropView;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur>
{
    _SBSearchBackdropView *_backdropView;
    SBWallpaperEffectView *_effectView;
    UIView *_tintView;
    _Bool _needToEnsureThatWeUpdateBackdropAtLeastOnce;
}

- (void).cxx_destruct;
- (void)transitionCompleted;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransition;
- (_Bool)useHighQualityGraphics;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

