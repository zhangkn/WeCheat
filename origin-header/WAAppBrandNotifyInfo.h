//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAAppBrandNotifyInfo : NSObject <PBCoding>
{
    _Bool isAlreadyDownload;
    unsigned int type;
    unsigned int debugStartTime;
    unsigned int debugEndTime;
    unsigned int from;
    NSString *appid;
    NSString *username;
    NSString *debugURL;
    NSString *checkSum;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(nonatomic) unsigned int debugEndTime; // @synthesize debugEndTime;
@property(nonatomic) unsigned int debugStartTime; // @synthesize debugStartTime;
@property(retain, nonatomic) NSString *debugURL; // @synthesize debugURL;
@property(nonatomic) unsigned int from; // @synthesize from;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
