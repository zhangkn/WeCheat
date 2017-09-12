//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CancelQRPayRequest, CancelQRPayResponse, CheckPayJsapiRequest, CheckPayJsapiResponse, EvaluateOrderRequest, EvaluateOrderResponse, GenPrepayRequest, GenPrepayResponse, GetA8KeyReq, GetA8KeyResp, GetBanPayMobileInfoRequest, GetBanPayMobileInfoResponse, GetBizIapDetailRequest, GetBizIapDetailResponse, GetOfflinePayInfoRequest, GetOfflinePayInfoResponse, OfflinePayConfirmRequest, OfflinePayConfirmResponse, PayAuthAppRequest, PayAuthAppResponse, PayDelUserRollRequest, PayDelUserRollResponse, PayQueryUserRollRequest, PayQueryUserRollResponse, PaySubscribeRequest, PaySubscribeResponse, RemoveVirtualBankCardRequest, RemoveVirtualBankCardResponse, SetMainBankCardRequest, SetMainBankCardResponse, SubmitPayProductBuyInfoRequest, SubmitPayProductBuyInfoResponse, TenPayRequest, TenPayResponse;

@protocol WCPayNetworkHelperDelegate <NSObject>
- (void)OnCheckWCPayJsApiErrorResponse:(CheckPayJsapiResponse *)arg1 Request:(CheckPayJsapiRequest *)arg2;
- (void)OnCheckWCPayJsApiResponse:(CheckPayJsapiResponse *)arg1 Request:(CheckPayJsapiRequest *)arg2;
- (void)OnEvaluateOrderErrorResponse:(EvaluateOrderResponse *)arg1 Request:(EvaluateOrderRequest *)arg2;
- (void)OnEvaluateOrderResponse:(EvaluateOrderResponse *)arg1 Request:(EvaluateOrderRequest *)arg2;
- (void)OnGetA8KeyLogicErrorResponse:(GetA8KeyResp *)arg1 Request:(GetA8KeyReq *)arg2;
- (void)OnGetA8KeyLogicResponse:(GetA8KeyResp *)arg1 Request:(GetA8KeyReq *)arg2;
- (void)OnGetBanPayMobileInfoResponse:(GetBanPayMobileInfoResponse *)arg1 Request:(GetBanPayMobileInfoRequest *)arg2;
- (void)OnGetOfflinePayInfoErrorResponse:(GetOfflinePayInfoResponse *)arg1 Request:(GetOfflinePayInfoRequest *)arg2;
- (void)OnGetOfflinePayInfoResponse:(GetOfflinePayInfoResponse *)arg1 Request:(GetOfflinePayInfoRequest *)arg2;
- (void)OnRemoveVirtualCardErrorResponse:(RemoveVirtualBankCardResponse *)arg1 Request:(RemoveVirtualBankCardRequest *)arg2;
- (void)OnRemoveVirtualCardResponse:(RemoveVirtualBankCardResponse *)arg1 Request:(RemoveVirtualBankCardRequest *)arg2;
- (void)OnSetMainBankCardErrorResponse:(SetMainBankCardResponse *)arg1 Request:(SetMainBankCardRequest *)arg2;
- (void)OnSetMainBankCardResponse:(SetMainBankCardResponse *)arg1 Request:(SetMainBankCardRequest *)arg2;
- (void)OnWCBizIapOrderDetailErrorResponse:(GetBizIapDetailResponse *)arg1 Request:(GetBizIapDetailRequest *)arg2;
- (void)OnWCBizIapOrderDetailResponse:(GetBizIapDetailResponse *)arg1 Request:(GetBizIapDetailRequest *)arg2;
- (void)OnWCPayConfirmOfflinePayErrorResponse:(OfflinePayConfirmResponse *)arg1 Request:(OfflinePayConfirmRequest *)arg2;
- (void)OnWCPayConfirmOfflinePayResponse:(OfflinePayConfirmResponse *)arg1 Request:(OfflinePayConfirmRequest *)arg2;
- (void)OnWCPayDelOrderHistoryErrorResponse:(PayDelUserRollResponse *)arg1 Request:(PayDelUserRollRequest *)arg2;
- (void)OnWCPayDelOrderHistoryResponse:(PayDelUserRollResponse *)arg1 Request:(PayDelUserRollRequest *)arg2;
- (void)OnWCPayGenPrepayErrorResponse:(GenPrepayResponse *)arg1 Request:(GenPrepayRequest *)arg2;
- (void)OnWCPayGenPrepayResponse:(GenPrepayResponse *)arg1 Request:(GenPrepayRequest *)arg2;
- (void)OnWCPayGetAppAuthUrlErrorResponse:(PayAuthAppResponse *)arg1 Request:(PayAuthAppRequest *)arg2;
- (void)OnWCPayGetAppAuthUrlResponse:(PayAuthAppResponse *)arg1 Request:(PayAuthAppRequest *)arg2;
- (void)OnWCPayGetOrderHistoryErrorResponse:(PayQueryUserRollResponse *)arg1 Request:(PayQueryUserRollRequest *)arg2;
- (void)OnWCPayGetOrderHistoryResponse:(PayQueryUserRollResponse *)arg1 Request:(PayQueryUserRollRequest *)arg2;
- (void)OnWCPayQuitQRScanPayErrorResponse:(CancelQRPayResponse *)arg1 Request:(CancelQRPayRequest *)arg2;
- (void)OnWCPayQuitQRScanPayResponse:(CancelQRPayResponse *)arg1 Request:(CancelQRPayRequest *)arg2;
- (void)OnWCPaySubmitMallPrepayErrorResponse:(SubmitPayProductBuyInfoResponse *)arg1 Request:(SubmitPayProductBuyInfoRequest *)arg2;
- (void)OnWCPaySubmitMallPrepayResponse:(SubmitPayProductBuyInfoResponse *)arg1 Request:(SubmitPayProductBuyInfoRequest *)arg2;
- (void)OnWCPaySubscribeServiceAppErrorResponse:(PaySubscribeResponse *)arg1 Request:(PaySubscribeRequest *)arg2;
- (void)OnWCPaySubscribeServiceAppResponse:(PaySubscribeResponse *)arg1 Request:(PaySubscribeRequest *)arg2;
- (void)OnWCToTenpayCommonErrorResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
- (void)OnWCToTenpayCommonResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
- (void)OnWCToTenpayCommonSystemErrorResponse:(TenPayResponse *)arg1 Request:(TenPayRequest *)arg2;
@end

