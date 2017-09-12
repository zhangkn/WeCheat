//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContact.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface KFContact : CBaseContact <WCTTableCoding>
{
    _Bool _headImgUpdateFlag;
    unsigned int _updateTime;
    NSString *kfOpenId;
    NSString *_brand;
    NSString *_headImageUrl;
    NSString *_nickName;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)brand;
+ (const struct WCTProperty *)headImageUrl;
+ (const struct WCTProperty *)headImgUpdateFlag;
+ (const struct WCTProperty *)kfOpenId;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(nonatomic) _Bool headImgUpdateFlag; // @synthesize headImgUpdateFlag=_headImgUpdateFlag;
@property(retain, nonatomic) NSString *kfOpenId; // @synthesize kfOpenId;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

