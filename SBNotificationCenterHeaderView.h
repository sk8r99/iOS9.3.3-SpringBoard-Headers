//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_clearButton;
    _Bool _showingClear;
    long long _layoutMode;
    CDUnknownBlockType _clearButtonVisibleAction;
    CDUnknownBlockType _clearButtonFinalAction;
}

+ (double)_titleBaseline;
+ (id)titleFontForLayoutMode:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType clearButtonFinalAction; // @synthesize clearButtonFinalAction=_clearButtonFinalAction;
@property(copy, nonatomic) CDUnknownBlockType clearButtonVisibleAction; // @synthesize clearButtonVisibleAction=_clearButtonVisibleAction;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)resetAnimated:(_Bool)arg1;
- (struct CGRect)_clearButtonFrame;
- (struct CGRect)contentBounds;
- (void)setHasClearButton:(_Bool)arg1;
- (void)_removeClearButton;
- (void)_addClearButton;
- (void)setBackgroundView:(id)arg1;
- (long long)initialGraphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

