//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, SBBootDefaults;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject
{
    _Bool _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    _Bool _queue_isComplete;
    double _queue_startTime;
}

- (void).cxx_destruct;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (id)_queue_fetchCloudAccountOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (_Bool)_queue_isComplete;
- (void)_queue_addOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (_Bool)waitForSynchonizeToCompleteWithTimeout:(double)arg1;
- (void)startSynchronize;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
- (id)init;

@end
