//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "IMMQuartz2DDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAWebViewPlugin_CustomCanvas : WAWebViewPlugin_embedView <IMMQuartz2DDelegate>
{
    long long _tagMax;
    NSMutableDictionary *_cachedImage;
}

- (void).cxx_destruct;
- (id)canvasToImage:(unsigned int)arg1;
- (void)drawCanvas:(unsigned int)arg1 actions:(id)arg2 reset:(_Bool)arg3;
- (id)getImage:(id)arg1;
- (id)init;
- (unsigned int)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchDown:(id)arg1;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)setInteractionEnable:(_Bool)arg1 mode:(int)arg2 canvasId:(unsigned int)arg3;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

