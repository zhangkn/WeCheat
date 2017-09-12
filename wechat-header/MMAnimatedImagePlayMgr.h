//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMapTable, NSMutableSet, NSTimer;

@interface MMAnimatedImagePlayMgr : MMObject
{
    NSTimer *m_timer;
    NSMutableSet *m_playingTasks;
    NSMapTable *m_viewToTaskTable;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)RegisterSysNotifications;
- (void)UnRegisterSysNotifications;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2 config:(id)arg3;
- (void)dealloc;
- (unsigned long long)getTickCount;
- (id)init;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationWillTerminate:(id)arg1;
- (void)removePlayTaskWithView:(id)arg1;
- (void)startUpdateTasks;
- (void)stopUpdateTasks;
- (void)updateTasks;

@end

