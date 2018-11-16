#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCUIApplicationProcessTracker.h"
#import <Foundation/Foundation.h>

@protocol XCTRunnerAutomationSession;

@class XCTApplicationStateSnapshot, XCUIApplication, XCUIApplicationImpl, XCUIApplicationProcess, XCUIApplicationRegistry;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCUIApplicationMonitor <NSObject, XCUIApplicationProcessTracker>
@property(retain) XCUIApplicationRegistry *applicationRegistry;
- (void)acquireBackgroundAssertionForPID:(int)arg1 reply:(void (^)(_Bool))arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(id <XCTRunnerAutomationSession>, NSError *))arg3;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;
- (void)terminationTrackedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)launchRequestedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)terminateApplicationProcess:(XCUIApplicationProcess *)arg1 withToken:(id)arg2;
- (XCUIApplication *)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (XCUIApplicationImpl *)applicationImplementationForApplicationAtPath:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)updatedApplicationStateSnapshot:(XCTApplicationStateSnapshot *)arg1;
- (void)applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
@end

#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCUIApplicationMonitor.h"
#import "XC10_XCUIApplicationProcessTracker.h"
#import <Foundation/Foundation.h>

@class XCUIApplicationImplDepot, XCUIApplicationRegistry;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIApplicationMonitor : NSObject <XCUIApplicationMonitor, XCUIApplicationProcessTracker>
{
    XCUIApplicationRegistry *_applicationRegistry;
    NSObject *_queue;
    XCUIApplicationImplDepot *_applicationImplDepot;
    NSMutableSet *_trackedBundleIDs;
    NSMutableDictionary *_applicationProcessesForPID;
    NSMutableDictionary *_applicationProcessesForToken;
    NSMutableSet *_launchedApplications;
}

+ (instancetype)sharedMonitor;
@property(readonly, copy) NSMutableSet *launchedApplications; // @synthesize launchedApplications=_launchedApplications;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForToken; // @synthesize applicationProcessesForToken=_applicationProcessesForToken;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForPID; // @synthesize applicationProcessesForPID=_applicationProcessesForPID;
@property(readonly, copy) NSMutableSet *trackedBundleIDs; // @synthesize trackedBundleIDs=_trackedBundleIDs;
@property(readonly, copy) XCUIApplicationImplDepot *applicationImplDepot; // @synthesize applicationImplDepot=_applicationImplDepot;
@property(retain) NSObject *queue; // @synthesize queue=_queue;
@property(retain) XCUIApplicationRegistry *applicationRegistry; // @synthesize applicationRegistry=_applicationRegistry;
- (void)acquireBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updatedApplicationStateSnapshot:(id)arg1;
- (void)_setIsTrackingForBundleID:(id)arg1;
- (_Bool)_isTrackingBundleID:(id)arg1;
- (void)applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)processWithToken:(id)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(id)arg1;
- (void)crashInProcessWithBundleID:(id)arg1 path:(id)arg2 pid:(int)arg3 symbol:(id)arg4;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;
- (void)_waitForCrashReportOrCleanExitStatusOfApp:(id)arg1;
- (id)_appFromSet:(id)arg1 thatTransitionedToNotRunningDuringTimeInterval:(double)arg2;
- (void)terminationTrackedForApplicationProcess:(id)arg1;
- (void)launchRequestedForApplicationProcess:(id)arg1;
- (void)_terminateApplicationProcess:(id)arg1;
- (void)terminateApplicationProcess:(id)arg1 withToken:(id)arg2;
- (id)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (void)_beginMonitoringApplication:(id)arg1;
- (void)setApplicationProcess:(id)arg1 forToken:(id)arg2;
- (id)applicationProcessWithToken:(id)arg1;
- (void)setApplicationProcess:(id)arg1 forPID:(int)arg2;
- (id)applicationProcessWithPID:(int)arg1;
- (id)applicationImplementationForApplicationAtPath:(id)arg1 bundleID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif