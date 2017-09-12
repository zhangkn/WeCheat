//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, WCCardChooseInfo;
@protocol WCCardChooseItemViewDelegate;

@interface WCCardChooseItemView : MMUIView
{
    WCCardChooseInfo *_chooseInfo;
    _Bool _select;
    UIImageView *_checkBoxImgView;
    id <WCCardChooseItemViewDelegate> _delegate;
}

+ (double)heightForChooseItemView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) id <WCCardChooseItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genCardBgView;
- (void)genInvoiceView;
- (id)genLogoView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 cardChooseInfo:(id)arg2 delegate:(id)arg3;
- (void)onClickCell;
- (void)updateCellSelectStatus:(_Bool)arg1;

@end

