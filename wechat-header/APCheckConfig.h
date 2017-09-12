//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface APCheckConfig : MMObject <WCTTableCoding>
{
    int _configVersion;
    unsigned int _httpConnectTimeoutMillis;
    unsigned int _httpReadTimeoutMillis;
    NSString *_pingUrl;
    NSString *_threeTwoBlackUrl;
    NSString *_pingEnabled;
    NSString *_echoStr;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)configVersion;
+ (const struct WCTProperty *)echoStr;
+ (const struct WCTProperty *)httpConnectTimeoutMillis;
+ (const struct WCTProperty *)httpReadTimeoutMillis;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)pingEnabled;
+ (const struct WCTProperty *)pingUrl;
+ (const struct WCTProperty *)threeTwoBlackUrl;
- (void).cxx_destruct;
@property(nonatomic) int configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *echoStr; // @synthesize echoStr=_echoStr;
@property(nonatomic) unsigned int httpConnectTimeoutMillis; // @synthesize httpConnectTimeoutMillis=_httpConnectTimeoutMillis;
@property(nonatomic) unsigned int httpReadTimeoutMillis; // @synthesize httpReadTimeoutMillis=_httpReadTimeoutMillis;
@property(retain, nonatomic) NSString *pingEnabled; // @synthesize pingEnabled=_pingEnabled;
@property(retain, nonatomic) NSString *pingUrl; // @synthesize pingUrl=_pingUrl;
@property(retain, nonatomic) NSString *threeTwoBlackUrl; // @synthesize threeTwoBlackUrl=_threeTwoBlackUrl;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

