//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayLQTPreRedeemFundCgiDelegate;

@interface WCPayLQTPreRedeemFundCgi : WCPayBaseCgi
{
    unsigned int _fee;
    id <WCPayLQTPreRedeemFundCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTPreRedeemFundCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
@property(nonatomic) unsigned int fee; // @synthesize fee=_fee;
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;

@end

