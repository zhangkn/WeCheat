//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, SightIconView, UIColor;
@protocol MMQRStrokeViewDelegate;

@interface MMQRStrokeView : UIView
{
    float m_targetFrame[8];
    float m_currFrame[8];
    float m_startFrame[8];
    MMTimer *m_timer;
    _Bool m_inAnim;
    int m_animState;
    int m_currenHiddenID;
    int m_currenTriggerID;
    int m_postTriggerID;
    SightIconView *m_trigProgress;
    id <MMQRStrokeViewDelegate> _delegate;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int animState; // @synthesize animState=m_animState;
- (void)dealloc;
@property(nonatomic) __weak id <MMQRStrokeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)hideFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepariForQRFrameGone;
- (void)printArray:(float *)arg1 title:(id)arg2;
- (void)setArray:(float *)arg1 withArray:(float *)arg2;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)setTargetFrame:(float *)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)trigProgress;
- (void)updateAnimation;

@end

