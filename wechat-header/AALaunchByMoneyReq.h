//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSMutableArray, NSString;

@interface AALaunchByMoneyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(nonatomic) unsigned long long operationTimestamp; // @dynamic operationTimestamp;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(nonatomic) unsigned long long perAmount; // @dynamic perAmount;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;

@end

