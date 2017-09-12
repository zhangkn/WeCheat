//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGameBriefInfo, MMWebImageView, NSArray, UIButton, UILabel, UIView;
@protocol GameCenterNewFeedsCellDelegate;

@interface GameCenterNewFeedsCell : MMTableViewCell
{
    UIView *_gameBgView;
    UIView *_feedBgView;
    GameCenterGameBriefInfo *_gameInfo;
    NSArray *_feedItems;
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    UIButton *_downloadButton;
    UIView *_splitLine;
    UIView *_lowerSeperator;
    id <GameCenterNewFeedsCellDelegate> _delegate;
}

+ (id)genFriendViewByData:(id)arg1 withFeedList:(id)arg2;
+ (double)heightForCellWithGameInfo:(id)arg1 feedItems:(id)arg2;
+ (double)heightForEachView:(id)arg1 withFeedList:(id)arg2;
+ (double)widthForEachView:(id)arg1;
- (void).cxx_destruct;
- (void)addItems;
@property(nonatomic) __weak id <GameCenterNewFeedsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initGameSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutFeedContent;
- (void)layoutGameInfoContent;
- (void)layoutSubviews;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)reloadGameData;
- (void)setButtonTitle:(id)arg1;
- (void)updateWithGameInfo:(id)arg1 feedItems:(id)arg2;

@end

