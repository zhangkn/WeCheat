//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "ILinkEventExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCCardDetailContentLogicDelegate-Protocol.h"
#import "WCCardDetailPageCodeCellViewDelegate-Protocol.h"
#import "WCShareCardMemberCustomImgHeaderDelegate-Protocol.h"

@class NSString, WCShareCardMemberHeaderCardImageView;
@protocol WCCardMemberCardContentDelegate;

@interface WCCardMemberCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardMemberCustomImgHeaderDelegate, WCCardDetailPageCodeCellViewDelegate, ILinkEventExt>
{
    _Bool _bIsShareCardMode;
    _Bool _bIsAcceptMemberCard;
    id <WCCardMemberCardContentDelegate> _delegte;
    WCShareCardMemberHeaderCardImageView *_memberCardImgView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsAcceptMemberCard; // @synthesize bIsAcceptMemberCard=_bIsAcceptMemberCard;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
- (double)calcOperationFieldCellHeight;
- (double)calcPayOrderCellHeight;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
@property(nonatomic) __weak id <WCCardMemberCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (double)getCommonCellHeight;
- (double)getTableViewCellSumHeight;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(_Bool)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (_Bool)isItemFromOutAppScene;
- (void)makeAcceptCardCell:(id)arg1;
- (void)makeCodeCell:(id)arg1;
- (void)makeGiftCardInfoCell:(id)arg1;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(double)arg1;
- (void)makeOperateCell:(id)arg1;
- (void)makePayOrderCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
@property(retain, nonatomic) WCShareCardMemberHeaderCardImageView *memberCardImgView; // @synthesize memberCardImgView=_memberCardImgView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onCodeViewFieldClick;
- (void)onFollowBtnClick:(id)arg1;
- (void)onGuidanceBtnClick:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onMemberCardAnnounceClicked:(id)arg1;
- (void)onMemberCardSecondaryField:(id)arg1;
- (void)onMemberCardViewApplyBtnClick;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onNearbyShopPhoneNumClick;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onOperationBtnClick:(id)arg1;
- (void)onReasonButtonClick;
- (void)refreshCode;
- (void)reloadContentData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

