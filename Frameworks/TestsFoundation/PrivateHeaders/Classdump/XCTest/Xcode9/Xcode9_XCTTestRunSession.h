#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTest_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@protocol XCTTestRunSessionDelegate;

@class XCTestConfiguration;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTTestRunSession : NSObject
{
    XCTestConfiguration *_testConfiguration;
    id <XCTTestRunSessionDelegate> _delegate;
}

@property id <XCTTestRunSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
- (_Bool)runTestsAndReturnError:(id *)arg1;
- (_Bool)_preTestingInitialization;
- (void)resumeAppSleep:(id)arg1;
- (id)suspendAppSleep;
- (id)initWithTestConfiguration:(id)arg1 delegate:(id)arg2;

@end

#endif