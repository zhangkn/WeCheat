//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImage3x3TextureSamplingFilter.h"

@interface GPUImageToonFilter : GPUImage3x3TextureSamplingFilter
{
    int thresholdUniform;
    int quantizationLevelsUniform;
    double _threshold;
    double _quantizationLevels;
}

- (id)init;
@property(nonatomic) double quantizationLevels; // @synthesize quantizationLevels=_quantizationLevels;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;

@end

