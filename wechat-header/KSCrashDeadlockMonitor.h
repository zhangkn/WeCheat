//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface KSCrashDeadlockMonitor : NSObject
{
    _Bool _awaitingResponse;
    NSThread *_monitorThread;
}

- (void).cxx_destruct;
@property _Bool awaitingResponse; // @synthesize awaitingResponse=_awaitingResponse;
- (void)cancel;
- (void)handleDeadlock;
- (id)init;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
- (void)runMonitor;
- (void)watchdogAnswer;
- (void)watchdogPulse;

@end

