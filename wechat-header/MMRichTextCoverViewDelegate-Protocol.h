//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol MMRichTextCoverViewDelegate <NSObject>
- (struct _NSRange)characterRangeAtIndex:(long long)arg1;
- (float)getLineHeight;
- (NSMutableArray *)getSelectRectsWithRange:(struct _NSRange)arg1;
- (NSString *)getStringWithRange:(struct _NSRange)arg1;
- (NSString *)getTextString;
- (float)getTextViewHeight;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1;
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
@end

