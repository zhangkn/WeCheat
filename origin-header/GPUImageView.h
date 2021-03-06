//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GPUImageInput-Protocol.h"

@class GLProgram, GPUImageFramebuffer, NSString;

@interface GPUImageView : UIView <GPUImageInput>
{
    unsigned long long inputRotation;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    GLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize boundsSizeAtFrameBufferEpoch;
    _Bool enabled;
    unsigned long long aspectRatio;
    unsigned long long _fillMode;
    struct CGSize _sizeInPixels;
}

+ (Class)layerClass;
+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio;
- (void)commonInit;
- (void)createDisplayFramebuffer;
- (void)dealloc;
- (void)destroyDisplayFramebuffer;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
- (void)endProcessing;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)maximumOutputSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)presentFramebuffer;
- (void)recalculateViewGeometry;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (void)setDisplayFramebuffer;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (_Bool)wantsMonochromeInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

