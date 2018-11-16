#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCTWaiterManagement.h"
#import "XC10_XCTestExpectationDelegate.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCTWaiter.h>

@protocol XCTWaiterDelegate;

@class CFRunLoop, XCTWaiterImpl, _XCTWaiterImpl;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTWaiter ()
{
    _XCTWaiterImpl *_internalImplementation;
}

+ (void)wait:(double)arg1;
+ (void)setStallHandler:(CDUnknownBlockType)arg1;
+ (void)handleStalledWaiter:(id)arg1;
+ (CDUnknownBlockType)installWatchdogForWaiter:(id)arg1 timeout:(double)arg2;
+ (double)watchdogTimeoutSlop;
+ (void)setWatchdogTimeoutSlop:(double)arg1;
+ (id)subsystemQueue;
@property(readonly) _XCTWaiterImpl *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
@property(readonly) _Bool currentContextIsNested;
- (long long)result;
@property(readonly) double timeout;
- (void)setState:(long long)arg1;
- (long long)state;
@property(readonly, getter=isInProgress) _Bool inProgress;
@property struct __CFRunLoop *waitingRunLoop;
@property(readonly, nonatomic) NSObject *delegateQueue;
- (void)setWaitCallStackReturnAddresses:(id)arg1;
@property(readonly, copy) NSArray *waitCallStackReturnAddresses;
- (void)_queue_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (_Bool)_queue_enforceOrderingWithFulfilledExpectations:(id)arg1;
- (void)_queue_computeInitiallyFulfilledExpectations;
- (void)_queue_setExpectations:(id)arg1;
- (void)_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (void)didFulfillExpectation:(id)arg1;
- (void)cancelPrimitiveWait;
- (void)cancelWaiting;
- (void)primitiveWait:(double)arg1;
- (void)interruptForWaiter:(id)arg1;

- (id)init;

// Remaining properties

@end

#endif