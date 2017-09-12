//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPUImageInput-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, GLProgram, GPUImageContext, GPUImageFramebuffer, NSArray, NSMutableArray, NSString, NSURL;
@protocol GPUImageMovieWriterDelegate, OS_dispatch_queue;

@interface GPUImageMovieWriter : NSObject <GPUImageInput>
{
    _Bool alreadyFinishedRecording;
    NSURL *movieURL;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    AVAssetWriterInput *assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;
    GPUImageContext *_movieWriterContext;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    struct CGSize videoSize;
    unsigned long long inputRotation;
    unsigned int movieFramebuffer;
    unsigned int movieRenderbuffer;
    GLProgram *colorSwizzlingProgram;
    int colorSwizzlingPositionAttribute;
    int colorSwizzlingTextureCoordinateAttribute;
    int colorSwizzlingInputTextureUniform;
    GPUImageFramebuffer *firstInputFramebuffer;
    _Bool discont;
    CDStruct_1b6d18a9 startTime;
    CDStruct_1b6d18a9 previousFrameTime;
    CDStruct_1b6d18a9 previousAudioTime;
    CDStruct_1b6d18a9 offsetTime;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *videoQueue;
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    _Bool isRecording;
    _Bool _hasAudioTrack;
    _Bool _encodingLiveVideo;
    _Bool _shouldPassthroughAudio;
    _Bool enabled;
    _Bool _shouldInvalidateAudioSampleWhenDone;
    _Bool _paused;
    _Bool _shouldWriteTimestampIntoFrame;
    _Bool _shouldRecordTimestampAndScaleForEachFrame;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    CDUnknownBlockType videoInputReadyCallback;
    CDUnknownBlockType audioInputReadyCallback;
    id <GPUImageMovieWriterDelegate> _delegate;
    CDUnknownBlockType _audioProcessingCallback;
    double _earliestStartTime;
    NSMutableArray *_timestampValueArray;
    NSMutableArray *_zoomScaleArray;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)adjustTime:(struct opaqueCMSampleBuffer *)arg1 by:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) AVAssetWriter *assetWriter;
@property(copy, nonatomic) CDUnknownBlockType audioInputReadyCallback; // @synthesize audioInputReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType audioProcessingCallback; // @synthesize audioProcessingCallback=_audioProcessingCallback;
- (void)cancelRecording;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
- (void)createDataFBO;
- (void)dealloc;
@property(nonatomic) id <GPUImageMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyDataFBO;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) double earliestStartTime; // @synthesize earliestStartTime=_earliestStartTime;
- (void)enableSynchronizationCallbacks;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) _Bool encodingLiveVideo; // @synthesize encodingLiveVideo=_encodingLiveVideo;
- (void)endProcessing;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock;
- (void)finishRecording;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRecordingWithCustomCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool hasAudioTrack; // @synthesize hasAudioTrack=_hasAudioTrack;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (void)initializeMovieWithOutputSettings:(id)arg1;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (struct CGSize)maximumOutputSize;
@property(copy, nonatomic) NSArray *metaData;
@property(retain, nonatomic) GPUImageContext *movieWriterContext; // @synthesize movieWriterContext=_movieWriterContext;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)renderAtInternalSizeUsingFramebuffer:(id)arg1;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (void)setFilterFBO;
- (void)setHasAudioTrack:(_Bool)arg1 audioSettings:(id)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
@property(nonatomic) _Bool shouldInvalidateAudioSampleWhenDone; // @synthesize shouldInvalidateAudioSampleWhenDone=_shouldInvalidateAudioSampleWhenDone;
@property(nonatomic) _Bool shouldPassthroughAudio; // @synthesize shouldPassthroughAudio=_shouldPassthroughAudio;
@property(nonatomic) _Bool shouldRecordTimestampAndScaleForEachFrame; // @synthesize shouldRecordTimestampAndScaleForEachFrame=_shouldRecordTimestampAndScaleForEachFrame;
@property(nonatomic) _Bool shouldWriteTimestampIntoFrame; // @synthesize shouldWriteTimestampIntoFrame=_shouldWriteTimestampIntoFrame;
@property(retain, nonatomic) NSMutableArray *timestampValueArray; // @synthesize timestampValueArray=_timestampValueArray;
@property(nonatomic) struct CGAffineTransform transform;
@property(copy, nonatomic) CDUnknownBlockType videoInputReadyCallback; // @synthesize videoInputReadyCallback;
@property(retain, nonatomic) NSMutableArray *zoomScaleArray; // @synthesize zoomScaleArray=_zoomScaleArray;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)startRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform)arg1;
- (void)startRecordingNoEarlierThanTime:(double)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)writeTimeToBytes:(const CDStruct_1b6d18a9 *)arg1 zoomScale:(float)arg2 pData:(char *)arg3 width:(int)arg4 height:(int)arg5 method:(int)arg6 debugFlag:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

