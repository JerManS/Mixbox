#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9__CDStructures.h"
#import "XC9_SharedHeader.h"
#import <Foundation/Foundation.h>

@class XCTestExpectation;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCTestExpectationDelegate <NSObject>
- (void)didFulfillExpectation:(XCTestExpectation *)arg1;
@end

#endif
