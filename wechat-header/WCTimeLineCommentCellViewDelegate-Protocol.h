//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WCDataItem, WCUserComment;

@protocol WCTimeLineCommentCellViewDelegate <NSObject>
- (void)onReloadCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onReplyComment:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2 ofTouchedView:(UIView *)arg3;
- (void)onRestoreCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
@end

