//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

@class NSMutableArray, NSObject;
@protocol WAJSContextPlugin_userAccountProtocol;

@interface WAJSContextPlugin_userAccount : WAJSContextPluginBase
{
    NSMutableArray *_arrEvent;
    struct NSObject *_runningEvent;
}

- (void).cxx_destruct;
- (void)addJSEvent:(struct NSObject *)arg1;
- (void)addUserAccountJSEvent:(struct NSObject *)arg1 param:(id)arg2;
@property(retain) NSMutableArray *arrEvent; // @synthesize arrEvent=_arrEvent;
- (void)checkRunJSEvent;
- (void)dealloc;
- (struct NSObject *)getNextRunningJSEventIfNotHave;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)mainThread_checkRunJSEvent;
- (void)removeAllJSEvent;
- (void)removeUserAccountJSEvent:(struct NSObject *)arg1;
- (void)resetRunningEvent:(struct NSObject *)arg1;
@property(retain) NSObject<WAJSContextPlugin_userAccountProtocol> *runningEvent; // @synthesize runningEvent=_runningEvent;

@end
