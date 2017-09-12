//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCardDetailViewControllerDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayCardContorlLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayCardDetailViewControllerDelegate>
{
}

- (void)BackToRootView;
- (void)CardDetailBack;
- (void)CardDetailExpiredUnbindCard:(id)arg1;
- (void)CardDetailRepay:(id)arg1;
- (void)CardDetailSetMainBankCard:(id)arg1;
- (void)CardDetailUnbindCard:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnSetMainCard:(id)arg1 Error:(id)arg2;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

