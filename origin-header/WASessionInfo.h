//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCTTableCoding-Protocol.h"

@interface WASessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)outUnreadCount;
+ (const struct WCTProperty *)outUnreadMsgTime;
+ (const struct WCTProperty *)pbLastMessage;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)sessionId;
+ (const struct WCTProperty *)sessionTopTime;
+ (const struct WCTProperty *)sessionUnTopTime;
+ (const struct WCTProperty *)unreadCount;
- (void)clearOutUnreadCount;
- (id)genContact;
- (void)setContact:(id)arg1;
- (void)updateOutUnreadCount;
- (void)updateSessionInfo;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
