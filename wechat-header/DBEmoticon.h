//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBEmoticon : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _length;
    unsigned int _status;
    unsigned int _catalogId;
    unsigned int _lastUsedTime;
    unsigned int _extFlag;
    unsigned int _indexInPack;
    NSString *_md5;
    NSString *_message;
    NSString *_catalog;
    NSString *_draft;
    NSString *_extInfo;
    NSString *_packageId;
    NSString *_ConStrRes3;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)catalog;
+ (const struct WCTProperty *)catalogId;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)draft;
+ (const struct WCTProperty *)extFlag;
+ (const struct WCTProperty *)extInfo;
+ (const struct WCTProperty *)indexInPack;
+ (const struct WCTProperty *)lastUsedTime;
+ (const struct WCTProperty *)length;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)message;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)packageId;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId=_catalogId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int indexInPack; // @synthesize indexInPack=_indexInPack;
@property(nonatomic) unsigned int lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

