//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSString;

@interface PayIBGTransaction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buyBankName; // @dynamic buyBankName;
@property(retain, nonatomic) NSString *des; // @dynamic des;
@property(retain, nonatomic) NSString *feeType; // @dynamic feeType;
@property(nonatomic) unsigned int modifyTimestamp; // @dynamic modifyTimestamp;
@property(retain, nonatomic) NSString *payStatusName; // @dynamic payStatusName;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(retain, nonatomic) NSString *spName; // @dynamic spName;
@property(nonatomic) unsigned int totalFee; // @dynamic totalFee;
@property(nonatomic) unsigned int tradeStatus; // @dynamic tradeStatus;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end

