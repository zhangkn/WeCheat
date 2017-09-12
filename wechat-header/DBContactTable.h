//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class DBContactBrand, DBContactChatRoom, DBContactHeadImage, DBContactLocal, DBContactOther, DBContactProfile, DBContactRemark, DBContactSocial, NSString;

@interface DBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _certificationFlag;
    unsigned int _imgStatus;
    NSString *_userName;
    NSString *_encodeUserName;
    DBContactLocal *_dbContactLocal;
    DBContactOther *_dbContactOther;
    DBContactRemark *_dbContactRemark;
    DBContactHeadImage *_dbContactHeadImage;
    DBContactProfile *_dbContactProfile;
    DBContactSocial *_dbContactSocial;
    DBContactChatRoom *_dbContactChatRoom;
    DBContactBrand *_dbContactBrand;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)certificationFlag;
+ (const struct WCTProperty *)dbContactBrand;
+ (const struct WCTProperty *)dbContactChatRoom;
+ (const struct WCTProperty *)dbContactHeadImage;
+ (const struct WCTProperty *)dbContactLocal;
+ (const struct WCTProperty *)dbContactOther;
+ (const struct WCTProperty *)dbContactProfile;
+ (const struct WCTProperty *)dbContactRemark;
+ (const struct WCTProperty *)dbContactSocial;
+ (const struct WCTProperty *)encodeUserName;
+ (const struct WCTProperty *)imgStatus;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(retain, nonatomic) DBContactBrand *dbContactBrand; // @synthesize dbContactBrand=_dbContactBrand;
@property(retain, nonatomic) DBContactChatRoom *dbContactChatRoom; // @synthesize dbContactChatRoom=_dbContactChatRoom;
@property(retain, nonatomic) DBContactHeadImage *dbContactHeadImage; // @synthesize dbContactHeadImage=_dbContactHeadImage;
@property(retain, nonatomic) DBContactLocal *dbContactLocal; // @synthesize dbContactLocal=_dbContactLocal;
@property(retain, nonatomic) DBContactOther *dbContactOther; // @synthesize dbContactOther=_dbContactOther;
@property(retain, nonatomic) DBContactProfile *dbContactProfile; // @synthesize dbContactProfile=_dbContactProfile;
@property(retain, nonatomic) DBContactRemark *dbContactRemark; // @synthesize dbContactRemark=_dbContactRemark;
@property(retain, nonatomic) DBContactSocial *dbContactSocial; // @synthesize dbContactSocial=_dbContactSocial;
@property(retain, nonatomic) NSString *encodeUserName; // @synthesize encodeUserName=_encodeUserName;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=_imgStatus;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

