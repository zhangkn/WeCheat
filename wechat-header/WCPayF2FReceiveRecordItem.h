//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayF2FReceiveRecordItem : NSObject
{
    unsigned long long _timeStamp;
    NSString *_billID;
    NSString *_transID;
    NSString *_desc;
    unsigned long long _amount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *billID; // @synthesize billID=_billID;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *transID; // @synthesize transID=_transID;

@end

