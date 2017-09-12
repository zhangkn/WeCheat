//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"

@class EmoticonStoreItem, EmotionProgressView, MMWebImageView, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol MMEmotionChartsCellDelegate;

@interface MMEmotionChartsCell : MMUIView <IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt>
{
    long long _type;
    long long _scene;
    _Bool m_freeToDownload;
    _Bool m_showBlackLine;
    NSString *m_storeSession;
    UIImageView *m_downloadedView;
    UIButton *m_button;
    UIActivityIndicatorView *m_activityIndicatorView;
    EmoticonStoreItem *m_storeItem;
    EmotionProgressView *m_progressView;
    MMWebImageView *m_tagImageView;
    MMWebImageView *m_iconImageView;
    UILabel *m_nameLabel;
    UILabel *m_inroduceLabel;
    id <MMEmotionChartsCellDelegate> m_delegate;
    UIButton *m_downloadButton;
    double m_cellHeight;
    UIButton *_m_downloadedButton;
}

- (void).cxx_destruct;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)checkEmoticonBuyRet:(int)arg1;
- (void)dealloc;
- (void)initStoreSession:(id)arg1 StoreItem:(id)arg2 ShouldShowBlackLine:(_Bool)arg3 CellHeight:(double)arg4;
- (void)layoutSubviews;
- (void)loadIconImageView;
- (void)loadIntroduceLabel;
- (void)loadNameLabel;
- (void)loadSubView;
- (void)loadTagImageView;
@property(retain, nonatomic) UIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
@property(retain, nonatomic) UIButton *m_button; // @synthesize m_button;
@property(nonatomic) double m_cellHeight; // @synthesize m_cellHeight;
@property(nonatomic) __weak id <MMEmotionChartsCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIButton *m_downloadButton; // @synthesize m_downloadButton;
@property(retain, nonatomic) UIButton *m_downloadedButton; // @synthesize m_downloadedButton=_m_downloadedButton;
@property(retain, nonatomic) UIImageView *m_downloadedView; // @synthesize m_downloadedView;
@property(nonatomic) _Bool m_freeToDownload; // @synthesize m_freeToDownload;
@property(retain, nonatomic) MMWebImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(retain, nonatomic) UILabel *m_inroduceLabel; // @synthesize m_inroduceLabel;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) EmotionProgressView *m_progressView; // @synthesize m_progressView;
@property(nonatomic) _Bool m_showBlackLine; // @synthesize m_showBlackLine;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
@property(retain, nonatomic) NSString *m_storeSession; // @synthesize m_storeSession;
@property(retain, nonatomic) MMWebImageView *m_tagImageView; // @synthesize m_tagImageView;
- (void)onClickButton;
- (void)onClickDownloadButton;
- (void)onState:(int)arg1;
- (void)setScene:(long long)arg1 andType:(long long)arg2;

@end

