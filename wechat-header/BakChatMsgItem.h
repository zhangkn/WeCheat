//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface BakChatMsgItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int bufferLength; // @dynamic bufferLength;
@property(nonatomic) unsigned int bufferType; // @dynamic bufferType;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) long long clientMsgMillTime; // @dynamic clientMsgMillTime;
@property(nonatomic) unsigned int clientMsgTime; // @dynamic clientMsgTime;
@property(retain, nonatomic) SKBuiltinString_t *content; // @dynamic content;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSMutableArray *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned int mediaIdCount; // @dynamic mediaIdCount;
@property(retain, nonatomic) NSMutableArray *mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned int msgFlag; // @dynamic msgFlag;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int msgStatus; // @dynamic msgStatus;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int sequentId; // @dynamic sequentId;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

