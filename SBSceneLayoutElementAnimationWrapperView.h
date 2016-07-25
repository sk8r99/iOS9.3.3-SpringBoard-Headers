//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBSceneLayoutInterfaceOrientedView.h"

@class NSString, SBAppView, SBLayoutElement, SBLayoutElementAdornmentView, SBOrientationTransformWrapperView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView>
{
    SBLayoutElement *_layoutElement;
    SBAppView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
    SBLayoutElementAdornmentView *_adornmentView;
}

@property(readonly, nonatomic) SBLayoutElementAdornmentView *adornmentView; // @synthesize adornmentView=_adornmentView;
@property(readonly, nonatomic) SBAppView *appView; // @synthesize appView=_appView;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long layoutOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)invalidate;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2 adornmentView:(id)arg3;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

