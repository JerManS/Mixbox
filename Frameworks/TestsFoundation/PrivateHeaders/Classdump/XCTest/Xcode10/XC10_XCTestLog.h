#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCTestObservation.h"
#import "XC10__XCTestObservationPrivate.h"
#import <XCTest/XCTestLog.h>
#import <XCTest/XCTestObserver.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTestLog ()
{
}

+ (void)_logActivity:(id)arg1 inTestCase:(id)arg2;
+ (id)_messageForTest:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)_testCase:(id)arg1 willStartActivity:(id)arg2;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(id)arg1;
- (void)_testDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;

- (id)dateFormatter;

// Remaining properties

@end

#endif