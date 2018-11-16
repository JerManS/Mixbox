#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

@class XCUITransformParameters;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIPointTransformationRequest : NSObject
{
    XCUITransformParameters *_transformParameters;
    struct CGPoint _point;
}

+ (id)pointTransformationRequestWithPoint:(struct CGPoint)arg1 parameters:(id)arg2;
@property(readonly) XCUITransformParameters *transformParameters; // @synthesize transformParameters=_transformParameters;
@property(readonly) struct CGPoint point; // @synthesize point=_point;
@property(readonly) NSArray *axParameterRepresentation;

@end

#endif