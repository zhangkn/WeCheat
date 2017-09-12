//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimation.h"

@interface POPCustomAnimation : POPAnimation
{
    double _currentTime;
    double _elapsedTime;
    CDUnknownBlockType _animate;
}

+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)_init;
@property(copy, nonatomic) CDUnknownBlockType animate; // @synthesize animate=_animate;
- (double)beginTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;

@end

