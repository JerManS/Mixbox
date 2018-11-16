#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>

@class XCTestRun;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTest ()
{
    id _internal;
}

+ (id)languageAgnosticTestClassNameForTestClass:(Class)arg1;
- (long long)defaultExecutionOrderCompare:(id)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (void)tearDown;
- (void)setUp;
- (void)runTest;
@property(readonly) Class _requiredTestRunBaseClass;
- (id)init;
- (void)removeTestsWithNames:(id)arg1;
@property(readonly) NSString *_methodNameForReporting;
@property(readonly) NSString *_classNameForReporting;

@end

#endif