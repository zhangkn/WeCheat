//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView, WCDataItem;
@protocol ILinkEventExt;

@interface WCSnsCommentDetailRewardView : MMUIView
{
    UIView *_rewardTipView;
    UIView *m_lineView;
    UIView *m_rewardContainer;
    id <ILinkEventExt> m_urlDelegate;
    WCDataItem *_dataItem;
}

+ (double)getCommentViewLeftMarginCurOri;
+ (id)getNickNameForDataItem:(id)arg1;
+ (double)heightForRewardView:(id)arg1;
- (void).cxx_destruct;
- (void)initLineView;
- (void)initRewardContainer;
- (void)initRewardTipView;
- (void)initView;
- (id)initWithUrlDelegate:(id)arg1;
- (_Bool)isShowRewardContainer;
- (void)rewardDetailViewTapped;
- (void)setDataItem:(id)arg1;

@end

