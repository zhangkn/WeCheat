//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface ReportIdKeyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *datapkg; // @dynamic datapkg;
@property(retain, nonatomic) NSData *encryptkey; // @dynamic encryptkey;
@property(nonatomic) unsigned int genstgver; // @dynamic genstgver;
@property(nonatomic) unsigned int specstgver; // @dynamic specstgver;

@end

