//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBiometricEventObserver.h"

@class NSString;

@interface SBReachabilityTrigger : NSObject <SBUIBiometricEventObserver>
{
    _Bool _enabled;
    _Bool _debouncedHome;
    _Bool _debounced;
    unsigned long long _numberOfTaps;
    unsigned long long _currentNumberOfTaps;
    unsigned long long _expirationGenCount;
    unsigned long long _debounceGenCount;
    id <SBReachabilityTriggerDelegate> _delegate;
}

@property(nonatomic) unsigned long long numberOfTaps; // @synthesize numberOfTaps=_numberOfTaps;
@property(readonly, nonatomic) __weak id <SBReachabilityTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)_debounce;
- (void)_setExpirationTimer;
- (void)handleHomeButtonPress;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
