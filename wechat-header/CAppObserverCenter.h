//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyFromMainCtrlDelegate-Protocol.h"

@class NSMutableDictionary;

@interface CAppObserverCenter : NSObject <NotifyFromMainCtrlDelegate>
{
    NSMutableDictionary *m_eventObserverDic;
    NSMutableDictionary *m_messageObserverDic;
    NSMutableDictionary *m_pbEventObserverDic;
    NSMutableDictionary *m_observer2EventDict;
    NSMutableDictionary *m_observer2MessageDict;
    NSMutableDictionary *m_observer2PbEventDict;
}

- (void).cxx_destruct;
- (void)NotifyFromMainCtrl:(id)arg1 Event:(unsigned int)arg2;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)addEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)addObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)addPBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (id)init;
@property(readonly, nonatomic) NSMutableDictionary *m_messageObserverDic; // @synthesize m_messageObserverDic;
- (id)observerKey:(id)arg1;
- (void)removeAllEventObserverListItem;
- (void)removeAllMessageObserverListItem;
- (void)removeAllPBEventObserverListItem;
- (void)removeEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeEventObserverListItemByObject:(id)arg1;
- (void)removeMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removeMessageObserverListItemByObject:(id)arg1;
- (void)removeObserverForEventOrMsg:(unsigned int)arg1 observer:(id)arg2 event2Observer:(id)arg3 observer2Event:(id)arg4;
- (void)removeObserverObject:(id)arg1 event2Observer:(id)arg2 observer2Event:(id)arg3;
- (void)removePBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
- (void)removePBEventObserverListItemByObject:(id)arg1;

@end

