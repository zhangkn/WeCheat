//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetPayFunctionListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cacheTime; // @dynamic cacheTime;
@property(nonatomic) unsigned int notShowTutorial; // @dynamic notShowTutorial;
@property(retain, nonatomic) NSString *payFunctionList; // @dynamic payFunctionList;

@end

