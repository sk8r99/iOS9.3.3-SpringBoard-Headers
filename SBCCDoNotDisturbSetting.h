//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCCSettingModule.h"

@class BBBehaviorOverride, BBSettingsGateway;

@interface SBCCDoNotDisturbSetting : SBCCSettingModule
{
    BBSettingsGateway *_settingsGateway;
    BBBehaviorOverride *_activeOverride;
    long long _activeStatus;
}

+ (id)displayName;
+ (id)identifier;
- (void).cxx_destruct;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;
- (void)_updateActiveOverrides:(id)arg1;
- (void)_setDNDEnabled:(_Bool)arg1 updateServer:(_Bool)arg2 source:(unsigned long long)arg3;
- (void)_setDNDStatus:(long long)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

