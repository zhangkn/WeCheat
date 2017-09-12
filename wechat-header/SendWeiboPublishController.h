//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMFacebookMgrExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMAnimationTipView, MMLoadingView, MMScrollView, MMTableView, NSMutableArray, NSString, UIImageView, UITextView;

@interface SendWeiboPublishController : MMUIViewController <UIAlertViewDelegate, UITextViewDelegate, MessageObserverDelegate, scrollViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, IMMFacebookMgrExt>
{
    MMLoadingView *m_loadingView;
    MMAnimationTipView *m_tipView;
    UITextView *m_descriptionView;
    MMScrollView *m_scrollView;
    UIImageView *m_textBkgImgView;
    struct stWeixinEntryRow *m_weixinEntry;
    MMTableView *m_tableView;
    NSMutableArray *m_arrAddShareObjects;
}

- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)clickSend:(id)arg1;
- (void)dealloc;
- (void)didFinishSavingImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)done:(id)arg1;
- (id)getPlaceHolderString;
- (id)init;
- (void)initData;
- (void)initLoadingView;
- (void)initTipView;
- (void)initView;
@property(nonatomic) struct stWeixinEntryRow *m_weixinEntry; // @synthesize m_weixinEntry;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddShareButtonClicked:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)onValueChanged:(id)arg1;
- (void)popToTop;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendFail;
- (void)sendOK;
- (void)showBindView;
- (void)startLoading;
- (void)stopLoading;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)updateSendButtonEnabled;
- (void)updateTextViewFrame:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

