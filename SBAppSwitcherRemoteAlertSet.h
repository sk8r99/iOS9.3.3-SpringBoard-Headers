//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableSet;

@interface SBAppSwitcherRemoteAlertSet : NSObject <NSCopying>
{
    NSMutableArray *_alerts;
    NSMutableSet *_placeholderIdentifiers;
}

- (void).cxx_destruct;
- (id)placeholderDisplayItems;
- (id)placeholderBundleIdentifiers;
- (id)displayItems;
- (id)serviceBundleIdentifiers;
- (id)alertForDisplayItem:(id)arg1;
- (id)alertForBundleIdentifier:(id)arg1;
- (id)alertAtIndex:(unsigned long long)arg1;
- (_Bool)containsAlert:(id)arg1;
- (unsigned long long)count;
- (void)removePlaceholderForIdentifier:(id)arg1;
- (void)addPlaceholderForIdentifier:(id)arg1;
- (void)removeRemoteAlert:(id)arg1;
- (void)addRemoteAlert:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlertSet:(id)arg1 zone:(struct _NSZone *)arg2;

@end

