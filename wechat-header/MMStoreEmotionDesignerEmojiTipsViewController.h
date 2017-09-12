//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"

@class EmojiInfo, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView;
@protocol EmotionDesignerEmojiTipsViewControllerDelegate;

@interface MMStoreEmotionDesignerEmojiTipsViewController : MMWindowViewController <IStoreEmotionSingleDownloadMgrExt>
{
    EmojiInfo *m_emojiInfo;
    UIButton *m_backgroundBtn;
    UIView *m_contentView;
    UIActivityIndicatorView *m_activityIndicatorView;
    UIButton *m_saveBtn;
    UIButton *m_sendBtn;
    UIImageView *m_imageView;
    id <EmotionDesignerEmojiTipsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)configCancelBtn;
- (void)configIndicator;
- (void)configTwoOpBtns;
- (void)dealloc;
@property(nonatomic) __weak id <EmotionDesignerEmojiTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideWithFade;
- (void)initView;
- (id)initWithEmojiInfo:(id)arg1;
- (void)onLongPressed:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)saveEmotion;
- (void)sendEmotion;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

