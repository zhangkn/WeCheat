//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsBufferUrl;

@interface SnsUploadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsBufferUrl *bufferUrl; // @dynamic bufferUrl;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int thumbUrlCount; // @dynamic thumbUrlCount;
@property(retain, nonatomic) NSMutableArray *thumbUrls; // @dynamic thumbUrls;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

