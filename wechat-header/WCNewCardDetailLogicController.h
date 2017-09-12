//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IStrangerContactMgrExt-Protocol.h"
#import "IWCCardPkgExt-Protocol.h"
#import "IWCShareCardPkgExt-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"

@class MMTimer, NSArray, NSMutableArray, NSString, WCCardData, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDynamicCodeGenerator, WCCardEnterInfo, WCCardOfflineCodeConfigData, WCCardUsedStoreInfo, WCShareCardData;
@protocol WCNewCardDetailLogicDelegate;

@interface WCNewCardDetailLogicController : MMObject <IWCShareCardPkgExt, IWCCardPkgExt, IdleTimerUtilExt, IStrangerContactMgrExt>
{
    double _oldBrightness;
    double _toBrightness;
    MMTimer *brightTimer;
    MMTimer *_updateOfflineDynamicCodeTimer;
    MMTimer *_updateDynamicCodeTimer;
    unsigned int _getItemInfoEventID;
    unsigned int _acceptItemEventID;
    unsigned int _giftItemEventID;
    unsigned int _getShopsEventID;
    _Bool _bNeedGetCardDataFromSvr;
    _Bool _bIsFromBathView;
    _Bool _isConsumedNotify;
    _Bool _bIsShareCardDetailMode;
    int _cardStatus;
    unsigned int _cardItemFromScene;
    unsigned int _originCardItemFromScene;
    unsigned int _offlineCodeStatus;
    WCCardEnterInfo *_cardEnterInfo;
    WCCardData *_cardData;
    WCCardDynamicCodeGenerator *_dynamicCodeGenerator;
    WCShareCardData *_shareCardData;
    NSMutableArray *_arrShareCardDataList;
    NSMutableArray *_arrUsedShareCardList;
    NSString *_nsConsumedBoxID;
    WCCardUsedStoreInfo *_oneUsedStoreInfo;
    NSArray *_usedStoreList;
    WCCardDataCardInfo *_curCardInfo;
    WCCardDataCardTPInfo *_curCardTPInfo;
    unsigned long long _addCardState;
    id <WCNewCardDetailLogicDelegate> _delegate;
    NSString *_offlineCode;
    NSString *_dynamicCode;
    WCCardOfflineCodeConfigData *_codeConfig;
}

