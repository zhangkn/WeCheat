//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterFriendRankCellDelegate-Protocol.h"
#import "GameCenterIntroDescCellDelegate-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "MMPictureGalleryDelegate-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "ShareMessageConfirmLogicHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class GameCenterDetailInfo, GameCenterPhotoViewController, MMPictureGallery, MMTableView, NSMutableArray, NSString, ShareMessageConfirmLogicHelper, UIButton;

@interface GameCenterNewDetailViewController : MMUIViewController <WCCommitViewResultDelegate, SessionSelectControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, MMPictureGalleryDelegate, IGameCenterExt, GameCenterIntroDescCellDelegate, WCActionSheetDelegate, ShareMessageConfirmLogicHelperDelegate, GameCenterFriendRankCellDelegate>
{
    UIButton *bottomButton;
    NSMutableArray *_tableDatas;
    MMTableView *_tableView;
    MMPictureGallery *_pictureGallery;
    _Bool _isFolded;
    _Bool _useFriendFeedFromHomepage;
    NSString *_noticeID;
    GameCenterPhotoViewController *_photoViewController;
    int _sourceScene;
    ShareMessageConfirmLogicHelper *m_shareToFriendHelper;
    GameCenterDetailInfo *_detailInfo;
}

- (void).cxx_destruct;
- (void)OnBackTo3rdApp:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (id)accessoryViewForGalleryImageAtIndex:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)createBottomView;
- (id)createHeaderView;
- (void)dealloc;
@property(retain, nonatomic) GameCenterDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void)didSelectAtIndex:(unsigned long long)arg1;
- (id)genShareFriendMessage:(id)arg1;
- (id)genUploadTask;
- (double)heightForFriendPlayInfoCell:(id)arg1;
- (void)initData;
- (void)initView;
- (id)initWithDetailInfo:(id)arg1 sourceScene:(int)arg2;
- (id)loadCacheData;
- (void)loadTableData;
@property(retain, nonatomic) ShareMessageConfirmLogicHelper *m_shareToFriendHelper; // @synthesize m_shareToFriendHelper;
- (void)makeCell:(id)arg1 introPics:(id)arg2;
- (id)makeCellByFriendFeeds:(id)arg1;
- (id)makeCellByFriendPlayList:(id)arg1;
- (id)makeCellByGiftEntranceItem:(id)arg1;
- (id)makeCellByGiftItem:(id)arg1;
- (id)makeCellByGroupItem:(id)arg1;
- (id)makeCellByGuideItem:(id)arg1;
- (id)makeCellByIntroDesc:(id)arg1;
- (id)makeCellByRankInfo:(id)arg1;
- (id)makeGiftEntranceMoreCell:(id)arg1;
- (id)makeMoreCellByTitle:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onEnterGame;
- (void)onGetGameDetailInfo:(id)arg1 errCode:(long long)arg2;
- (void)onIntroDescFoldingStateChanged:(_Bool)arg1;
- (void)onRankCell:(id)arg1 upButtonClickedWithRankInfo:(id)arg2;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 extraInfo:(id)arg4 error:(long long)arg5;
- (void)onUpFriend:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)openWebview:(id)arg1;
- (void)resetSplitLine:(id)arg1 atIndex:(id)arg2 withLineType:(unsigned long long)arg3;
- (void)saveCacheData;
- (void)shareToFriend;
- (void)shareToTimeline;
- (void)showMoreMenu;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateBottomButton;
- (void)updateRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

