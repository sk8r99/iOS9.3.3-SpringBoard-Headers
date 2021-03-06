//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemServiceFacility.h"

@interface SBApplicationServer : FBSystemServiceFacility
{
    id <SBApplicationServerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <SBApplicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleUpdateDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (id)_sanitizeShortcutItems:(id)arg1 entitlements:(unsigned long long)arg2;
- (void)_checkShortcutEntitlementsForMessage:(id)arg1 fromClient:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleSetRemovalAllowedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchRemovabilityMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;
- (id)init;

@end

