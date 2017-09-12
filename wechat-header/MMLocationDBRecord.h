//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMLocationDBRecord : NSObject <WCTTableCoding>
{
    unsigned int _m_latitude;
    unsigned int _m_longitude;
    NSString *_m_address;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)m_address;
+ (const struct WCTProperty *)m_latitude;
+ (const struct WCTProperty *)m_longitude;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
@property(nonatomic) unsigned int m_latitude; // @synthesize m_latitude=_m_latitude;
@property(nonatomic) unsigned int m_longitude; // @synthesize m_longitude=_m_longitude;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

