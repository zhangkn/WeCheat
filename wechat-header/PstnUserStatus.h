//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSString;

@interface PstnUserStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int errCode; // @dynamic errCode;
@property(nonatomic) unsigned int errLevel; // @dynamic errLevel;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *errTitle; // @dynamic errTitle;
@property(nonatomic) unsigned int memberId; // @dynamic memberId;
@property(nonatomic) unsigned int userStatus; // @dynamic userStatus;
@property(nonatomic) unsigned int userStatusKey; // @dynamic userStatusKey;

@end

