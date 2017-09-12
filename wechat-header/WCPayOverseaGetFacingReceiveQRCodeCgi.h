//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPayOverseaBaseCgiDelegate-Protocol.h"

@class NSString, WCPayOverseaBaseCgi;
@protocol WCPayOverseaGetFacingReceiveQRCodeCgiDelegate;

@interface WCPayOverseaGetFacingReceiveQRCodeCgi : NSObject <WCPayOverseaBaseCgiDelegate>
{
    id <WCPayOverseaGetFacingReceiveQRCodeCgiDelegate> m_delegate;
    WCPayOverseaBaseCgi *m_cgi;
}

+ (id)GetPathOfOverseaFacingReceiveQRCodeLocalData;
+ (void)SafeSaveQRCodeLocalData:(id)arg1;
- (void).cxx_destruct;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) WCPayOverseaBaseCgi *m_cgi; // @synthesize m_cgi;
@property(nonatomic) __weak id <WCPayOverseaGetFacingReceiveQRCodeCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)startRequestWithArgument:(id)arg1 UsedLocalCache:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

