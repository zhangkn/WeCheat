//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MultiTalkSessionItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int lastMessageID;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    long long lastInsertedRowID;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)clientGroupID;
+ (const struct WCTProperty *)createUserName;
+ (const struct WCTProperty *)groupID;
+ (const struct WCTProperty *)lastMessageID;
+ (const struct WCTProperty *)localID;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (_Bool)isSessionItemValid;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) unsigned int lastMessageID; // @synthesize lastMessageID;
@property(nonatomic) unsigned int localID; // @synthesize localID;

@end

