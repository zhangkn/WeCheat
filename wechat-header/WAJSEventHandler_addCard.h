//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class WCCardAddHelper;

@interface WAJSEventHandler_addCard : WAJSEventHandler_BaseEvent
{
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (id)getViewController;
- (void)handleJSEvent:(id)arg1;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;

@end

