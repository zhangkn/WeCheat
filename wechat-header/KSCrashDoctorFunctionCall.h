//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashDoctorFunctionCall : NSObject
{
    NSString *_name;
    NSArray *_params;
}

- (void).cxx_destruct;
- (id)descriptionForObjCCall;
- (id)descriptionWithParamCount:(int)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;

@end

