//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer;

@interface LBSSystemCacheUpdater : NSObject
{
    unsigned long long m_locationTag;
    MMTimer *m_stopTimer;
    long long m_geoMode;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(nonatomic) unsigned long long m_locationTag; // @synthesize m_locationTag;
@property(retain, nonatomic) MMTimer *m_stopTimer; // @synthesize m_stopTimer;
- (void)start;
- (void)stop;

@end

