//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt-Protocol.h"
#import "InviteFriendLogicDelegate-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, MMTimer, MMUIImageView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UISearchDisplayController, UIView, WCOActivityMsgInfo, WCOutInviteFriendLogic, WCOutPhoneContact;

@interface WCOutContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCActionSheetDelegate, UISearchBarDelegate, UISearchDisplayDelegate, InviteFriendLogicDelegate, MMImageLoaderObserver>
{
    MMTableView *m_tableView;
    MMUIView *m_noDataView;
    UIImageView *redDotView;
    UIButton *m_callBtn;
    NSMutableDictionary *m_allContactsDic;
    NSMutableArray *m_sectionKeyArray;
    NSMutableDictionary *m_nonAddressBookContactsDic;
    NSMutableDictionary *m_contactToArchiveDic;
    NSMutableArray *m_lastCallArchives;
    double m_lastScrollViewOffset;
    MMTimer *m_hideIndexTitleTimer;
    long long m_lastScrollTime;
    NSString *m_curLanguage;
    WCOutPhoneContact *m_selectedContactInActionSheet;
    NSArray *m_phoneArrayShowInActionSheet;
    _Bool _bShowIndexTitle;
    _Bool _isSearching;
    NSArray *_fliterContacts;
    UISearchDisplayController *_m_searchDisplayController;
    NSString *_searchText;
    WCOutInviteFriendLogic *_inviteFriendLogic;
    MMUILabel *_balanceLabel;
    MMUILabel *_packageLabel;
    MMUILabel *_discountLabel;
    UIButton *_callbtn;
    UIView *_activityView;
    MMUIImageView *_activityImgView;
    WCOActivityMsgInfo *_activityInfo;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)KeypadAndContactCellAtIndexpath:(id)arg1;
- (void)OnOpenAccount;
- (id)accountCellAtIndexpath:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) MMUIImageView *activityImgView; // @synthesize activityImgView=_activityImgView;
@property(retain, nonatomic) WCOActivityMsgInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
- (void)addNewCall:(id)arg1;
- (id)allContacts;
@property(nonatomic) _Bool bShowIndexTitle; // @synthesize bShowIndexTitle=_bShowIndexTitle;
@property(retain, nonatomic) MMUILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIButton *callbtn; // @synthesize callbtn=_callbtn;
- (void)clearSelectStauts;
- (void)configAccuntSection;
- (void)configActivityView;
- (void)configCallBtn;
- (void)configData;
- (void)configFooterViewWithCount:(unsigned long long)arg1;
- (void)configModel;
- (void)configNoDataHintsLabel;
- (void)configRecentCallContacts;
- (void)configRightBarButtonItem;
- (void)configSearchDisplayController;
- (void)configTableView;
- (void)configView;
- (void)configureBackBarButtomItem;
- (id)contactCellAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)deleteRecentCallItemAtIndex:(long long)arg1;
- (void)didReceiveCouponResponse;
@property(retain, nonatomic) MMUILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) NSArray *fliterContacts; // @synthesize fliterContacts=_fliterContacts;
- (double)getAccountCellHeight;
- (id)getActivityTips;
- (id)getPackageTitle;
- (id)getbalanceLabelText;
- (void)hideIndexTitle;
- (id)init;
- (void)initDeepLinkConfig;
@property(retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic; // @synthesize inviteFriendLogic=_inviteFriendLogic;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
- (id)lastCallCellAtRow:(unsigned long long)arg1;
@property(retain, nonatomic) UISearchDisplayController *m_searchDisplayController; // @synthesize m_searchDisplayController=_m_searchDisplayController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackClick:(id)arg1;
- (void)onCellBtnClick:(id)arg1;
- (void)onClickBottomBtn;
- (void)onTryBtnClick:(id)arg1;
@property(retain, nonatomic) MMUILabel *packageLabel; // @synthesize packageLabel=_packageLabel;
- (void)refreshbalanceLabel;
- (void)rightCallBtnClicked:(id)arg1 event:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)search:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)showAccount;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(_Bool)arg2;
- (void)showWellcomeTips;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateNewxmlInfo;
- (void)updateWCOutContacts:(id)arg1;
- (void)updateWCOutContactsInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

