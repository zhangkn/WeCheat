//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface QrCodeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int expireTimeInterval; // @dynamic expireTimeInterval;
@property(nonatomic) unsigned int lowerBound; // @dynamic lowerBound;
@property(nonatomic) _Bool needInsertShowTimestamp; // @dynamic needInsertShowTimestamp;
@property(retain, nonatomic) NSMutableArray *qrCodeDataList; // @dynamic qrCodeDataList;
@property(nonatomic) unsigned int showExpireInterval; // @dynamic showExpireInterval;
@property(retain, nonatomic) NSString *showTimestampEncryptKey; // @dynamic showTimestampEncryptKey;

@end

