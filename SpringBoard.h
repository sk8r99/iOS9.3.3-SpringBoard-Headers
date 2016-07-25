//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "MCProfileConnectionObserver.h"
#import "SBMiniAlertPresenter.h"
#import "SBPowerDownControllerDelegate.h"
#import "UIApplicationDelegate.h"

@class BBDataProviderConnection, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumberFormatter, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBApplication, SBBluetoothAccessoryBatteryMonitor, SBCardItemsController, SBPowerDownController, SBSStatusBarStyleOverridesAssertion, SBScreenshotManager, SBSynchronizeCloudCriticalDataOperation, SBUIController, SBUserSessionController, UIWindow;

@interface SpringBoard : FBSystemApp <MCProfileConnectionObserver, SBMiniAlertPresenter, SBPowerDownControllerDelegate, UIApplicationDelegate>
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    double _headsetButtonDownTime;
    struct __IOHIDEvent *_headsetDownEvent;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _dontLockOnNextLockUp:1;
    unsigned int _poweringDown:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    unsigned int _ignoringCurrentLockButtonPress:1;
    int _mediaSeekDirection;
    unsigned int _springBoardRequestsAccelerometerEvents;
    long long _activeInterfaceOrientation;
    int _lastRequestedStatusBarStyleOverrides;
    NSMutableSet *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    _Bool _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    _Bool _expectsFaceContact;
    _Bool _expectsFaceContactInLandscape;
    _Bool _proximityEventsEnabled;
    _Bool _smartCoverClosed;
    _Bool _keybagRefetchTransactionIsActive;
    _Bool _menuButtonDown;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowRecordingApp;
    SBApplication *_menuButtonInterceptApp;
    _Bool _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSMutableArray *_appsRegisteredForLockButtonEvents;
    SBApplication *_lastLockButtonEventRecipient;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    BBDataProviderConnection *_bulletinBoardConnection;
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;
    SBCardItemsController *_cardItemsController;
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;
    NSHashTable *_volumePressBandits;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldAbsoluteStartTime;
    unsigned long long _menuButtonDownEventTimeStamp;
    NSMutableArray *_menuButtonUpBlocks;
    NSMutableArray *_menuButtonUpHandledBlocks;
    _Bool _didPlayLockSound;
    unsigned long long _volumeAndLockButtonPrecedence;
    SBUserSessionController *_userSessionController;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    _Bool _hasFinishedLaunching;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    SBSStatusBarStyleOverridesAssertion *_recordingStatusBarStyleOverrideAssertion;
    _Bool _atHomescreen;
    NSObject<OS_dispatch_queue> *_volumePowerQueue;
    NSString *_logFile;
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;
    SBScreenshotManager *_screenshotManager;
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;
    _Bool _inUserTransition;
    _Bool _determiningBootTransition;
    _Bool _bootingToSetupForUserSwitch;
    _Bool _ignoreNextUserDefaultsDidChangeNotification;
    _Bool _typingActive;
    _Bool _batterySaverModeActive;
    int _nowPlayingProcessPID;
    NSMutableArray *_nowLocatingApps;
    SBPowerDownController *_powerDownController;
    NSTimer *_daylightSavingsTimer;
}

