//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QOverlay;

@interface QOverlayView : UIView
{
    struct CGPoint _offset;
    struct CGAffineTransform _offsetTran;
    id <QOverlay> _overlay;
}

- (void).cxx_destruct;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (id)container;
- (struct CGAffineTransform)conversionAffineTransform;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)initWithOverlay:(id)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (CDStruct_02837cd9)mapRectForRect:(struct CGRect)arg1;
- (id)mapView;
@property(retain, nonatomic) id <QOverlay> overlay; // @synthesize overlay=_overlay;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (struct CGRect)rectForMapRect:(CDStruct_02837cd9)arg1;
- (void)updateOffsetAndDeviationTransform;
- (double)zoomScale;

@end

