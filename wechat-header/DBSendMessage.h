//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBSendMessage : NSObject <WCTTableCoding>
{
    unsigned int _version;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _imageStatus;
    unsigned int _type;
    unsigned int _des;
    NSString *_userName;
    long long _msgServerId;
    NSString *_message;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)des;
+ (const struct WCTProperty *)imageStatus;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)version;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int des; // @synthesize des=_des;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus=_imageStatus;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