- (void).cxx_destruct;
- (void)acceptCard:(_Bool)arg1;
@property(nonatomic) unsigned long long addCardState; // @synthesize addCardState=_addCardState;
@property(retain, nonatomic) NSMutableArray *arrShareCardDataList; // @synthesize arrShareCardDataList=_arrShareCardDataList;
@property(retain, nonatomic) NSMutableArray *arrUsedShareCardList; // @synthesize arrUsedShareCardList=_arrUsedShareCardList;
- (_Bool)bCanDeleteCurCard;
- (_Bool)bHasEnoughCardDataToShow;
- (_Bool)bIsCardCanShareToFriend;
- (_Bool)bIsCardFromOutAppScene;
@property(nonatomic) _Bool bIsFromBathView; // @synthesize bIsFromBathView=_bIsFromBathView;
- (_Bool)bIsMemberCard;
- (_Bool)bIsMemberCardPreAccept;
- (_Bool)bIsNeedShowRightActionSheetItem;
@property(nonatomic) _Bool bIsShareCardDetailMode; // @synthesize bIsShareCardDetailMode=_bIsShareCardDetailMode;
- (_Bool)bIsShareCardFromSelf;
- (_Bool)bIsShareCardMode;
@property(nonatomic) _Bool bNeedGetCardDataFromSvr; // @synthesize bNeedGetCardDataFromSvr=_bNeedGetCardDataFromSvr;
- (_Bool)bNeedShowNuknowType;
- (_Bool)bNeedToCallDelegateShareCardConsumed;
- (_Bool)bUsingOfflinePay;
- (_Bool)bUsingPayAndQrcode;
@property(retain, nonatomic) WCCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) WCCardEnterInfo *cardEnterInfo; // @synthesize cardEnterInfo=_cardEnterInfo;
@property(nonatomic) unsigned int cardItemFromScene; // @synthesize cardItemFromScene=_cardItemFromScene;
@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
@property(retain, nonatomic) WCCardOfflineCodeConfigData *codeConfig; // @synthesize codeConfig=_codeConfig;
- (void)commonInitData;
- (id)curCardData;
- (id)curCardEnterInfo;
@property(retain, nonatomic) WCCardDataCardInfo *curCardInfo; // @synthesize curCardInfo=_curCardInfo;
- (int)curCardStatus;
@property(retain, nonatomic) WCCardDataCardTPInfo *curCardTPInfo; // @synthesize curCardTPInfo=_curCardTPInfo;
- (void)dealloc;
@property(nonatomic) __weak id <WCNewCardDetailLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteConsumedCardFromCache:(id)arg1;
- (void)doRecoverScreenShot;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(retain, nonatomic) WCCardDynamicCodeGenerator *dynamicCodeGenerator; // @synthesize dynamicCodeGenerator=_dynamicCodeGenerator;
- (void)fullCardDataWithEnterInfo:(id)arg1;
- (id)genAcceptShareInfoWithCardList:(id)arg1;
- (id)genFailAcceptInfo;
- (id)genSuccessAcceptInfo;
- (void)getCardDataFromSvr;
- (id)getCardDataJsonContentIfExist;
- (unsigned int)getCardItemFromScene;
- (id)getCardTypeName;
- (unsigned long long)getCurAddCardState;
- (id)getCurCardDataSource;
- (id)getCurCardId;
- (id)getCurCardTpId;
- (id)getDynamicCode;
- (id)getDynamicCodeGenerator;
- (int)getMarkScene;
- (id)getNearbyShopPboneNum;
- (id)getNearbyStoreInfo;
- (id)getOfflineCode;
- (unsigned int)getOfflineCodeStatus;
- (unsigned int)getOriginCardItemFromScene;
- (id)getOuterAppNameIfExist;
- (void)getPayCardListAndUsrInfoForPayIfNeed;
- (id)getServiceContact;
- (id)getShareCardData;
- (id)getShareCardDataByCardId:(id)arg1;
- (id)getShareCardDataList;
- (unsigned long long)getShareUserCount;
- (id)getShareUsername;
- (id)getUsedShareCardDataList;
- (id)getUsedStoreList;
- (void)giftMyCardTo:(id)arg1;
- (void)graduallyIncreaseBrightnessIfNeed;
- (void)graduallySetBrightness:(double)arg1;
- (void)handleCodeViewNeedMark:(_Bool)arg1 needNotify:(_Bool)arg2 markScene:(int)arg3;
- (void)handleShareCardAfterConsuemdOK;
- (_Bool)hasAnnounceReport;
- (void)initCardData;
- (id)initLogicControllerWithCardEnterInfo:(id)arg1 logicDelegate:(id)arg2;
- (id)initLogicControllerWithShareCardData:(id)arg1 withShareCardListIfExist:(id)arg2 withFromScene:(int)arg3 logicDelegate:(id)arg4;
- (_Bool)isCardDataExistInDB;
- (_Bool)isCardDataFailShareForCardTpId:(id)arg1;
- (_Bool)isCardDataUpdatedOneDayAgo;
@property(nonatomic) _Bool isConsumedNotify; // @synthesize isConsumedNotify=_isConsumedNotify;
- (_Bool)isGetCardDataEachTime;
- (_Bool)isHaveShowTipForCardId:(id)arg1;
- (_Bool)isNeedToDisplayDeeplink;
- (_Bool)isShareCardDataFailShareForCardTpId:(id)arg1;
@property(retain, nonatomic) NSString *nsConsumedBoxID; // @synthesize nsConsumedBoxID=_nsConsumedBoxID;
@property(retain, nonatomic) NSString *offlineCode; // @synthesize offlineCode=_offlineCode;
@property(nonatomic) unsigned int offlineCodeStatus; // @synthesize offlineCodeStatus=_offlineCodeStatus;
- (void)onAcceptCard:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 EventID:(unsigned int)arg4;
- (void)onBanUpdateOfflineCode;
- (void)onDeleteCardResponse:(id)arg1 retCode:(int)arg2;
- (void)onEnterForeground;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGetUpdateOfflineCode:(int)arg1;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onIdleTimerUtilVoipQuit;
- (void)onMarkedResponse:(_Bool)arg1 success:(_Bool)arg2 andMarkUser:(id)arg3 markCardId:(id)arg4 expiredTime:(float)arg5 payQRCodeWording:(id)arg6;
- (void)onMarkedResponseError;
- (void)onMsgNotifyShareCardConsumed:(id)arg1 sharedCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 successShareCardList:(id)arg3 andCardInfo:(id)arg4;
- (void)onShareMyCard:(id)arg1 Error:(int)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onUpdateShareCard:(id)arg1 Error:(int)arg2;
- (void)onUpdateShareCardList:(id)arg1;
- (void)onWCCardUpdate:(id)arg1;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneUsedStoreInfo; // @synthesize oneUsedStoreInfo=_oneUsedStoreInfo;
@property(nonatomic) unsigned int originCardItemFromScene; // @synthesize originCardItemFromScene=_originCardItemFromScene;
- (void)preConvertFormScene:(id)arg1;
- (void)recoverBrightnessIfNeed;
- (void)reloadAllViewControllerContent;
- (void)reloadViewControllerContent;
- (void)setForBatchViewCard;
- (void)setHaveShowTipForCardId:(id)arg1;
@property(retain, nonatomic) WCShareCardData *shareCardData; // @synthesize shareCardData=_shareCardData;
@property(retain, nonatomic) NSArray *usedStoreList; // @synthesize usedStoreList=_usedStoreList;
- (void)shareMyCardWithVisibleUserList:(id)arg1 invisibleUserList:(id)arg2 visibleTagIDList:(id)arg3 invisibleTagIDList:(id)arg4;
- (void)startDynamicCodeUpdateTimer;
- (void)startOfflineDynamicCodeUpdateTimer;
- (void)timerCheckUpdateBrightness;
- (void)trySetupDynamicCodeGenerator;
- (void)trySetupOfflineLogic;
- (void)updateCardDataFromOuter:(id)arg1;
- (void)updateCardStatus;
- (void)updateDynamicCode;
- (void)updateOfflineDynamicCode;
- (void)updateOfflineDynamicCodeByTimer;
- (void)updateShareCard:(id)arg1;
- (void)uploadCardPkgLocationReport;
- (void)uploadEnterBrandProfileKvReport;
- (void)uploadEnterCardDetailKvReport;
- (void)uploadOpenCellList0ItemViewReport:(id)arg1;
- (void)uploadOpenDetailViewReport;
- (void)uploadOpenOperationViewReport;
- (void)userDidTakeScreenshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

