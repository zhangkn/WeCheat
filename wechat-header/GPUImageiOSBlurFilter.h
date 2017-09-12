//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter, GPUImageLuminanceRangeFilter, GPUImageSaturationFilter;

@interface GPUImageiOSBlurFilter : GPUImageFilterGroup
{
    GPUImageSaturationFilter *saturationFilter;
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageLuminanceRangeFilter *luminanceRangeFilter;
    double blurRadiusInPixels;
    double saturation;
    double _downsampling;
}

- (void).cxx_destruct;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
@property(nonatomic) double downsampling; // @synthesize downsampling=_downsampling;
- (id)init;
@property(nonatomic) double rangeReductionFactor;
@property(nonatomic) double saturation; // @synthesize saturation;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;

@end

