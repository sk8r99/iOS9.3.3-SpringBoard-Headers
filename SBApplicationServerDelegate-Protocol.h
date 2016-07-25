//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SBApplicationServer;

@protocol SBApplicationServerDelegate <NSObject>
- (void)applicationServer:(SBApplicationServer *)arg1 setDynamicShortcutItems:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchDynamicShortcutItemsForBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(NSArray *))arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 setRemovalAllowed:(_Bool)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchRemovabilityForBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg2 withCompletion:(void (^)(long long))arg3;
@end
