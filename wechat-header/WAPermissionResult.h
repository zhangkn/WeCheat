//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WAPermissionResult : MMObject
{
    _Bool _needDelayExecute;
    _Bool _resultHasPermission;
    unsigned int _permissionState;
    unsigned int _runningState;
    NSString *_runningStateDescription;
    NSString *_permissionMsg;
    NSString *_resultMsg;
}

+ (id)getFailedResult;
- (void).cxx_destruct;
@property(nonatomic) _Bool needDelayExecute; // @synthesize needDelayExecute=_needDelayExecute;
@property(retain, nonatomic) NSString *permissionMsg; // @synthesize permissionMsg=_permissionMsg;
@property(nonatomic) unsigned int permissionState; // @synthesize permissionState=_permissionState;
@property(nonatomic) _Bool resultHasPermission; // @synthesize resultHasPermission=_resultHasPermission;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) NSString *runningStateDescription; // @synthesize runningStateDescription=_runningStateDescription;

@end

