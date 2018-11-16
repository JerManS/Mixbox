#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10__CDStructures.h"
#import "XC10_SharedHeader.h"

@protocol XCTTestSchedulerDelegate, XCTTestSchedulerWorker;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCTTestScheduler
@property(retain) NSObject *delegateQueue;
@property __weak id <XCTTestSchedulerDelegate> delegate;
@property(retain) NSObject *workerQueue;
- (void)startWithTestIdentifiersToRun:(NSSet *)arg1 testIdentifiersToSkip:(NSSet *)arg2;
- (void)workerDidBecomeAvailable:(id <XCTTestSchedulerWorker>)arg1;
@end

#endif
