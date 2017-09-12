//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "IMMAssetICloudExt-Protocol.h"
#import "MMAssetPickerBrowserViewProtocol-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMAssetInfo, MMAssetPickerBrowserStateInfo, MMImageScrollViewHelper, MMWebImageView, NSArray, NSData, NSString, UIImageView, UILabel, UIView;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@interface MMGifPreviewBrowserView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, IMMAssetICloudExt, MMAssetPickerBrowserViewProtocol>
{
    MMWebImageView *m_gifView;
    UIView *m_gifViewBk;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    struct CGSize m_originImageSize;
    MMImageScrollViewHelper *m_scrollViewHelper;
    NSData *m_originData;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void)dealloc;
- (id)getScrollView;
- (void)initGifView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadAsset;
- (void)loadThumbImage:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onFinishLoadImage:(id)arg1 imageData:(id)arg2;
- (void)onSingleTap:(id)arg1;
@property(readonly, nonatomic) NSData *originData; // @synthesize originData=m_originData;
- (void)scrollViewDidZoom:(id)arg1;
@property(nonatomic) struct CGRect frame;
- (void)showIcloudViewWithText:(id)arg1 isLoading:(_Bool)arg2;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
- (void)updateGifViewFrameWithOriginSize:(struct CGSize)arg1;
- (_Bool)updateGifViewWithData:(id)arg1 originSize:(struct CGSize)arg2;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

