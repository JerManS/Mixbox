#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9_XCTest_CDStructures.h"
#import "XC9_SharedHeader.h"
#import "XC9_XCTElementSnapshotProvider.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCUIElementQuery.h>
#import <XCTest/XCUIElementTypeQueryProvider.h>

@protocol XCTElementSetTransformer;

@class XCElementSnapshot, XCTElementQuery, XCUIApplication, XCUIElement, XCUIElementQuery;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIElementQuery ()
{
    _Bool _changesScope;
    _Bool _stopsOnFirstMatch;
    XCUIElementQuery *_inputQuery;
    unsigned long long _expressedType;
    NSArray *_expressedIdentifiers;
    NSOrderedSet *_lastInput;
    NSOrderedSet *_lastOutput;
    XCElementSnapshot *_rootElementSnapshot;
    NSString *_queryDescription;
    id <XCTElementSetTransformer> _transformer;
}

@property(retain) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(readonly, copy) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(retain) XCElementSnapshot *rootElementSnapshot; // @synthesize rootElementSnapshot=_rootElementSnapshot;
@property(copy) NSOrderedSet *lastOutput; // @synthesize lastOutput=_lastOutput;
@property(copy) NSOrderedSet *lastInput; // @synthesize lastInput=_lastInput;
@property(copy) NSArray *expressedIdentifiers; // @synthesize expressedIdentifiers=_expressedIdentifiers;
@property unsigned long long expressedType; // @synthesize expressedType=_expressedType;
@property _Bool stopsOnFirstMatch; // @synthesize stopsOnFirstMatch=_stopsOnFirstMatch;
@property _Bool changesScope; // @synthesize changesScope=_changesScope;
@property(readonly) XCUIElementQuery *inputQuery; // @synthesize inputQuery=_inputQuery;
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (_Bool)_resolveRemoteElements:(id)arg1 inSnapshot:(id)arg2 error:(id *)arg3;
@property(readonly, copy) XCElementSnapshot *elementSnapshotForDebugDescription;
- (id)matchingSnapshotsForLocallyEvaluatedQuery:(id)arg1 error:(id *)arg2;
- (id)matchingSnapshotsWithError:(id *)arg1;
@property(readonly, copy) XCTElementQuery *backingQuery;
- (id)matchingSnapshotsHandleUIInterruption:(_Bool)arg1 withError:(id *)arg2;
- (id)_elementMatchingAccessibilityElementOfSnapshot:(id)arg1;
- (id)_descendantMatchingAccessibilityElement:(id)arg1;

- (id)elementWithPlaceholderValue:(id)arg1;
- (id)elementWithValue:(id)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithLabel:(id)arg1;
- (id)elementWithTitle:(id)arg1;

- (id)_containingPredicate:(id)arg1 queryDescription:(id)arg2;

- (id)_predicateWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)_queryWithPredicate:(id)arg1;
- (id)_queryWithPredicate:(id)arg1 description:(id)arg2;
- (id)sorted:(CDUnknownBlockType)arg1;
- (id)descending:(unsigned long long)arg1;
- (id)ascending:(unsigned long long)arg1;
- (id)filter:(CDUnknownBlockType)arg1;

- (id)debugDescriptionWithSnapshot:(id)arg1;
- (id)_debugDescriptionWithIndent:(id *)arg1 rootElementSnapshot:(id)arg2;
@property(readonly, copy) NSString *elementDescription;
- (id)_derivedExpressedIdentifiers;
- (unsigned long long)_derivedExpressedType;
@property(readonly) XCUIApplication *application;
- (id)initWithInputQuery:(id)arg1 queryDescription:(id)arg2 transformer:(id)arg3;
- (id)init;

// Remaining properties

@end

#endif