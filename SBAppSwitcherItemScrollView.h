//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SBMainAppSwitcherPageView;

@interface SBAppSwitcherItemScrollView : UIScrollView
{
    SBMainAppSwitcherPageView *_item;
    long long _layoutOrientation;
}

@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(retain, nonatomic) SBMainAppSwitcherPageView *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_enableScrolling;
- (void)_disableScrolling;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

