//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBBottle : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _serverId;
    long long lastInsertedRowID;
    NSString *_encryptUserName;
    NSString *_bottleId;
    NSString *_ext;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)bottleId;
+ (const struct WCTProperty *)encryptUserName;
+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)localId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)serverId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property(retain, nonatomic) NSString *encryptUserName; // @synthesize encryptUserName=_encryptUserName;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int serverId; // @synthesize serverId=_serverId;

@end

