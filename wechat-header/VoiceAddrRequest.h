//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VoiceAddrRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bitsPerSample; // @dynamic bitsPerSample;
@property(retain, nonatomic) NSString *clientVoiceId; // @dynamic clientVoiceId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int extraNameCount; // @dynamic extraNameCount;
@property(retain, nonatomic) NSMutableArray *extraNameRemarkNameList; // @dynamic extraNameRemarkNameList;
@property(retain, nonatomic) NSMutableArray *extraNameUserNameList; // @dynamic extraNameUserNameList;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int samplePerSec; // @dynamic samplePerSec;
@property(nonatomic) unsigned int searchType; // @dynamic searchType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int voiceEncodeType; // @dynamic voiceEncodeType;

@end

