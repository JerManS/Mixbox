#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10__CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIApplicationIdentifier : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_path;
}

@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 path:(id)arg2;

@end

#endif