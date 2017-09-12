//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBContactMeta : NSObject <WCTTableCoding>
{
    unsigned int _lastUpdate;
    unsigned int _flag;
    unsigned int _intCon2;
    unsigned int _intCon3;
    NSString *_username;
    NSString *_strCon1;
    NSString *_strCon2;
    NSString *_strCon3;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)flag;
+ (const struct WCTProperty *)intCon2;
+ (const struct WCTProperty *)intCon3;
+ (const struct WCTProperty *)lastUpdate;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)strCon1;
+ (const struct WCTProperty *)strCon2;
+ (const struct WCTProperty *)strCon3;
+ (const struct WCTProperty *)username;
- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned int intCon2; // @synthesize intCon2=_intCon2;
@property(nonatomic) unsigned int intCon3; // @synthesize intCon3=_intCon3;
@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *strCon1; // @synthesize strCon1=_strCon1;
@property(retain, nonatomic) NSString *strCon2; // @synthesize strCon2=_strCon2;
@property(retain, nonatomic) NSString *strCon3; // @synthesize strCon3=_strCon3;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

