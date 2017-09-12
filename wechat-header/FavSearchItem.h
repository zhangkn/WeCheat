//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FavSearchItem : NSObject <WCTTableCoding>
{
    unsigned int localId;
    unsigned int status;
    int type;
    int subTypes;
    NSString *xml;
    NSString *searchStr;
    NSString *StrRes1;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)localId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)searchStr;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)subTypes;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)xml;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
- (id)init;
@property(nonatomic) unsigned int localId; // @synthesize localId;
@property(retain, nonatomic) NSString *searchStr; // @synthesize searchStr;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) int subTypes; // @synthesize subTypes;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *xml; // @synthesize xml;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

