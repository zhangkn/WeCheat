//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IDownloadImageExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCForceTouchPopProtocol-Protocol.h"

@class CMessageWrap, ImageMessageCellView, NSArray, NSString, UIImageView, UIView, WCImageView;

@interface PeekImageViewController : UIViewController <WCFacadeExt, IDownloadImageExt, IMsgExt, WCForceTouchPopProtocol>
{
    CMessageWrap *_msgWrap;
    UIViewController *previewFromController;
    UIView *previewSourceView;
    UIViewController *_fromViewController;
    NSArray *_previewActions;
    UIImageView *_imageView;
    WCImageView *_wcImageView;
    ImageMessageCellView *_imgCellView;
}

- (void).cxx_destruct;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)canPop;
- (void)commitViewController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak ImageMessageCellView *imgCellView; // @synthesize imgCellView=_imgCellView;
- (id)initWithImageCellView:(id)arg1 fromController:(id)arg2;
- (id)initWithWCImageView:(id)arg1 fromController:(id)arg2;
- (void)loadView;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (id)previewActionItems;
@property(retain, nonatomic) NSArray *previewActions; // @synthesize previewActions=_previewActions;
@property(nonatomic) __weak UIViewController *previewFromController; // @synthesize previewFromController;
@property(nonatomic) __weak UIView *previewSourceView; // @synthesize previewSourceView;
- (void)reloadImage;
@property(nonatomic) __weak WCImageView *wcImageView; // @synthesize wcImageView=_wcImageView;
- (void)startDownloadImg:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

