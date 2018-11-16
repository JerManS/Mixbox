#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <XCTest/XCTestRun.h>
#import <XCTest/XCTestSuiteRun.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTestSuiteRun ()
{
    NSMutableArray *_testRuns;
}

- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (unsigned long long)executionCount;

- (void)stop;
- (void)start;
- (id)initWithTest:(id)arg1;

@end

#endif