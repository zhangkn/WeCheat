//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatBackgroundExt-Protocol.h"
#import "ChatBackgroundViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ChatBackgroundView, MMTableView, NSMutableArray, NSString;
@protocol MMChatBackgroundSettingViewControllerDelegate;

@interface MMChatBackgroundSettingViewController : MMUIViewController <ChatBackgroundExt, ChatBackgroundViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    long long m_columnCount;
    NSMutableArray *m_itemViews;
    NSString *m_username;
    NSMutableArray *m_allItems;
    _Bool isSettingChanged;
    ChatBackgroundView *currentSelectView;
    _Bool _bFromSetting;
    id <MMChatBackgroundSettingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnCancel;
- (void)OnDone;
- (void)addItemView:(id)arg1;
@property(nonatomic) _Bool bFromSetting; // @synthesize bFromSetting=_bFromSetting;
- (void)dealloc;
@property(nonatomic) __weak id <MMChatBackgroundSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAllItems;
- (long long)getRowCount;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_allItems; // @synthesize m_allItems;
@property(retain, nonatomic) NSMutableArray *m_itemViews; // @synthesize m_itemViews;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onChatBackgroundDownloadFinishedForUser:(id)arg1 withCID:(id)arg2;
- (void)onChatBackgroundViewClick:(id)arg1;
- (void)onListStatusChange;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
