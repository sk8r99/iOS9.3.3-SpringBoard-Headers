//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDisplay, MCProfileConnection, SBUserSessionController;

@interface SBPolicyAggregator : NSObject
{
    FBSDisplay *_display;
    SBUserSessionController *_lazy_userSessionController;
    MCProfileConnection *_lazy_profileConnection;
    struct __CFBoolean *_hasCameraCapability;
}

@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_lazy_profileConnection;
@property(retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController; // @synthesize userSessionController=_lazy_userSessionController;
- (void).cxx_destruct;
- (_Bool)_isWhitelistedApplicationAllowedToLaunchInLoginWindow:(id)arg1;
- (_Bool)_allowsCapabilityCommandTabWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityScreenshotWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLoginWindowWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLogoutWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityNotificationCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsNotificationOrControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySpotlightWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityVoiceControlWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySystemGestureWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySendMediaCommandWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantEnabledWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)arg1;
- (_Bool)_hasFullySetUpUserWithExplanation:(id *)arg1;
- (_Bool)allowsTransitionRequest:(id)arg1;
- (_Bool)allowsCapability:(long long)arg1 explanation:(id *)arg2;
- (_Bool)allowsCapability:(long long)arg1;
- (id)initWithDisplay:(id)arg1;

@end

