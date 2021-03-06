//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDosidoAnimator.h"

@class CAMutableMeshTransform, NSString, SBStretchTransformerView, UIView;

@interface SBStretchTransformer : NSObject <SBDosidoAnimator>
{
    double _percentage;
    CAMutableMeshTransform *_mesh;
    CDUnknownBlockType _completionBlock;
    double _stretchFactor;
    UIView *_parentView;
    SBStretchTransformerView *_transformView;
    UIView *_view;
    unsigned long long _anchorEdge;
    long long _orientation;
}

- (void)_setOrientation:(long long)arg1;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)_setAnchorEdge:(unsigned long long)arg1;
@property(nonatomic) unsigned long long anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_animateToZeroStretchFactor;
- (void)updateMeshTransform:(id)arg1 stretchFactor:(double)arg2;
- (void)_setStretchFactor:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 anchorEdge:(unsigned long long)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

