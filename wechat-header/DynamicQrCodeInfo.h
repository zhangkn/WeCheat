//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface DynamicQrCodeInfo : MMObject
{
    _Bool _isDynamic;
    _Bool _canRefresh;
    NSString *_refreshWording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canRefresh; // @synthesize canRefresh=_canRefresh;
@property(nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
@property(retain, nonatomic) NSString *refreshWording; // @synthesize refreshWording=_refreshWording;

@end

