//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface ListMFriendReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int emailCount; // @dynamic emailCount;
@property(retain, nonatomic) NSMutableArray *emailList; // @dynamic emailList;
@property(nonatomic) unsigned int mobileCount; // @dynamic mobileCount;
@property(retain, nonatomic) NSMutableArray *mobileList; // @dynamic mobileList;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

