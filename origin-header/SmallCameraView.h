//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"

@class MoveWithTouchAlgorithm, NSString;
@protocol SmallCameraViewDelegate;

@interface SmallCameraView : UIView <MoveWithTouchAlgorithmDelegate>
{
    _Bool _hasMoved;
    MoveWithTouchAlgorithm *m_moveAlgorithm;
    id <SmallCameraViewDelegate> delegate;
}

- (void).cxx_destruct;
- (void)adsorbToWindow;
- (void)dealloc;
@property(nonatomic) id <SmallCameraViewDelegate> delegate; // @synthesize delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm; // @synthesize m_moveAlgorithm;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

