//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMAssetPickerControllerExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"

@class MMAssetInfo, MMAssetPickerController, MMAssetSelectCheckButton, NSString, UIImageView, UILabel, UIView;
@protocol MMImagePickerControlCenter;

@interface MMAssetView : MMUIView <MMAssetPickerControllerExt, UIAlertViewDelegate, WCForceTouchPreviewProtocol>
{
    _Bool m_isSelected;
    _Bool m_isPreviewStyle;
    UIView *m_disabledMaskView;
    UIView *m_tagBackgroundView;
    UILabel *m_lengthLabel;
    UIView *m_videoLogoView;
    UILabel *m_gifLogoView;
    UIView *m_editImageView;
    MMAssetSelectCheckButton *m_selectCheckButton;
    _Bool _enabled;
    MMAssetInfo *_assetInfo;
    id <MMImagePickerControlCenter> _controlCenter;
    MMAssetPickerController *_parent;
    UIImageView *_m_assetImageView;
}

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (_Bool)canPeek;
- (void)changeToSmallPreviewStyle;
- (_Bool)checkThumbImage;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
- (void)dealloc;
- (void)doSelect;
- (void)doSelectWithStateInfo:(id)arg1;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
@property(retain, nonatomic) UIImageView *m_assetImageView; // @synthesize m_assetImageView=_m_assetImageView;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerFinishEditAssetInfo:(id)arg1;
@property(nonatomic) __weak MMAssetPickerController *parent; // @synthesize parent=_parent;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)showEditedLogoView;
- (void)showGifLogoView;
- (void)showTagBGView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)tagAseetToPreview;
- (double)tagLogoLBMargin;
- (id)timeStringBySeconds:(double)arg1;
- (void)toggleSelection;
- (void)tryToSelectAsset;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2;
- (void)updateAssetInfo;
- (void)updateEnabledState;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

