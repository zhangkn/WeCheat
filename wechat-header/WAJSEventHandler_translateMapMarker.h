//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSMutableArray, QAnnotationView;

@interface WAJSEventHandler_translateMapMarker : WAJSEventHandler_BaseEvent
{
    NSMutableArray *_keyFrames;
    QAnnotationView *_markerView;
}

- (void).cxx_destruct;
- (void)checkNextFrameAnimation;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *keyFrames; // @synthesize keyFrames=_keyFrames;
@property(nonatomic) __weak QAnnotationView *markerView; // @synthesize markerView=_markerView;
- (void)startKeyFrameAnimation;

@end

