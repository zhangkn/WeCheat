//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol WCPayFacingReceiveQRCodeViewControllerDelegate <NSObject>

@optional
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (UIImage *)WCPayFacingReceiveGetOfflineLogo;
- (UIImage *)WCPayFacingReceiveGetOfflineSlogan;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveWitchBalance;
@end

