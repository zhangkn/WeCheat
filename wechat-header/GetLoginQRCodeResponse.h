//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface GetLoginQRCodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent; // @dynamic blueToothBroadCastContent;
@property(retain, nonatomic) NSString *blueToothBroadCastUuid; // @dynamic blueToothBroadCastUuid;
@property(nonatomic) unsigned int checkTime; // @dynamic checkTime;
@property(nonatomic) unsigned int expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) SKBuiltinBuffer_t *notifyKey; // @dynamic notifyKey;
@property(retain, nonatomic) SKBuiltinBuffer_t *qrcode; // @dynamic qrcode;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

