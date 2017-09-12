//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageWhiteBalanceFilter : GPUImageFilter
{
    int temperatureUniform;
    int tintUniform;
    double _temperature;
    double _tint;
}

- (id)init;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double tint; // @synthesize tint=_tint;

@end

