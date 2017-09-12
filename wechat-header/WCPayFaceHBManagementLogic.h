//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayFaceHBCgiDelegate-Protocol.h"
#import "WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate-Protocol.h"

@class NSString, WCPayControlData, WCPayFaceHBCgi, WCPayPayMoneyLogic;
@protocol WCPayFaceHBManagementLogicDelegate;

@interface WCPayFaceHBManagementLogic : WCRedEnvelopesControlLogic <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCPayFaceHBCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt>
{
    id <WCPayFaceHBManagementLogicDelegate> m_delegate;
    WCPayFaceHBCgi *m_faceHBCgi;
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    unsigned long long m_totalAmount;
    unsigned int m_totalNum;
    int m_scene;
}

- (void).cxx_destruct;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)OnClickNotReceivedButton;
- (void)OnClickViewHBHistory;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 Error:(id)arg2;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithData:(id)arg1;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void)onFailMsg:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

