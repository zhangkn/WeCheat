//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageOutput, GPUImageParallelCoordinateLineTransformFilter, GPUImageThresholdedNonMaximumSuppressionFilter, NSMutableArray;
@protocol GPUImageInput;

@interface GPUImageHoughTransformLineDetector : GPUImageFilterGroup
{
    GPUImageOutput<GPUImageInput> *thresholdEdgeDetectionFilter;
    GPUImageParallelCoordinateLineTransformFilter *parallelCoordinateLineTransformFilter;
    GPUImageThresholdedNonMaximumSuppressionFilter *nonMaximumSuppressionFilter;
    float *linesArray;
    char *rawImagePixels;
    CDUnknownBlockType linesDetectedBlock;
    double edgeThreshold;
    double lineDetectionThreshold;
    NSMutableArray *_intermediateImages;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) double edgeThreshold; // @synthesize edgeThreshold;
- (void)extractLineParametersFromImageAtFrameTime:(CDStruct_1b6d18a9)arg1;
- (id)init;
@property(readonly, nonatomic) NSMutableArray *intermediateImages; // @synthesize intermediateImages=_intermediateImages;
@property(nonatomic) double lineDetectionThreshold; // @synthesize lineDetectionThreshold;
@property(copy, nonatomic) CDUnknownBlockType linesDetectedBlock; // @synthesize linesDetectedBlock;
- (_Bool)wantsMonochromeInput;

@end

