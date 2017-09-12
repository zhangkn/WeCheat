//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, MMUIViewController, NSAttributedString, NSMutableArray, NSString, UIView, WNParagraphInfo;

@protocol WNParaCellViewDelegate <NSObject>

@optional
- (void)OnObjectCellAddTextLeft:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2 newText:(NSAttributedString *)arg3;
- (void)OnObjectCellAddTextRight:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2 newText:(NSAttributedString *)arg3;
- (void)OnObjectCellDelTextLeft:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)OnObjectCellDelTextRight:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (_Bool)canEdit;
- (NSMutableArray *)getDataArray;
- (FavoritesItem *)getFavItem;
- (NSString *)getPlayingObjectId;
- (MMUIViewController *)getViewController;
- (_Bool)ifTextLengthExceedLimit:(long long)arg1;
- (_Bool)isEditing;
- (void)onCellViewResighFirstResponser;
- (void)onCheckPlayVoice:(WNParagraphInfo *)arg1;
- (void)onMainTextKeyboardBack:(WNParagraphInfo *)arg1 inCellView:(UIView *)arg2;
- (void)onSelectAll;
- (void)onSelectionChanged:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
- (void)onStopRecordVoice:(WNParagraphInfo *)arg1;
- (void)onTextChanged:(WNParagraphInfo *)arg1 newText:(NSAttributedString *)arg2;
- (void)onTextTooLongNeedCut:(WNParagraphInfo *)arg1 inRange:(struct _NSRange)arg2 withText:(NSString *)arg3;
- (void)onTextViewPaste;
- (void)textCellDidBeginEditing:(UIView *)arg1;
- (void)textCellShouldBeginEditing:(UIView *)arg1;
- (void)textCellShouldEndEditing:(UIView *)arg1;
- (void)updateEditingCellInfo:(UIView *)arg1;
@end

