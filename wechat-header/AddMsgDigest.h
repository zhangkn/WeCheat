//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class SKBuiltinString_t;

@interface AddMsgDigest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *chatRoomId; // @dynamic chatRoomId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) SKBuiltinString_t *digestContent; // @dynamic digestContent;
@property(nonatomic) unsigned int isAted; // @dynamic isAted;
@property(nonatomic) unsigned int msgSeq; // @dynamic msgSeq;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int unDeliverCount; // @dynamic unDeliverCount;

@end

