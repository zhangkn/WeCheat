//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RealNameInfo;

@interface FFHBOpenResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *changeUrl; // @dynamic changeUrl;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(nonatomic) unsigned int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *externMess; // @dynamic externMess;
@property(nonatomic) int hbStatus; // @dynamic hbStatus;
@property(nonatomic) int isLucky; // @dynamic isLucky;
@property(nonatomic) int jumpChange; // @dynamic jumpChange;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;

@end

