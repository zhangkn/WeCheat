//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDeviceAirKissReccord : NSObject <WCTTableCoding>
{
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *m_key;
    NSString *m_data;
    NSString *StrRes1;
    NSString *StrRes2;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)m_data;
+ (const struct WCTProperty *)m_key;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
- (void)dealloc;
@property(retain, nonatomic) NSString *m_data; // @synthesize m_data;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

