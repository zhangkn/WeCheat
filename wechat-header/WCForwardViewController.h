//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "ContactsSelectorControllerDelegate-Protocol.h"
#import "IMMGrowTextViewExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "SelectorControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCGroupTagViewControllerDelegate-Protocol.h"
#import "WCTimelinePOIPickerViewControllerDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class ContactsSelectorController, EmoticonBoardView, MMGrowTextView, MMLoadingView, MMScrollView, MMTableViewInfo, MMTimer, NSArray, NSObject, NSString, RoundTableViewCell, UIButton, UIImageView, UILabel, UIView, WCDataItem, WCEditMemberPannel, WCInputController, WCLocationInfo, WCSelectorView, WCTimelinePOIPickerViewController;
@protocol WCCommitViewAnimationDelegate, WCCommitViewResultDelegate;

@interface WCForwardViewController : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, ContactsSelectorControllerDelegate, WCGroupTagViewControllerDelegate, UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, MMTableViewInfoDelegate, UIAlertViewDelegate, IMsgExt, WCFacadeExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    WCDataItem *_forwardDataItem;
    long long _iPostSource;
    NSString *_preSourceId;
    MMScrollView *_scrollView;
    MMGrowTextView *_textView;
    UIImageView *_textViewBkgView;
    UIView *_mediaViewBkgView;
    UIButton *_locationButton;
    RoundTableViewCell *_privacyCell;
    WCInputController *_inputController;
    _Bool _bHasInput;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    unsigned int _iInputSection;
    id <WCCommitViewAnimationDelegate> _delegate;
    WCDataItem *_cacheDateItem;
    MMLoadingView *_loadingView;
    MMTimer *_fireTimer;
    _Bool _bNeedAnimation;
    _Bool _bShowLocation;
    unsigned long long _singlePasteTextMaxLength;
    id <WCCommitViewResultDelegate> _resultDelegate;
    NSObject *_userData;
    MMTableViewInfo *_tableViewInfo;
    UIView *_contentView;
    WCLocationInfo *_poiInfo;
    _Bool _needRefresh;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    ContactsSelectorController *_contactsSelectorController;
    WCSelectorView *_withContactView;
    WCEditMemberPannel *_editMemberPannel;
    UILabel *_withYouLabel;
    UIImageView *_withYouLogo;
    EmoticonBoardView *m_emoticonBoardView;
    NSArray *_tmpSelectContacts;
}

- (void).cxx_destruct;
- (void)GroupTagViewSelectTempContacts:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)OnDone;
- (void)OnReturn;
- (void)addViewForMediaForIOS7;
- (void)adjustSubviewRects;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
@property(nonatomic) _Bool bNeedAnimation; // @synthesize bNeedAnimation=_bNeedAnimation;
@property(nonatomic) _Bool bShowLocation; // @synthesize bShowLocation=_bShowLocation;
- (void)becomeInput;
- (void)beginAnimationStepOne;
- (void)beginAnimationStepTwo;
- (void)commonInit;
- (void)createSubviews;
- (void)createSubviewsForIOS7;
- (void)dealloc;
@property(nonatomic) __weak id <WCCommitViewAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCommitText:(id)arg1;
- (id)getShowAddress;
- (id)getViewController;
- (void)hideInputController;
@property(nonatomic) long long iPostSource; // @synthesize iPostSource=_iPostSource;
- (void)initEmoticonView;
- (void)initInputController;
- (void)initInputToolView;
- (void)initView;
- (id)initWithDataItem:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)layoutSubviews;
- (void)layoutSubviewsForIOS7;
@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onLoadingShowOK:(id)arg1;
- (void)onLocationBtnClick;
- (void)onLocationCellClicked;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPrivacyCellClicked;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onWCPostPrivacyChanged;
- (void)onWithContactCellClicked;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) NSString *preSourceId; // @synthesize preSourceId=_preSourceId;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)resignInput;
@property(nonatomic) __weak id <WCCommitViewResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendToTimeLine;
@property(retain, nonatomic) NSArray *tmpSelectContacts; // @synthesize tmpSelectContacts=_tmpSelectContacts;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
- (_Bool)showAddView;
- (void)showLoadingView;
- (void)showPrivacyAlertView;
- (void)textViewTextDidChange;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)updateContentOffset;
- (void)updateContentOffsetForIOS7;
- (void)updateSelectorView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

