#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9__CDStructures.h"
#import "XC9_SharedHeader.h"
#import <Foundation/Foundation.h>

@protocol XCTRunnerAutomationSession, XCUIAccessibilityInterface;

@class XCAccessibilityElement, XCElementSnapshot, XCUIApplicationImpl, XCUIApplicationMonitor;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIApplicationProcess : NSObject
{
    NSObject *_queue;
    _Bool _accessibilityActive;
    unsigned long long _applicationState;
    int _processID;
    id _token;
    int _exitCode;
    _Bool _eventLoopHasIdled;
    _Bool _hasReceivedEventLoopHasIdled;
    _Bool _animationsHaveFinished;
    _Bool _hasReceivedAnimationsHaveFinished;
    _Bool _hasExitCode;
    _Bool _hasCrashReport;
    XCUIApplicationImpl *_applicationImplementation;
    id <XCTRunnerAutomationSession> _automationSession;
    XCElementSnapshot *_lastSnapshot;
    XCUIApplicationMonitor *_applicationMonitor;
    id <XCUIAccessibilityInterface> _axInterface;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
@property(retain) id <XCUIAccessibilityInterface> axInterface; // @synthesize axInterface=_axInterface;
@property(retain) XCUIApplicationMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(retain) id <XCTRunnerAutomationSession> automationSession; // @synthesize automationSession=_automationSession;
@property _Bool hasCrashReport; // @synthesize hasCrashReport=_hasCrashReport;
@property _Bool hasExitCode; // @synthesize hasExitCode=_hasExitCode;
- (void)terminate;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;
- (void)acquireBackgroundAssertion;
- (void)waitForAutomationSession;
- (void)waitForQuiescenceIncludingAnimationsIdle:(_Bool)arg1;
@property _Bool hasReceivedAnimationsHaveFinished;
@property _Bool animationsHaveFinished;
@property _Bool hasReceivedEventLoopHasIdled;
@property _Bool eventLoopHasIdled;
@property int exitCode;
@property(retain) id token;
@property(nonatomic) int processID;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
- (void)_awaitKnownApplicationState;
@property(nonatomic) unsigned long long applicationState;
@property XCUIApplicationImpl *applicationImplementation; // @synthesize applicationImplementation=_applicationImplementation;
@property(nonatomic) _Bool accessibilityActive;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement;
- (id)shortDescription;
- (id)_queue_description;
- (id)description;
- (id)init;
- (id)initWithApplicationMonitor:(id)arg1 axInterface:(id)arg2;

@end

#endif