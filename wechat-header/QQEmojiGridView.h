//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, QQEmojiViewWithPreview;
@protocol QQEmojiGridViewDelegate;

@interface QQEmojiGridView : MMUIView
{
    NSMutableArray *m_emoticonWrapArray;
    long long m_column;
    long long m_row;
    NSMutableArray *m_emoticonViewArray;
    double m_itemWidth;
    double m_itemHeight;
    double m_edgeTop;
    double m_edgeLeft;
    double m_intervalX;
    double m_intervalY;
    QQEmojiViewWithPreview *m_deleteButton;
    id <QQEmojiGridViewDelegate> m_delegate;
}

+ (unsigned long long)countPerPageForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)calculateLayout;
- (id)cellKey;
- (void)dealloc;
- (long long)getRealIndexFromPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long m_column; // @synthesize m_column;
@property(nonatomic) __weak id <QQEmojiGridViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) double m_edgeLeft; // @synthesize m_edgeLeft;
@property(nonatomic) double m_edgeTop; // @synthesize m_edgeTop;
@property(retain, nonatomic) NSMutableArray *m_emoticonViewArray; // @synthesize m_emoticonViewArray;
@property(retain, nonatomic) NSMutableArray *m_emoticonWrapArray; // @synthesize m_emoticonWrapArray;
@property(nonatomic) double m_intervalX; // @synthesize m_intervalX;
@property(nonatomic) double m_intervalY; // @synthesize m_intervalY;
@property(nonatomic) double m_itemHeight; // @synthesize m_itemHeight;
@property(nonatomic) double m_itemWidth; // @synthesize m_itemWidth;
@property(nonatomic) long long m_row; // @synthesize m_row;
- (void)onLongPressOnEmoticon:(id)arg1;
- (void)reloadData;
- (void)setGridViewDelegate:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

