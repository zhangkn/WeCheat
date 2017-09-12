//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSwirlFilter : GPUImageFilter
{
    int radiusUniform;
    int centerUniform;
    int angleUniform;
    double _radius;
    double _angle;
    struct CGPoint _center;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)init;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;

@end
