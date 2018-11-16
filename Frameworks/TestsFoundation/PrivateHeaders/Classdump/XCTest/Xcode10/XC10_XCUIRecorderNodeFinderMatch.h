#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "XC10_XCTest_CDStructures.h"
#import "XC10_SharedHeader.h"
#import <Foundation/Foundation.h>

@class XCSourceCodeTreeNode, XCUIRecorderNodeFinder;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIRecorderNodeFinderMatch : NSObject
{
    NSSet *_matchingSnapshots;
    XCSourceCodeTreeNode *_node;
    XCUIRecorderNodeFinder *_ancestorFinder;
    NSMutableArray *_descendantFinders;
}

@property(retain) NSMutableArray *descendantFinders; // @synthesize descendantFinders=_descendantFinders;
@property(retain) XCUIRecorderNodeFinder *ancestorFinder; // @synthesize ancestorFinder=_ancestorFinder;
@property(retain) XCSourceCodeTreeNode *node; // @synthesize node=_node;
@property(copy) NSSet *matchingSnapshots; // @synthesize matchingSnapshots=_matchingSnapshots;
- (void)invalidate;
- (id)nodeIncludingDescendants;
- (id)description;
- (id)initWithNode:(id)arg1 matchingSnapshots:(id)arg2 ancestorFinder:(id)arg3;

@end

#endif