//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface WAJSEventHandler_openWeRunSetting : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)tryOpenSetting;

@end

