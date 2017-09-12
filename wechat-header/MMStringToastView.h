//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, NSString, UIImageView, UILabel;

@interface MMStringToastView : MMUIView
{
    _Bool m_animationDone;
    NSString *m_currentString;
    NSMutableArray *m_remainStringList;
    UILabel *m_currentLabel;
    UILabel *m_nextLabel;
    UIImageView *m_backgroundImageView;
    NSMutableArray *m_remainTimeList;
}

- (void).cxx_destruct;
- (void)addScrollingString:(id)arg1;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)clearCurrentString;
- (void)dealloc;
- (struct CGRect)getStringRect:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool m_animationDone; // @synthesize m_animationDone;
@property(retain, nonatomic) UIImageView *m_backgroundImageView; // @synthesize m_backgroundImageView;
@property(retain, nonatomic) UILabel *m_currentLabel; // @synthesize m_currentLabel;
@property(retain, nonatomic) NSString *m_currentString; // @synthesize m_currentString;
@property(retain, nonatomic) UILabel *m_nextLabel; // @synthesize m_nextLabel;
@property(retain, nonatomic) NSMutableArray *m_remainStringList; // @synthesize m_remainStringList;
@property(retain, nonatomic) NSMutableArray *m_remainTimeList; // @synthesize m_remainTimeList;
- (void)timerFunction;

@end

