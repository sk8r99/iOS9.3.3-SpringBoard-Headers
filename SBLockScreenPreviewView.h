//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBFLockScreenDateView, SBFakeStatusBarView, SBUILegibilityView, UILabel, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView
{
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    SBFakeStatusBarView *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)preview;
- (void).cxx_destruct;
- (void)_layoutWallpaperView;
- (void)_layoutSlideToUnlockView;
- (void)_layoutDateView;
- (void)_layoutCameraView;
- (void)_layoutStatusBar;
- (void)layoutSubviews;
- (id)_legibilityPrototypeSettings;
- (void)_setupStatusBar;
- (void)_setupCameraView;
- (void)_setupDateView;
- (void)_setupSlideToUnlockView;
- (void)_setupWallpaperView;
- (id)initWithFrame:(struct CGRect)arg1 legibilitySettings:(id)arg2;

@end
