//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "CameraScannerStatusExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMScrollView, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol CameraScanUIDelegate;

@interface CameraScanViewController : MMUIViewController <MMImagePickerManagerDelegate, UIAlertViewDelegate, IVOIPUILogicMgrExt, CameraScannerStatusExt, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    int _cameraScanType;
    int _cameraScanCodeType;
    _Bool _hideBottomBar;
    _Bool _hideIntroButton;
    NSString *_desc;
    id <CameraScanUIDelegate> _delegate;
    MMScrollView *_bottomScrollView;
    NSMutableDictionary *_logicDict;
    NSMutableDictionary *_buttonDict;
    UIView *_overlayLeftView;
    UIView *_overlayRightView;
    UIView *_overlayTopView;
    UIView *_overlayBottomView;
    UIView *_alertBgView;
    UIImageView *_scanLineImgView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIImageView *_leftTopCropImageView;
    UIImageView *_rightTopCropImageView;
    UIImageView *_leftBottomCropImageView;
    UIImageView *_rightBottomCropImageView;
    UILabel *_infoLabel;
    UILabel *_descLabel;
    UILabel *_alertLabel;
    UILabel *_smallAlertLabel;
    UIButton *_introButton;
    UIButton *_torchButton;
    UILabel *_torchLabel;
    unsigned int _beepSound;
    _Bool _navibarTranslucent;
    _Bool _isManualCameraZoom;
    _Bool _hasInit;
    _Bool _animating;
    _Bool _shouldDoScanAnimationOnShown;
    _Bool _onlyFromCamera;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addButtonWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(struct CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alignTop:(id)arg1;
@property(readonly, nonatomic) int cameraScanCodeType; // @synthesize cameraScanCodeType=_cameraScanCodeType;
@property(nonatomic) int cameraScanType; // @synthesize cameraScanType=_cameraScanType;
- (void)dealloc;
@property(nonatomic) __weak id <CameraScanUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)doHideTorchButton;
- (void)doScanAnimation;
- (void)drawCropAreaRect:(struct CGRect)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (id)getActiveLogicController;
- (float)getBottomBarHeight;
- (id)getButtonByTag:(int)arg1;
- (id)getButtonTitle:(int)arg1;
- (float)getContentHeight;
- (struct CGRect)getContentRect;
- (id)getFunctionTitle:(int)arg1;
- (id)getMainViewController;
- (float)getPreviewScale:(int)arg1;
- (id)getScanBookWording:(id)arg1;
- (id)getScanLogicController:(int)arg1;
- (double)getZoomFactor;
- (void)hideAlertWording;
@property(nonatomic) _Bool hideBottomBar; // @synthesize hideBottomBar=_hideBottomBar;
@property(nonatomic) _Bool hideIntroButton; // @synthesize hideIntroButton=_hideIntroButton;
- (void)hideIntroView;
- (id)init;
- (void)initGesture;
- (void)initMember;
- (void)initView;
- (id)initWithCameraScanType:(int)arg1 CodeType:(int)arg2 presentModal:(_Bool)arg3;
- (id)initWithCameraScanType:(int)arg1 presentModal:(_Bool)arg2;
- (void)onButtonDown:(id)arg1;
- (void)onDoubleTapGesture:(id)arg1;
- (void)onIKnowItBtnClick;
- (void)onIntroButtonClicked;
- (void)onLowLightStatusChanged:(_Bool)arg1;
- (void)onMoreAction:(id)arg1;
- (void)onPinchGesture:(id)arg1;
- (void)onPlaySound;
- (void)onPopFromStack;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (void)onQRCodeAction:(id)arg1;
- (void)onSetCameraZoomFactor:(double)arg1;
- (void)onShowAlertWording;
- (void)onShowScanHistory;
- (void)onSimCardNetTypeChange;
- (void)onStartLoading;
- (void)onStartScanAnimation;
- (void)onStopLoading;
- (void)onStopScanAnimation;
- (void)onTorchButtonClicked:(id)arg1;
- (void)onUpdateWording;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
@property(nonatomic) _Bool onlyFromCamera; // @synthesize onlyFromCamera=_onlyFromCamera;
- (void)openView:(int)arg1 Animated:(_Bool)arg2;
- (void)playsound;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)reportAfterExit;
- (void)scrollButtonToVisible:(int)arg1;
- (void)setNavigationBarTranslucent:(_Bool)arg1;
- (void)setScannerDelegate:(id)arg1 cameraScanType:(int)arg2;
- (void)showAlertWording:(id)arg1 Animated:(_Bool)arg2;
- (void)showImagePicker;
- (void)showTorchButton;
- (void)startLoadingDarkAnimated:(_Bool)arg1;
- (void)startScan;
- (void)startScanAnimation;
- (void)stopLoadingDark;
- (void)stopScan;
- (void)stopScanAnimation;
- (void)switchView:(int)arg1;
- (void)tapAtPoint:(id)arg1;
- (void)tryHideTorchButton;
- (void)updateAnimationStoped;
- (void)updateBottomBarInset;
- (void)updateIntroButton;
- (void)updateScanViewAnimated:(_Bool)arg1;
- (void)updateTorchButtonFrame;
- (void)updateWording;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

