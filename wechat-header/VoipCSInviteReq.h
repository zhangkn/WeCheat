//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface VoipCSInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *callContext; // @dynamic callContext;
@property(retain, nonatomic) NSData *capInfo; // @dynamic capInfo;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *toBizAppId; // @dynamic toBizAppId;
@property(retain, nonatomic) NSString *toBizUserName; // @dynamic toBizUserName;

@end

