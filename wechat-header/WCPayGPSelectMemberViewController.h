//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTableView, MMUIView, NSArray, NSMutableArray, NSString, UICollectionView, UIImageView, UITextField;
@protocol WCPayGPSelectMemberControllerDelegate;

@interface WCPayGPSelectMemberViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _bIsAllSelect;
    _Bool _bIsSearching;
    unsigned int _maxSelectMember;
    id <WCPayGPSelectMemberControllerDelegate> _delegate;
    NSArray *_chatroomMemberContactArray;
    NSMutableArray *_selectdContacts;
    NSMutableArray *_resultSelectedContacts;
    MMTableView *_tableView;
    MMUIView *_toolBarView;
    UIImageView *_checkMarkImgView;
    MMUIView *_topBarView;
    UIImageView *_searchIconImgView;
    UITextField *_searchTextField;
    UICollectionView *_collectionView;
    NSArray *_searchResultContacts;
}

- (void).cxx_destruct;
- (void)addAllContactExceptSelfIfNeed;
@property(nonatomic) _Bool bIsAllSelect; // @synthesize bIsAllSelect=_bIsAllSelect;
@property(nonatomic) _Bool bIsSearching; // @synthesize bIsSearching=_bIsSearching;
- (void)cancelSaveSelectedMember;
@property(retain, nonatomic) NSArray *chatroomMemberContactArray; // @synthesize chatroomMemberContactArray=_chatroomMemberContactArray;
- (void)checkConfirmBarbuttonStatus;
- (_Bool)checkIfSelectContactMoreThanMax;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
- (void)checkSelectAllToolBarStatus;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)confirmToLaunchWithoutSelf;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayGPSelectMemberControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doChatRoomSearch:(id)arg1;
- (void)finishSelectMember;
- (id)getContactAtIndexPath:(id)arg1;
- (_Bool)isAllContactSelected;
- (_Bool)isContactExisted:(id)arg1;
- (_Bool)isContactSelected:(id)arg1;
@property(nonatomic) unsigned int maxSelectMember; // @synthesize maxSelectMember=_maxSelectMember;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadSelectMemberCollectionViewWithAnimated:(int)arg1;
- (void)removeSelectContact:(id)arg1;
@property(retain, nonatomic) NSMutableArray *resultSelectedContacts; // @synthesize resultSelectedContacts=_resultSelectedContacts;
- (void)saveSelectedMember;
- (void)scrollCollectionViewToLastOneWithAnimation:(id)arg1;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) NSArray *searchResultContacts; // @synthesize searchResultContacts=_searchResultContacts;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void)selectAllBtnPress:(id)arg1;
- (void)selectMemberVCCancel;
@property(retain, nonatomic) NSMutableArray *selectdContacts; // @synthesize selectdContacts=_selectdContacts;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
- (void)setupContentView;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupToolViewContent;
- (void)setupTopbarViewContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

