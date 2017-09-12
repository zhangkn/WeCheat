//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDBBackupIndexObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    NSString *m_fileName;
    long long m_startTime;
    long long m_endTime;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)m_endTime;
+ (const struct WCTProperty *)m_fileName;
+ (const struct WCTProperty *)m_sessionName;
+ (const struct WCTProperty *)m_startTime;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(retain, nonatomic) NSString *m_fileName; // @synthesize m_fileName;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

