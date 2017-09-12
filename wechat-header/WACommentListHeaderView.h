//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class CContact, MMUILabel, MMWebImageView, UIButton, UIView, WACommentScoreView, WACommentScoreViewModel;
@protocol WACommentListHeaderViewDelegate;

@interface WACommentListHeaderView : UITableViewHeaderFooterView
{
    unsigned int _score;
    id <WACommentListHeaderViewDelegate> _delegate;
    CContact *_waContact;
    WACommentScoreViewModel *_scoreViewModel;
    MMWebImageView *_headImgView;
    MMUILabel *_nicknameLabel;
    UIButton *_commentButton;
    WACommentScoreView *_scoreView;
    UIView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
- (void)configureWithWeAppContact:(id)arg1 score:(unsigned int)arg2;
@property(nonatomic) __weak id <WACommentListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
- (void)onClickPostComment:(id)arg1;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(retain, nonatomic) WACommentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) WACommentScoreViewModel *scoreViewModel; // @synthesize scoreViewModel=_scoreViewModel;
@property(retain, nonatomic) CContact *waContact; // @synthesize waContact=_waContact;

@end

