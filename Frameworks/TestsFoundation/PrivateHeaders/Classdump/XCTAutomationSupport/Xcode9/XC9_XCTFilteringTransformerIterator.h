#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9_XCTAutomationSupport_CDStructures.h"
#import "XC9_SharedHeader.h"
#import "XC9_XCTMatchingElementIterator.h"

@class XCTElementFilteringTransformer;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTFilteringTransformerIterator : XCTMatchingElementIterator
{
    NSEnumerator *_inputEnumerator;
    XCTElementFilteringTransformer *_filteringTransformer;
}

@property(readonly) XCTElementFilteringTransformer *filteringTransformer; // @synthesize filteringTransformer=_filteringTransformer;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

@end

#endif