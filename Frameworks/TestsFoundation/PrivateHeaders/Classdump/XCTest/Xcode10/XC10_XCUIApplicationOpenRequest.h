#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIApplicationOpenRequest : NSObject
{
    _Bool _activateIfRunning;
    _Bool _terminateIfRunning;
    _Bool _usePlatformLauncher;
    NSArray *_launchArguments;
    NSDictionary *_environmentVariables;
}

+ (id)activationRequestFromLaunchRequest:(id)arg1;
+ (id)activationRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(_Bool)arg3;
+ (id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(_Bool)arg3;
@property(copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(copy) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
@property _Bool usePlatformLauncher; // @synthesize usePlatformLauncher=_usePlatformLauncher;
@property _Bool terminateIfRunning; // @synthesize terminateIfRunning=_terminateIfRunning;
@property _Bool activateIfRunning; // @synthesize activateIfRunning=_activateIfRunning;

@end

#endif