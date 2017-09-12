//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"

@class CBottleContactDB, NSMutableDictionary, NSString;

@interface CBottleContactMgr : MMService <MMService, MessageObserverDelegate>
{
    CBottleContactDB *m_oDB;
    NSMutableDictionary *m_dicContacts;
    _Bool m_bDataNeedReload;
}

- (void).cxx_destruct;
- (long long)GetBottleContactCount;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (_Bool)RemoveContactList:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)autoReload;
- (void)dealloc;
- (id)getAllContact;
- (id)getContactByName:(id)arg1;
- (id)getSelfContact;
- (id)init;
- (void)initDB:(id)arg1 lock:(id)arg2;
- (void)initListen;
- (void)internalAddContact:(id)arg1;
- (void)internalDeleteContact:(id)arg1;
- (void)internalModifyContact:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (_Bool)onSyncBottleContact:(id)arg1;
- (void)removeListen;
- (void)saveImageStatus:(id)arg1 ImgStatus:(id)arg2;
- (_Bool)setHDHeadUpdated:(id)arg1;
- (_Bool)syncAllBottleContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

