//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMapView;

@interface QAnnotationFloor : UIView
{
    QMapView *_mapView;
}

- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAllAnnotationViews;
- (void)updateForAnnotationView:(id)arg1;

@end

