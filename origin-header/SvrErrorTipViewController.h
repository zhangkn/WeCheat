//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class InteractionLabel, NSString, UIButton, UIImageView, UILabel;
@protocol SvrErrorTipViewControllerDelegate;

@interface SvrErrorTipViewController : MMWindowViewController
{
    UIImageView *_deviceView;
    UILabel *_tipsLabel;
    InteractionLabel *_descriptionLabel;
    UIButton *_cancelBtn;
    NSString *_errTip;
    id <SvrErrorTipViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <SvrErrorTipViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideView;
- (id)init;
- (void)onCancelBtnClicked;
- (void)onDetailBtnClicked;
- (void)onIKnowClicked;
- (void)setupCancelBtn;
- (void)setupInfoView;
- (void)setupLineView;
- (void)updateErrTip:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

