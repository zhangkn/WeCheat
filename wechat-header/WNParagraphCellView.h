//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"
#import "WNParaObjectViewDelegate-Protocol.h"
#import "WNParaTextViewDelegate-Protocol.h"

@class NSString, WNParaObjectBaseView, WNParaTextView, WNParagraphInfo;
@protocol WNParaCellViewDelegate;

@interface WNParagraphCellView : UIView <UITextViewDelegate, WNParaObjectViewDelegate, WNParaTextViewDelegate>
{
    _Bool m_bIsLongPressHandled;
    _Bool m_bIsLongPressCanceled;
    _Bool m_touchEnded;
    WNParaObjectBaseView *_objectView;
    WNParaTextView *_leftTextView;
    WNParaTextView *_rightTextView;
    WNParaTextView *_mainTextView;
    UIView *_selectedToRemoveView;
    UIView *_selectedAllView;
    _Bool bMannalSetStyle;
    double m_textHeight;
    WNParagraphInfo *paraInfo;
    id <WNParaCellViewDelegate> delegate;
}

- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)buildLeftTextView;
- (void)buildObjectTextView;
- (void)buildObjectView;
- (void)buildRightTextView;
- (void)changeMainTextViewToRightTextView;
- (void)changeToOtherObject:(id)arg1;
- (void)changeToTextCellUsingLeftTextView:(_Bool)arg1;
- (void)changeToTextCellWithAttrText:(id)arg1 useLeftTextView:(_Bool)arg2;
- (void)configMainTextView;
@property(nonatomic) __weak id <WNParaCellViewDelegate> delegate; // @synthesize delegate;
- (id)getDataArray;
- (id)getFavItem;
- (id)getPlayingObjectId;
- (id)getViewController;
- (id)getWNTextView:(struct CGRect)arg1;
- (void)hideKeyboard;
- (_Bool)isTouchInLeftTextView:(id)arg1;
- (_Bool)isTouchInObjectView:(id)arg1;
- (_Bool)isTouchInRightTextView:(id)arg1;
- (_Bool)isTouchInView:(id)arg1;
- (void)layoutView;
- (void)onCheckPlayVoice:(id)arg1;
- (void)onObjectHeightChanged;
- (void)onSelectAll;
- (void)onSelectText:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onStopRecordVoice:(id)arg1;
- (void)onTextViewHeightChange:(double)arg1;
- (void)onTextViewMenuPaste;
- (void)onTouchBegin;
- (void)onTouchDownInLeftText;
- (void)onTouchDownInObject;
- (void)onTouchDownInRightText;
- (void)onTouchEnd;
@property(retain, nonatomic) WNParagraphInfo *paraInfo; // @synthesize paraInfo;
- (void)resizeLeftTextView;
- (void)resizeRightTextView;
- (void)scrollToCursorForTextView:(id)arg1;
- (void)scrollToVisibleArea;
- (struct _NSRange)selectedRange;
- (void)setContent:(id)arg1;
- (void)setContent:(id)arg1 withSelectRange:(struct _NSRange)arg2;
- (void)showKeyboard;
- (void)showKeyboardWithSelectionRange:(struct _NSRange)arg1;
- (id)stringAfterCursor;
- (id)stringBeforeCursor;
- (id)tableView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewHandleLink:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updataTableViewHeight;
- (void)updateAllSelectedView;
- (void)updateRemoveSelectedView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

