#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTAutomationSupport_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTApplicationStateSnapshot : NSObject <NSSecureCoding>
{
    int _processID;
    int _bridgedProcessID;
    NSString *_bundleID;
    NSString *_path;
    unsigned long long _runState;
    unsigned long long _activationPolicy;
    unsigned long long _eventID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(readonly) unsigned long long activationPolicy; // @synthesize activationPolicy=_activationPolicy;
@property(readonly) int bridgedProcessID; // @synthesize bridgedProcessID=_bridgedProcessID;
@property(readonly) int processID; // @synthesize processID=_processID;
@property(readonly) unsigned long long runState; // @synthesize runState=_runState;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 path:(id)arg2 runState:(unsigned long long)arg3 processID:(int)arg4 activationPolicy:(unsigned long long)arg5 eventID:(unsigned long long)arg6;
- (id)initWithBundleID:(id)arg1 path:(id)arg2 runState:(unsigned long long)arg3 processID:(int)arg4 bridgedProcessID:(int)arg5 activationPolicy:(unsigned long long)arg6 eventID:(unsigned long long)arg7;

@end

#endif