//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSEMessageMetaDataAppMsgItem : NSObject <PBCoding>
{
    unsigned int fileSize;
    NSString *toUsername;
    NSString *title;
    NSString *contentUrl;
    NSString *thumbUrl;
    NSString *fileName;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

