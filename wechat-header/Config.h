//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSString;

@interface Config : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *echoStr; // @dynamic echoStr;
@property(nonatomic) unsigned int httpConnectTimeoutMillis; // @dynamic httpConnectTimeoutMillis;
@property(nonatomic) unsigned int httpReadTimeoutMillis; // @dynamic httpReadTimeoutMillis;
@property(retain, nonatomic) NSString *pingEnabled; // @dynamic pingEnabled;
@property(retain, nonatomic) NSString *pingUrl; // @dynamic pingUrl;
@property(retain, nonatomic) NSString *threeTwoBlackUrl; // @dynamic threeTwoBlackUrl;
@property(nonatomic) int version; // @dynamic version;

@end

