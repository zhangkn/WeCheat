//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class WCDevice;

@interface WCDeviceConnectExt : MMObject
{
    WCDevice *_device;
    int _connectState;
    _Bool _tryConnect;
}

- (void).cxx_destruct;
@property(nonatomic) int connectState; // @synthesize connectState=_connectState;
- (void)dealloc;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool tryConnect; // @synthesize tryConnect=_tryConnect;

@end

