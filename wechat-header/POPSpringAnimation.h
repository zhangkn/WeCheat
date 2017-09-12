//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPSpringAnimation : POPPropertyAnimation
{
}

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double *)arg3 friction:(double *)arg4 mass:(double *)arg5;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double *)arg3 speed:(double *)arg4;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_initState;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsTension;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(nonatomic) double dynamicsFriction;
@property(nonatomic) double dynamicsMass;
@property(nonatomic) double dynamicsTension;
- (id)init;
- (void)setSolver:(SpringSolver_fe820e75 *)arg1;
@property(nonatomic) double springBounciness;
@property(nonatomic) double springSpeed;
@property(copy, nonatomic) id velocity;
- (SpringSolver_fe820e75 *)solver;

@end