+ (Class)_applicationInfoClass;
+ (void)initializeSystemServices;
+ (void)preFrontBoardInitializationHook;
+ (_Bool)supportsAsynchronousApplicationLoading;
+ (_Bool)shouldFixMainThreadPriority;
@property(retain, nonatomic) NSTimer *daylightSavingsTimer; // @synthesize daylightSavingsTimer=_daylightSavingsTimer;
@property(retain, nonatomic) SBPowerDownController *powerDownController; // @synthesize powerDownController=_powerDownController;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @synthesize batterySaverModeActive=_batterySaverModeActive;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(nonatomic, getter=isTypingActive) _Bool typingActive; // @synthesize typingActive=_typingActive;
@property(readonly, nonatomic) SBUserSessionController *userSessionController; // @synthesize userSessionController=_userSessionController;
@property(readonly, nonatomic) SBScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
@property(retain, nonatomic) NSMutableArray *nowLocatingApps; // @synthesize nowLocatingApps=_nowLocatingApps;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *bulletinBoardQueue; // @synthesize bulletinBoardQueue=_bulletinBoardQueue;
@property(readonly, nonatomic) BBDataProviderConnection *bulletinBoardConnection; // @synthesize bulletinBoardConnection=_bulletinBoardConnection;
- (void).cxx_destruct;
- (void)_batterySaverModeChanged:(int)arg1;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(CDUnknownBlockType)arg1;
- (void)performWhenMenuButtonIsUpUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasDisableActiveInterfaceOrientationChangeAssertions;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (void)removeVolumePressBandit:(id)arg1;
- (void)addVolumePressBandit:(id)arg1;
- (_Bool)_hasVolumeBandits;
- (void)noteKeybagRefetchTransactionIsActive:(_Bool)arg1;
- (_Bool)isKeybagRefetchTransactionActive;
- (_Bool)underMemoryPressure;
- (void)_setStatusBarShowsProgress:(_Bool)arg1;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityActivationAnimationStartDelay;
- (_Bool)_accessibilityObjectWithinProximity;
- (_Bool)_accessibilityIsSystemGestureActive;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(_Bool)arg1;
- (_Bool)_accessibilitySystemGesturesDisabledByAccessibility;
- (_Bool)_accessibilityShouldAllowIconLaunch;
- (_Bool)_accessibilityShouldAllowAppLaunch;
- (id)_accessibilityRunningApplications;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityFrontMostApplication;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (void)_deactivateReachability;
- (void)_setReachabilitySupported:(_Bool)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2;
- (_Bool)isNowPlayingAppPlaying;
@property(readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
- (void)nowLocatingAppDidEnterForeground:(id)arg1;
- (void)removeNowLocatingApp:(id)arg1;
- (void)addNowLocatingApp:(id)arg1;
- (id)nowRecordingApp;
- (_Bool)isMusicPlayerInNowPlayingView;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (_Bool)hasFinishedLaunching;
- (void)tearDown;
- (void)_tearDownNow;
- (_Bool)launchApplicationWithIdentifier:(id)arg1 suspended:(_Bool)arg2;
- (void)launchMusicPlayerSuspended;
- (long long)alertInterfaceOrientation;
- (_Bool)isLocked;
- (_Bool)canShowAlerts;
- (void)didDismissActionSheet;
- (void)didDismissMiniAlert;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (id)mainScene;
- (_Bool)isSameExecutableAsPresenter:(id)arg1;
- (id)presenterIdentifier;
- (void)frontDisplayDidChange:(id)arg1;
- (void)noteSceneLayoutDidUpdateOnDisplay:(id)arg1;
- (void)noteSubstantialTransitionOccured;
- (void)_setAmbiguousControlCenterActivationMargin:(double)arg1;
- (void)updateOrientationDetectionSettings;
- (void)updateProximitySettings;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)setProximityEventsEnabled:(_Bool)arg1;
- (_Bool)proximityEventsEnabled;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;
- (double)windowRotationDuration;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(_Bool)arg2;
- (_Bool)homeScreenSupportsRotation;
- (_Bool)homeScreenRotationStyleWantsUIKitRotation;
- (long long)homeScreenRotationStyle;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(long long)arg1;
- (long long)interfaceOrientationForCurrentDeviceOrientation;
- (long long)_currentNonFlatDeviceOrientation;
- (_Bool)supportsPortraitUpsideDownOrientation;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(_Bool)arg2;
- (void)updateNativeOrientationAndMirroredDisplays:(_Bool)arg1;
- (void)updateNativeOrientation;
@property(nonatomic) _Bool wantsOrientationEvents;
- (_Bool)_statusBarOrientationFollowsWindow:(id)arg1;
- (long long)_frontMostAppOrientation;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;
- (void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2;
- (long long)activeInterfaceOrientationWithoutConsideringAlerts;
- (long long)activeInterfaceOrientation;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2;
- (void)noteInterfaceOrientationChanged:(long long)arg1 force:(_Bool)arg2;
- (void)noteInterfaceOrientationChanged:(long long)arg1;
- (void)updateMirroredDisplayOrientation;
- (void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(_Bool)arg1;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsForInCallState:(_Bool)arg1 isOutgoing:(_Bool)arg2;
- (void)_updateRejectedInputSettingsForInCallState:(_Bool)arg1 isOutgoing:(_Bool)arg2 triggeredbyRouteWillChangeToReceiverNotification:(_Bool)arg3;
- (void)_caseLatchWantsToAttemptLock;
- (void)noteCaseHardwarePresent;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (_Bool)allowCaseLatchLockAndUnlock;
- (_Bool)caseIsEnabledAndLatched;
- (_Bool)smartCoverIsClosed;
- (void)_enqueueWorkspaceEvent:(CDUnknownBlockType)arg1 withName:(id)arg2 ifSatisfiesCondition:(CDUnknownBlockType)arg3 cancelingEventsWithNames:(id)arg4;
- (void)_smartCoverDidClose:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)lockAfterCall;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)noteBacklightControllerUndimming:(id)arg1;
- (void)_adjustSignificantTimersAfterSleep;
- (void)_adjustDaylightSavingsTimerAfterSleep;
- (void)_daylightSavingsTimeChanged;
- (void)setUpDaylightSavingsTimer;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_postSpringBoardSignificantTimeChangedNotificationForReason:(id)arg1;
- (void)_midnightPassed;
- (void)setupMidnightTimer;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
- (_Bool)_volumeChanged:(struct __IOHIDEvent *)arg1;
- (id)appsRegisteredForLockButtonEvents;
- (void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(_Bool)arg2;
- (id)appsRegisteredForVolumeEvents;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(_Bool)arg2;
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;
- (_Bool)menuButtonInterceptAppEnabledForever;
- (id)menuButtonInterceptApp;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(_Bool)arg2;
- (void)_relockUIIfNecessaryAfterTelephonyURLFailed;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(_Bool)arg3 sender:(id)arg4 activationSettings:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(_Bool)arg4 animating:(_Bool)arg5 activationSettings:(id)arg6 withResult:(CDUnknownBlockType)arg7;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(_Bool)arg4 animating:(_Bool)arg5 needsPermission:(_Bool)arg6 activationSettings:(id)arg7 withResult:(CDUnknownBlockType)arg8;
- (void)handleDocumentsAndDataURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)_URLIsHandledBySpringBoard:(id)arg1;
- (_Bool)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (long long)currentHomescreenStatusBarStyleWithoutConsideringAlerts;
- (long long)currentHomescreenStatusBarStyle;
- (_Bool)isSpringBoardStatusBarHidden;
- (long long)_statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (_Bool)handleDoubleHeightStatusBarTap:(long long)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;
- (void)_ringerChanged:(struct __IOHIDEvent *)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)pinPolicyChanged;
- (void)localeChanged;
- (void)_localeChanged;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)loadDebuggingAndDemoPrefs;
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;
- (void)_headsetButtonUp:(struct __IOHIDEvent *)arg1;
- (void)_headsetButtonDown:(struct __IOHIDEvent *)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_imagesMounted;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (void)_performDelayedHeadsetClickTimeout;
- (void)_lockButtonUp:(struct __IOHIDEvent *)arg1 fromSource:(int)arg2;
- (void)_clearPreheatedLockAudio;
- (void)noteBuddyNoLongerPreparingForLanguageChange;
- (_Bool)relaunchingForSetupLanguageChange;
- (void)powerDownCanceled:(id)arg1;
- (void)dismissPowerDownAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)powerDownRequested:(id)arg1;
- (_Bool)isPowerDownAlertFrontmost;
- (_Bool)isPoweringDown;
- (void)powerDown;
- (void)reboot:(_Bool)arg1;
- (void)reboot;
- (void)_rebootNow:(id)arg1;
- (void)_powerDownNow;
- (void)extendButtonTimersForWake;
- (void)lockButtonWasHeld;
- (void)_lockButtonDown:(struct __IOHIDEvent *)arg1 fromSource:(int)arg2;
- (void)_handleMenuButtonEvent;
- (void)_startSeekWithDirection:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (void)_menuButtonUp:(struct __IOHIDEvent *)arg1;
- (void)_logMenuButtonHoldTime;
- (_Bool)_isDim;
- (void)_menuButtonDown:(struct __IOHIDEvent *)arg1;
- (id)_keyWindowForScreen:(id)arg1;
- (void)handleGotoHomeScreenShortcut:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (id)keyCommands;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (double)_menuHoldTime;
- (void)_menuButtonWasHeld;
- (void)clearMenuButtonTimer;
- (void)cancelMenuButtonRequests;
- (void)_setLockButtonTimer:(id)arg1;
- (void)_setMenuButtonTimer:(id)arg1;
- (void)handleMenuDoubleTap;
- (_Bool)isMenuDoubleTapAllowed;
- (void)setAppDisabledNowPlayingHUD:(_Bool)arg1 bundleIdentifier:(id)arg2;
- (_Bool)canShowLockScreenCameraGrabber;
- (_Bool)lockScreenCameraSupported;
- (_Bool)canShowLockScreenHUDControls;
- (_Bool)iapIsInExtendedMode;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (void)_significantTimeChangeNotificationReceived;
- (void)_significantTimeDidChange:(_Bool)arg1;
- (void)runFieldTestScript;
- (void)_testPhoneAlerts;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)ignoreNextUserDefaultsDidChangeNotification;
- (void)_migrateSpringBoardPreferencesToFrontBoardPreferencesIfNecessary;
- (void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
- (void)_effectiveSettingsDidChange;
- (void)wipeDeviceNow;
- (void)_rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)requestDeviceUnlock;
- (void)languageChanged;
- (id)_settingLanguageStringForNewLanguage;
- (void)clearLaunchedAfterLanguageRestart;
- (_Bool)launchedAfterLanguageRestart;
- (_Bool)bootingToSetupForUserSwitch;
- (_Bool)launchedForUserTransition;
- (void)_revealSpotlight;
- (void)_recordingStateChanged:(id)arg1;
- (void)_removeRecordingStatusBarStyleOverrideAssertion;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_updateVolumeAndPowerButtonPrioritiesForNotification:(id)arg1;
- (void)_initializeVolumeAndPowerButtonPriorities;
- (void)_mainQueue_applyVolumeAndPowerButtonPriorities:(unsigned long long)arg1;
- (void)_computeVolumeButtonsHavePrecedenceWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldHandleVolumeAndPowerButtonPriorities;
- (void)_startObservingDefaultsIfNecessary;
- (void)_updateHomeScreenPresenceNotification:(id)arg1;
- (_Bool)isShowingHomescreen;
- (void)systemControllerRouteChanged:(id)arg1;
- (void)_transitionToBootDestination:(_Bool *)arg1;
- (void)_initializeDeferredItems;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)isDeterminingBootTransition;
- (void)_performDeferredLaunchWork;
- (void)_startBulletinBoardServer;
- (id)_defaultExpirationComponents;
- (void)updateStackshotSettings;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;
- (void)writeLogFile;
- (void)_createLogFile;
- (void)handleSignal:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

