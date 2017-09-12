//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "NSTextStorageDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol WNParaTextViewDelegate;

@interface WNParaTextView : UITextView <NSTextStorageDelegate>
{
    NSMutableArray *_urlArray;
    UIView *_coverView;
    _Bool _bTouched;
    NSString *_touchUrl;
    id <WNParaTextViewDelegate> wnPara_delegate;
}

+ (double)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)calculateTouchAreaUrl:(id)arg1;
- (_Bool)canBecameFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)handleLinkClick;
- (_Bool)handleTouchLinkArea:(struct CGPoint)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)jumpWebView;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setAttributedText:(id)arg1;
@property(nonatomic) __weak id <WNParaTextViewDelegate> wnPara_delegate; // @synthesize wnPara_delegate;
- (void)showKeyboardAtLocation:(long long)arg1;
- (void)showKeyboardWithSelectionRange:(struct _NSRange)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

