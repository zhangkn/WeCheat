//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSThread;

@interface MMMonitorMgr : NSObject
{
    NSThread *m_monitorThread;
    _Bool m_bStop;
    unsigned long long m_nIntervalTime;
    unsigned long long m_nLastTimeInterval;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_vecLastMainThreadCallStack;
    unsigned long long m_nSum;
    _Bool m_isBackgroundStartUp;
    unsigned long long m_blockDiffTime;
    NSString *m_curLagFile;
    float m_cpuUsage;
    _Bool m_bLaunchLagMonitorOver;
    unsigned int m_firstSleepTime;
    struct __CFRunLoopObserver *m_runLoopBeginObserver;
    struct __CFRunLoopObserver *m_runLoopEndObserver;
    struct __CFRunLoopObserver *m_initializationBeginRunloopObserver;
    struct __CFRunLoopObserver *m_initializationEndRunloopObserver;
    _Bool m_bDebugInXcode;
    _Bool m_bMonitor;
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMonitorThread;
- (void)addRunLoopObserver;
- (void)calcBlockDiffTime;
- (unsigned long long)check;
- (void)clearDumpInBackgroundFetch;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)dumpFileWithType:(unsigned long long)arg1;
- (id)getLaunchBlockRecordFilePath;
- (void)handleBackgroundFetch;
- (id)init;
@property(nonatomic) _Bool m_bLaunchLagMonitorOver; // @synthesize m_bLaunchLagMonitorOver;
@property(nonatomic) _Bool m_bMonitor; // @synthesize m_bMonitor;
- (_Bool)needFilter;
- (void)onMonitorConfigChange;
- (void)removeRunLoopObserver;
- (void)reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)resetStatus;
- (void)saveBlockTimeToLagFile;
- (void)setCPUUsagePercent:(float)arg1;
- (void)setLaunchOverByTimer;
- (void)setRunloopTimeOut:(unsigned long long)arg1 andCheckPeriodTime:(unsigned int)arg2;
- (void)stop;
- (void)threadProc;
- (void)willResignActive;
- (void)willSuspend;
- (void)willTerminate;

@end

