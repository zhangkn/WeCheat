//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface WXCPbCSVoiceMemberWhisperReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSData *whisperBuf; // @dynamic whisperBuf;
@property(retain, nonatomic) NSMutableArray *whisperToUsernames; // @dynamic whisperToUsernames;

@end

