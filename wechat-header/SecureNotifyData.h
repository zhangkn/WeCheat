//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData;

@interface SecureNotifyData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int checkSum; // @dynamic checkSum;
@property(nonatomic) unsigned int compressAlgo; // @dynamic compressAlgo;
@property(nonatomic) unsigned int compressLen; // @dynamic compressLen;
@property(nonatomic) unsigned int compressVer; // @dynamic compressVer;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int encryptAlgo; // @dynamic encryptAlgo;
@property(nonatomic) unsigned int encryptSalt; // @dynamic encryptSalt;
@property(nonatomic) unsigned int encryptVer; // @dynamic encryptVer;

@end

