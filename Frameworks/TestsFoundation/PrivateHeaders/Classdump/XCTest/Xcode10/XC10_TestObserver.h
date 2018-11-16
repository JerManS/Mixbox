#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCTestObservation.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface TestObserver : NSObject <XCTestObservation>
{
}

- (void)testCaseDidFinish:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif