//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetLatestPayProductInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *payAppId; // @dynamic payAppId;
@property(retain, nonatomic) NSString *payFuncId; // @dynamic payFuncId;
@property(retain, nonatomic) NSString *payProductId; // @dynamic payProductId;
@property(retain, nonatomic) NSString *remarks; // @dynamic remarks;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

