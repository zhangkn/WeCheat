//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol StoreEmotionGetDesignerEmojiListCgiDelegate <NSObject>

@optional
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithKeyword:(NSString *)arg1;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(NSArray *)arg2 DesignerEmojiList:(NSArray *)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(NSString *)arg1 Tags:(NSArray *)arg2 DesignerEmojiList:(NSArray *)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithTags:(NSArray *)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
@end

