//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSoftwareUpdateAlertModelDelegate.h"
#import "SUAutoInstallOperationDelegate.h"
#import "SUManagerClientDelegate.h"
#import "SUNetworkObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSString, PCPersistentTimer, SBSoftwareUpdateAlertModel, SBSoftwareUpdateInstallOptions, SBUserSessionController, SUAutoInstallOperation, SUDownload, SUManagerClient;

@interface SBSoftwareUpdateController : NSObject <SBSoftwareUpdateAlertModelDelegate, SUAutoInstallOperationDelegate, _UISettingsKeyObserver, SUManagerClientDelegate, SUNetworkObserver>
{
    PCPersistentTimer *_installTimer;
    SUManagerClient *_client;
    SUDownload *_updateToInstall;
    int _currentNetworkType;
    SUAutoInstallOperation *_scheduledTryTonightAutoInstallOperation;
    SBSoftwareUpdateAlertModel *_alertModel;
    int _iCloudRestoreToken;
    _Bool _scheduleInstallAlertWhenAble;
    _Bool _settingsResetPrefsBadgedFlag;
    _Bool _needsBatteryDeviceStatusRealert;
    SBSoftwareUpdateInstallOptions *_pendingInstallOptions;
    SBUserSessionController *_userSessionController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_toggleSettingsBadge:(_Bool)arg1;
- (_Bool)_isSettingsBadgedForSoftwareUpdate;
- (void)_clearLegacyBadgeIfNecessary:(id)arg1;
- (void)_migrateForNewOSVersionIfNecessary;
- (void)_saveLastKnownVersionPreference:(id)arg1;
- (id)_stringForCurrentVersionPreference;
- (void)_savePreferencesBadgeFlag:(_Bool)arg1;
- (_Bool)_createKeybagForPasscode:(id)arg1 forInstallTonight:(_Bool)arg2;
- (void)_presentAuthenticationUIForInstallation:(CDUnknownBlockType)arg1 withInstallType:(unsigned long long)arg2 withInstallOperation:(id)arg3;
- (void)_autoDownloadUnknownToUserFailedForDescriptor:(id)arg1 error:(id)arg2;
- (void)_resetStateForReason:(id)arg1;
- (_Bool)_isSettingsActive;
- (void)_handleInstallError:(id)arg1;
- (void)_scheduleInstallAlertReminderWithDate:(id)arg1 repopStrategy:(unsigned long long)arg2 forReason:(id)arg3;
- (_Bool)_shouldShowOrScheduleInstallAlert;
- (void)_showInstallAlertWithInstallOptions:(id)arg1;
- (void)_dismissInstallFailureAlertsWithoutRepop;
- (_Bool)_doesStateContainNonInstallableReasons:(long long)arg1 reasonsToCheck:(id)arg2 outMatchingReasonsString:(id *)arg3;
- (void)_isUpdateInstallable:(CDUnknownBlockType)arg1;
- (_Bool)_showNextInstallAlertWithReasons:(long long)arg1 orScheduleIfNecessary:(_Bool)arg2 withInstallOptions:(id)arg3;
- (_Bool)_showNextInstallAlertWithReasons:(long long)arg1 orScheduleIfNecessary:(_Bool)arg2;
- (void)_showOrScheduleNextInstallAlert;
- (void)_showOrScheduleNextInstallAlertFromTimer:(id)arg1;
- (void)_setUpdateToInstall:(id)arg1;
- (void)_registerForInstallationConstraintChangedNotifications;
- (void)_unregisterForInstallationConstraintChangeNotifications;
- (void)_showSUAvailableAlertForDescriptor:(id)arg1;
- (void)_realertWithStrategy:(unsigned long long)arg1 andReason:(id)arg2;
- (id)_computeNextLastPredictedUnlockDateMinus4HoursFromStartDate:(id)arg1;
- (id)_getNextLastPredictedUnlockDateFromDuet:(id)arg1;
- (void)_dismissInstallAlertsWithReason:(id)arg1 includingInstallTonight:(_Bool)arg2 withRealertStrategy:(unsigned long long)arg3;
- (void)_setTryTonightAutoInstallOperation:(id)arg1 cancelIfNecessary:(_Bool)arg2;
- (void)_setPendingInstallOptions:(id)arg1;
- (void)_doInstallTonight:(id)arg1 consent:(_Bool)arg2;
- (void)_doInstallNowWithOptions:(id)arg1;
- (void)_installUpdate:(unsigned long long)arg1 withInstallOperation:(id)arg2 source:(unsigned long long)arg3 options:(id)arg4;
- (void)_autoInstallOperationDidExpire:(id)arg1 withRepopStrategy:(unsigned long long)arg2;
- (void)_autoInstallOperationWasCancelled:(id)arg1 withRepopStrategy:(unsigned long long)arg2;
- (void)_postDownloadStateChangeNotification:(_Bool)arg1;
- (id)_waitableReasonsForShowingInstallAlert;
- (id)_allNonInstallableReasons;
- (id)_stringForInstallNotAllowableReason:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)alertModel:(id)arg1 alertFlowDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResponse:(CDUnknownBlockType)arg2;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationDidExpire:(id)arg1;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (void)client:(id)arg1 installDidFinish:(id)arg2;
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 installDidStart:(id)arg2;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)_handleBatteryDeviceStatusChanged:(id)arg1;
- (void)_iTunesRestoreStateChanged:(id)arg1;
- (void)_iCloudStatusChanged;
- (void)_homescreenActivationChanged;
- (void)_passcodeLockStateChanged:(id)arg1;
- (void)_callCountChanged:(id)arg1;
- (void)_syncDidEnd:(id)arg1;
- (void)_syncWillStart:(id)arg1;
- (void)_createInstallTonightOperationWithResult:(CDUnknownBlockType)arg1;
- (void)_completeMigrationForSettingsReset;
- (void)_prepareMigrationForSettingsReset;
- (void)repopInstallAlertWithWeekDurationFromNowForReason:(id)arg1;
- (void)repopInstallAlertWithDefaultDurationFromNowForReason:(id)arg1;
- (void)installTonightWithOperation:(id)arg1 options:(id)arg2;
- (void)installTonightWithOperation:(id)arg1;
- (void)installNowFromSource:(unsigned long long)arg1 options:(id)arg2;
- (void)installNowFromSource:(unsigned long long)arg1;
- (void)isDownloading:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)_initializeState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

