//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IContactMgrExt-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "PluginUtilExt-Protocol.h"

@class FTSContactMgr, MMTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol ContactsDataLogicDelegate;

@interface ContactsDataLogic : MMObject <IFTSContactMgrExt, IContactMgrExt, PluginUtilExt>
{
    id <ContactsDataLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_arrAllKey;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableArray *m_arrChatRooms;
    unsigned int m_uiScene;
    unsigned int m_uiNormalContact;
    _Bool m_bSort;
    _Bool m_bNeedReload;
    _Bool m_extendChatRoom;
    unsigned int m_uiContactCount;
    FTSContactMgr *_ftsContactMgr;
    NSString *nsCurrentSearchText;
    MMTimer *m_ProcessOnModifyContactTimer;
}

- (void).cxx_destruct;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)addContact:(id)arg1;
- (id)addHiddenSectionKey:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)clearAsynSearchLastQueryText;
- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)deleteContact:(id)arg1 deleteInDB:(_Bool)arg2;
- (void)doAsynInit;
- (void)doAsynSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)filtInContacts:(id)arg1;
- (void)filterContactsViewContacts:(id)arg1;
- (void)filterForSearchContact:(id)arg1;
- (void)filterGroupContacts:(id)arg1;
- (void)filterHistoryGroupContacts:(id)arg1;
- (void)filterMultiSelectContacts:(id)arg1;
- (void)filterMutilSelectWithBakChatFilter:(id)arg1;
- (void)filterOnlyBrandContactContact:(id)arg1;
- (void)filterOnlyWeixinContact:(id)arg1;
- (void)filterSelectContacts:(id)arg1;
- (void)filterSelectWithBrandContacts:(id)arg1;
- (void)filterSelectWithVerifyedContacts:(id)arg1;
- (void)filterSingleSelectSession:(id)arg1;
- (void)filterTransferMoneyContacts:(id)arg1;
- (void)filterTransferMoneySimpleSessionContacts:(id)arg1;
- (void)filterVideoContact:(id)arg1;
- (void)filterVoiceContact:(id)arg1;
- (id)getAllContacts;
- (id)getAllContactsDictionary;
- (id)getChatRoomContacts;
- (unsigned int)getContactCount;
- (id)getContactsArrayWith:(id)arg1;
- (id)getEnterpriseBrandContactsArray;
- (unsigned int)getEnterpriseBrandCount;
- (id)getFilteredContacts;
- (id)getKeysArray;
- (id)getMatchTipForUsername:(id)arg1;
- (_Bool)hasChatRoom;
- (_Bool)hasGroupContacts;
- (_Bool)hasHistoryGroupContacts;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(_Bool)arg3;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(_Bool)arg3 extendChatRoom:(_Bool)arg4;
@property(nonatomic) _Bool m_bSort; // @synthesize m_bSort;
@property(nonatomic) __weak id <ContactsDataLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_extendChatRoom; // @synthesize m_extendChatRoom;
@property(readonly, nonatomic) unsigned int m_uiNormalContact; // @synthesize m_uiNormalContact;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)multiSelectWithSearchResult:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (void)onInstallPlugin:(int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onUnInstallPlugin:(int)arg1;
- (void)pluginsChanged;
- (void)processOnModifyContact;
- (void)processOnModifyContactTimer;
- (_Bool)reloadContacts;
- (_Bool)shouldShowBrandGroup;
- (void)sort;
- (void)stopLockerTimesup;
- (void)unInstallPlugin:(id)arg1;
- (void)updateAsynSearchQueryText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

