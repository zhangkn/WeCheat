//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;
@protocol WCPayPaidDetailQueryAwardCgiDelegate;

@interface WCPayPaidDetailQueryAwardCgi : WCPayBaseTenPayCgi
{
    NSString *_activityId;
    NSString *_awardId;
    NSString *_sendRecordId;
    NSString *_userRecordId;
    NSString *_reqKey;
    NSString *_transactionId;
    NSString *_activityMchId;
    NSString *_activityType;
    id <WCPayPaidDetailQueryAwardCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *activityMchId; // @synthesize activityMchId=_activityMchId;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
- (void)callErrorDelegate;
@property(nonatomic) __weak id <WCPayPaidDetailQueryAwardCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) NSString *sendRecordId; // @synthesize sendRecordId=_sendRecordId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *userRecordId; // @synthesize userRecordId=_userRecordId;
- (void)startSendRequest;

@end

