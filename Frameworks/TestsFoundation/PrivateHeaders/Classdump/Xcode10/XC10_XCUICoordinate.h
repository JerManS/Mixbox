#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10__CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCUICoordinate.h>

@class XCUICoordinate, XCUIElement;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUICoordinate ()
{
    XCUIElement *_element;
    XCUICoordinate *_coordinate;
    struct CGVector _normalizedOffset;
    struct CGVector _pointsOffset;
}

@property(readonly) struct CGVector pointsOffset; // @synthesize pointsOffset=_pointsOffset;
@property(readonly) struct CGVector normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
@property(readonly) XCUICoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) XCUIElement *element; // @synthesize element=_element;
- (struct CGPoint)_untransformedScreenPoint;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(id)arg1 pointsOffset:(struct CGVector)arg2;
- (id)initWithElement:(id)arg1 normalizedOffset:(struct CGVector)arg2;
- (id)init;

- (void)doubleTap;
- (void)tap;

@end

#endif