//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

@class NSDateFormatter, NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider
{
    id <SBStarkSessionConfiguring> _sessionConfiguration;
    char _oldAggregatorTimeCString[64];
    char _timeCString[64];
    NSDateFormatter *_timeFormatter;
    _Bool _showOptimalCellData;
    _Bool _showTapToRadar;
    _Bool _disableBattery;
    NSString *_inCallDetail;
}

+ (_Bool)_itemIsIgnored:(int)arg1;
- (void).cxx_destruct;
- (void)_callDurationChanged;
- (void)_resetTimeItemFormatter;
- (id)_timeFormatter;
- (_Bool)_shouldShowRadarItem;
- (void)_composePostDataFromAggregatorData:(CDStruct_996e841e *)arg1;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_996e841e *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_996e841e *)arg3;
- (id)doubleHeightStatusStringForStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

