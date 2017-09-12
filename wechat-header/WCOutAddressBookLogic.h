//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class CNContactStore, NSArray, NSRecursiveLock;
@protocol WCOutAddressBookLogicDelegate;

@interface WCOutAddressBookLogic : MMObject
{
    unsigned int m_addressBookStatus;
    CNContactStore *m_cnContactStore;
    void *m_addressBook;
    _Bool m_isLoadingAddressBook;
    _Bool m_hasLoadAddressBook;
    _Bool m_localAddressBookChanged;
    NSArray *m_phoneContacts;
    double m_lastUpdateAddressBookTime;
    NSRecursiveLock *m_oLock;
    id <WCOutAddressBookLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addCacheWithPhoneContacts:(id)arg1;
- (_Bool)addressBookStatusIsDenied;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)canSyncAddressBook;
- (void)dealloc;
@property(nonatomic) __weak id <WCOutAddressBookLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getPhoneContacts;
@property(readonly, nonatomic) _Bool hasLoadPhoneContacts; // @synthesize hasLoadPhoneContacts=m_hasLoadAddressBook;
- (id)init;
- (void)loadAddressBook;
- (void)loadAsyncNeedUpdate:(_Bool)arg1;
- (void)localAddressBookChanged;
- (void)onContactStoreDidChange:(id)arg1;
- (void)refetchAddressBook;
- (void)requestAccessForContactsDone:(_Bool)arg1;
- (void)tryLoad;

@end

