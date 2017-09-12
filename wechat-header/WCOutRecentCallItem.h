//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCOutRecentCallItem : MMObject <WCTTableCoding, NSCopying>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int statusCode;
    unsigned int _dialScene;
    unsigned int _countyrCodeType;
    unsigned int _callFlag;
    NSString *countryCode;
    NSString *phoneNum;
    long long lastInsertedRowID;
    NSString *nickName;
    NSString *phoneTag;
    NSString *_checkCountryCode;
    NSString *_inviteRespFullPhoneNum;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)countryCode;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)endTime;
+ (const struct WCTProperty *)localID;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)phoneNum;
+ (const struct WCTProperty *)startTime;
+ (const struct WCTProperty *)statusCode;
- (void).cxx_destruct;
- (void)CopyValueToCopy:(id)arg1;
@property(nonatomic) unsigned int callFlag; // @synthesize callFlag=_callFlag;
@property(retain, nonatomic) NSString *checkCountryCode; // @synthesize checkCountryCode=_checkCountryCode;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic) unsigned int countyrCodeType; // @synthesize countyrCodeType=_countyrCodeType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void)dealloc;
@property(nonatomic) unsigned int dialScene; // @synthesize dialScene=_dialScene;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(readonly, nonatomic) NSString *fullPhoneNum;
@property(readonly, nonatomic) NSString *fullPhoneNumInLog;
@property(retain, nonatomic) NSString *inviteRespFullPhoneNum; // @synthesize inviteRespFullPhoneNum=_inviteRespFullPhoneNum;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
@property(retain, nonatomic) NSString *phoneTag; // @synthesize phoneTag;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(nonatomic) unsigned int statusCode; // @synthesize statusCode;
@property(readonly, nonatomic) NSString *statusWording;

@end

