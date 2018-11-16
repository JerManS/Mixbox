#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9__CDStructures.h"
#import "XC9_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)description;
@property(readonly) double maximumOffset;
- (void)addPointerEventPath:(id)arg1;
@property(readonly) NSArray *eventPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)init;
- (_Bool)synthesizeWithError:(id *)arg1;

@end

#endif