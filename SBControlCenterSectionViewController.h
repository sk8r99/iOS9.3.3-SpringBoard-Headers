//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBControlCenterObserver.h"

@class NSString;

@interface SBControlCenterSectionViewController : UIViewController <SBControlCenterObserver>
{
    id <SBControlCenterSectionViewControllerDelegate> _delegate;
}

+ (Class)viewClass;
@property(nonatomic) __weak id <SBControlCenterSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)noteSettingsDidUpdate:(id)arg1;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (_Bool)enabledForOrientation:(long long)arg1;
- (id)view;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

