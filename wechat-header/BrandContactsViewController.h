//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "MMTableViewIndexViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BrandServiceHeadImageProvider, ContactsDataLogic, MMLoadingView, MMSearchBar, MMTableView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface BrandContactsViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate, MMSearchBarDelegate, IContactMgrExt, WCActionSheetDelegate, IWCDeviceBrandMgrExt, MMTableViewIndexViewDelegate>
{
    MMTableView *_tableView;
    MMSearchBar *_searchBar;
    UILabel *m_countLabel;
    BrandServiceHeadImageProvider *_headImageCache;
    ContactsDataLogic *_contactsDataLogic;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    unsigned long long _contactCount;
    NSMutableDictionary *_oldSubscribeStatusDict;
    unsigned int _searchScene;
    MMLoadingView *_loadingView;
    NSIndexPath *_unfocusIndexPath;
}

- (void).cxx_destruct;
- (void)OnVoiceSearchButtonDown;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelFocus;
- (void)cancelFoucsAtIndex:(id)arg1;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (id)contactAtIndex:(id)arg1;
- (void)dealloc;
- (void)delayFinishSearch;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)displayControllerSetActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)doSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (_Bool)hidesBottomBarWhenPushed;
- (id)init;
- (void)initCountLabel:(id)arg1;
- (void)initData;
- (void)initLoadingView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)loadHeaderViewSelection;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)makeCell:(id)arg1 ForSearchContact:(id)arg2;
- (void)makeCell:(id)arg1 section:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onContactsDataChange;
- (void)onDeleteContact:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onShowSearchBrandView:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)openContactInfoView:(int)arg1;
- (void)resetTableViewOffset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSIndexPath *unfocusIndexPath; // @synthesize unfocusIndexPath=_unfocusIndexPath;
- (_Bool)shouldShowTabbarAfterSearchBarBecomeUnActive;
- (void)sort;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

