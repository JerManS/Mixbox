#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTAutomationSupport_CDStructures.h"
#import "XC10_SharedHeader.h"
#import "XC10_XCTMatchingElementIterator.h"
#import <Foundation/Foundation.h>

@protocol XCTElementSetTransformer;

@class XCElementSnapshot, XCTElementIndexingTransformer;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>
{
    _Bool _hasMatched;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    XCTElementIndexingTransformer *_indexingTransformer;
    unsigned long long _count;
}

@property(readonly) _Bool hasMatched; // @synthesize hasMatched=_hasMatched;
@property unsigned long long count; // @synthesize count=_count;
@property(readonly) XCTElementIndexingTransformer *indexingTransformer; // @synthesize indexingTransformer=_indexingTransformer;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(retain) XCElementSnapshot *input; // @synthesize input=_input;
@property(readonly) NSSet *currentRelatedElements;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif