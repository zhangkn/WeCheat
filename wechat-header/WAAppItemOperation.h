//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAAppItemOperation : MMObject <PBCoding>
{
    _Bool _excuteSync;
    _Bool _isOperating;
    unsigned int appType;
    unsigned int opType;
    unsigned int retryCount;
    unsigned int scene;
    unsigned int isFromBackground;
    unsigned int recordType;
    unsigned int _reason;
    NSString *usrname;
    NSString *_appMd5Str;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appMd5Str; // @synthesize appMd5Str=_appMd5Str;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(nonatomic) _Bool excuteSync; // @synthesize excuteSync=_excuteSync;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int isFromBackground; // @synthesize isFromBackground;
@property(nonatomic) _Bool isOperating; // @synthesize isOperating=_isOperating;
@property(nonatomic) unsigned int opType; // @synthesize opType;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int recordType; // @synthesize recordType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(copy, nonatomic) NSString *usrname; // @synthesize usrname;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

