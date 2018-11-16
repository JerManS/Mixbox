#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "XC9_XCTest_CDStructures.h"
#import "XC9_SharedHeader.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCTAttachment.h>

@class XCTAttachmentImplementation, _XCTAttachmentImplementation;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTAttachment ()
{
    id _internalImplementation;
}

+ (id)attachmentWithXCTImage:(id)arg1 quality:(long long)arg2;
+ (id)_attachmentWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;

+ (_Bool)supportsSecureCoding;
+ (void)setUserAttachmentLifetime:(long long)arg1;
+ (long long)userAttachmentLifetime;
+ (void)setSystemAttachmentLifetime:(long long)arg1;
+ (long long)systemAttachmentLifetime;

+ (id)_attachmentWithContentsOfFileAtURL:(id)arg1 uniformTypeIdentifier:(id)arg2;

+ (id)_attachmentWithArchivableObject:(id)arg1 uniformTypeIdentifier:(id)arg2;

+ (id)_attachmentWithData:(id)arg1 uniformTypeIdentifier:(id)arg2;
@property(readonly) _XCTAttachmentImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (id)debugQuickLookObject;
- (void)makeSystem;
- (id)debugDescription;
- (void)_writeToUserInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForEncoding;
@property(readonly) _Bool hasPayload;
@property(copy) NSString *fileNameOverride;
@property(readonly, copy) NSData *payload;
@property(copy) NSDate *timestamp;
@property long long internalLifetime;
- (id)initWithUniformTypeIdentifier:(id)arg1 name:(id)arg2 serializationBlock:(CDUnknownBlockType)arg3;

@end

#endif