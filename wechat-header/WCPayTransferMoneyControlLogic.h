//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IStrangerContactMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayF2FPayCheckCgiDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"
#import "WCPayTransferMoneyViewControllerDelegate-Protocol.h"
#import "WCPayTransferSelectContactsViewControllerDelegate-Protocol.h"
#import "WCPayTransferSelectSessionViewControllerDelegate-Protocol.h"

@class JSEvent, NSString, WCPayF2FPayCheckCgi, WCPayPayMoneyLogic;

@interface WCPayTransferMoneyControlLogic : WCPayControlLogic <UIAlertViewDelegate, WCPayF2FPayCheckCgiDelegate, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayTransferSelectContactsViewControllerDelegate, WCPayTransferSelectSessionViewControllerDelegate, WCPayTransferMoneyViewControllerDelegate, WCBaseControlMgrExt, IStrangerContactMgrExt, MMTipsViewControllerDelegate>
{
    WCPayPayMoneyLogic *m_payLogic;
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *m_nsA8KeyResponseUrl;
    JSEvent *m_jsEvent;
    _Bool _disableEditMoney;
    NSString *_curAlertRightUrl;
    WCPayF2FPayCheckCgi *_f2fPayCheckCgi;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueTransfer;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)OnInterruptContinueTransfer;
- (void)OnOpenOrderList;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnThreeInterruptContinueTransfer;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerBack;
- (_Bool)OnWCPayTransferSelectChatRoomContactViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnWCPayTransferSelectContactsViewControllerBack;
- (_Bool)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnWCPayTransferSelectSessionViewControllerBack;
- (_Bool)OnWCPayTransferSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectSessionViewControllerNewSession;
- (void)OnWCPayTransferSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)WCPayTransferMoneyViewControllerCancel:(_Bool)arg1;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSString *curAlertRightUrl; // @synthesize curAlertRightUrl=_curAlertRightUrl;
- (void)dealloc;
@property(retain, nonatomic) WCPayF2FPayCheckCgi *f2fPayCheckCgi; // @synthesize f2fPayCheckCgi=_f2fPayCheckCgi;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithA8KeyResponseUrl:(id)arg1 payChannel:(int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1 placeHolderMoney:(long long)arg2 disableEditMoney:(_Bool)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)showTransferChargeTipsView;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

