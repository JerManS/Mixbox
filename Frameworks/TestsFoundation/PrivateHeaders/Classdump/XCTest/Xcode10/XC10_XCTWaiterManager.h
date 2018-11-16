#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTWaiterManager : NSObject
{
    NSMutableArray *_waiterStack;
    NSThread *_thread;
    NSObject *_queue;
}

+ (id)threadLocalManager;
@property(readonly) NSObject *queue; // @synthesize queue=_queue;
@property NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableArray *waiterStack; // @synthesize waiterStack=_waiterStack;
- (void)waiterDidFinishWaiting:(id)arg1;
- (void)waiterTimedOutWhileWaiting:(id)arg1;
- (void)waiterWillBeginWaiting:(id)arg1;
- (id)init;
- (void)dealloc;

@end

#endif