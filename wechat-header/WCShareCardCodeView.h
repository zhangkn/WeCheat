//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTimer, MMUILabel, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDynamicCodeGenerator;
@protocol WCCardDataSource, WCShareCardCodeViewDelegate;

@interface WCShareCardCodeView : MMUIView
{
    NSString *_shareUserName;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    id <WCCardDataSource> _cardDataSource;
    MMTimer *brightTimer;
    double _oldBrightness;
    double _toBrightness;
    struct CGSize biggerSize;
    UIView *_animateView;
    UILabel *_codeLabel;
    UIScrollView *_maskView;
    MMUIView *_whiteBgView;
    struct CGRect fromStartRect;
    UIActivityIndicatorView *activityIndicator;
    UIView *statusBgView;
    UIImageView *fakeQRCodeImgView;
    MMUILabel *_logoNameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_showToWaiterTips;
    UIButton *_closeViewBtn;
    UIButton *_directPayBtn;
    UIButton *_notifyCheckBox;
    _Bool _bStatusBarBlack;
    unsigned long long _curStatus;
    _Bool _isLoading;
    MMTimer *_updateDynamicCodeTimer;
    id <WCShareCardCodeViewDelegate> m_delegate;
    NSString *_typeName;
    WCCardDynamicCodeGenerator *_dynamicCodeGenerator;
    NSString *_dynamicCode;
}

- (void).cxx_destruct;
- (void)closeCodeView;
- (void)dealloc;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(nonatomic) __weak WCCardDynamicCodeGenerator *dynamicCodeGenerator; // @synthesize dynamicCodeGenerator=_dynamicCodeGenerator;
- (id)getCodeViewWithCode:(id)arg1;
- (id)getCurrentBrandColor;
- (id)getLogoName;
- (void)graduallySetBrightness:(double)arg1;
- (void)initShadowView;
- (void)initView;
- (id)initWithCardSourceData:(id)arg1 andCodeStartRect:(struct CGRect)arg2 shareUserName:(id)arg3 isStatusBarBlack:(_Bool)arg4 dynamicCodeGenerator:(id)arg5;
- (_Bool)isMemberCard;
- (void)layoutSubviews;
- (void)loadDynamicCodeIfNeed;
@property(nonatomic) __weak id <WCShareCardCodeViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeCancelBtn;
- (void)makeCheckBoxView;
- (void)onClickNotifyCheckBoxBtn:(id)arg1;
- (void)payAndQrcodeDidClick;
- (void)recoverBrightness:(double)arg1;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void)setupMemberCardCodeView;
- (void)setupNewMemberCodeView;
- (void)setupOriginMemberCodeView;
- (void)showCodeViewWithAnimation;
- (void)showMarkedErrorView;
- (void)showMarkedView;
- (void)showTips:(id)arg1;
- (void)showWithAnimation;
- (void)startDynamicCodeUpdateTimer;
- (void)timerCheckUpdateBrightness;
- (void)updateCardDatasource:(id)arg1;
- (void)updateDynamicCode;
- (void)updateViewStatus:(unsigned long long)arg1;

@end

