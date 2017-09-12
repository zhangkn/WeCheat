//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, EAGLContext, NSMutableDictionary, UIColor;
@protocol WACanvasViewDelegate;

@interface WACanvasView : UIView
{
    EAGLContext *_context;
    CAEAGLLayer *_layer;
    int _frameBufferWidth;
    int _frameBufferHeight;
    unsigned int _defaultFrameBuffer;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    struct _WACEngine *_engine;
    struct _WACColor _bgWACColor;
    NSMutableDictionary *_url2IDMap;
    id <WACanvasViewDelegate> _delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)clearRect:(id)arg1;
- (struct _WACColor255)converBgColor:(struct _WACColor)arg1;
@property(nonatomic) __weak id <WACanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destoryBuffers;
- (void)drawActions:(id)arg1 reserve:(_Bool)arg2;
- (void)drawImage:(id)arg1;
- (void)fillPath:(id)arg1;
- (void)fillText:(id)arg1;
- (void)fillTextMultiLines:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct _WACPaint)parseLinearGradient:(id)arg1;
- (struct _WACColor)parseRGBAColor:(id)arg1;
- (struct _WACColor)parseRGBColor:(id)arg1;
- (struct _WACPaint)parseRadialGradient:(id)arg1;
- (void)releaseResources;
- (void)restore:(id)arg1;
- (void)rotate:(id)arg1;
- (void)save:(id)arg1;
- (void)scale:(id)arg1;
@property(retain, nonatomic) UIColor *bgUIColor; // @dynamic bgUIColor;
- (void)setFillStyle:(id)arg1;
- (void)setFontSize:(id)arg1;
- (void)setGlobalAlpha:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(id)arg1;
- (void)setMiterLimit:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setTextAlign:(id)arg1;
- (void)setupBuffers;
- (void)setupContext;
- (void)setupLayer;
- (unsigned int)sortAndRemoveDuplicateStops:(struct _WACGradientStop *)arg1 nstops:(unsigned int)arg2;
- (void)strokePath:(id)arg1;
- (void)translate:(id)arg1;

@end

