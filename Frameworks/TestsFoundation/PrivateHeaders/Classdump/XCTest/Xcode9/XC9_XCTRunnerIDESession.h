#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9_XCTest_CDStructures.h"
#import "XC9_SharedHeader.h"
#import "XC9_XCTTestRunSessionDelegate.h"
#import "XC9_XCTestDriverInterface.h"
#import "XC9_XCTestObservation.h"
#import "XC9_XCUIXcodeApplicationManaging.h"
#import <Foundation/Foundation.h>

@protocol XCTUIApplicationMonitor, XCTestManager_IDEInterface;

@class DTXConnection, XCTestRun;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTRunnerIDESession : NSObject <XCTestObservation, XCTestDriverInterface, XCTTestRunSessionDelegate, XCUIXcodeApplicationManaging>
{
    NSObject *_queue;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface> _IDEProxy;
    long long _IDEProtocolVersion;
    id <XCTUIApplicationMonitor> _applicationMonitor;
    XCTestRun *_currentTestRun;
    CDUnknownBlockType _readinessReply;
}

+ (id)transportForLocalPath:(id)arg1 error:(id *)arg2;
+ (void)setSharedSession:(id)arg1;
+ (instancetype)sharedSession;
+ (instancetype)sharedSessionQueue;
@property(copy) CDUnknownBlockType readinessReply; // @synthesize readinessReply=_readinessReply;
@property(retain) id <XCTestManager_IDEInterface> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property(retain) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property __weak id <XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) NSObject *queue; // @synthesize queue=_queue;
- (void)testBundleDidFinish:(id)arg1;
- (void)_testCase:(id)arg1 didFinishActivity:(id)arg2;
- (void)_testCase:(id)arg1 willStartActivity:(id)arg2;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(id)arg1;
- (void)testBundleWillStart:(id)arg1;
- (id)_IDE_processWithToken:(id)arg1 exitedWithStatus:(id)arg2;
- (id)_IDE_stopTrackingProcessWithToken:(id)arg1;
- (void)reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;
- (void)terminateProcessWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLaunchProgressForProcessWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_IDE_processWithBundleID:(id)arg1 path:(id)arg2 pid:(id)arg3 crashedUnderSymbol:(id)arg4;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 method:(id)arg2 file:(id)arg3 line:(unsigned long long)arg4;
- (void)logDebugMessage:(id)arg1;
- (void)testRunSessionDidFinishExecutingTestPlan:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)testRunSession:(id)arg1 initializationForUITestingDidFailWithError:(id)arg2;
- (void)testRunSessionDidBeginInitializingForUITesting:(id)arg1;
- (void)testRunSessionDidBeginExecutingTestPlan:(id)arg1;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (void)requestReadinessForTesting:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsVariableScreenshotFormats;
@property(readonly) _Bool reportsCrashes;
@property long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif