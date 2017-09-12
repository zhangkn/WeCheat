//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSResultView.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "ContactPickerViewDelegate-Protocol.h"
#import "FTSAddressBookFriendCellDelegate-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "IWALocalSearchExt-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class AddressBookFriend, CContact, CContactVerifyLogic, ContactInfoViewController, NSString;

@interface FTSContactDetailView : FTSResultView <contactInfoDelegate, ContactInfoViewControllerDelegate, IWALocalSearchExt, ContactPickerViewDelegate, IFTSContactMgrExt, FTSAddressBookFriendCellDelegate>
{
    AddressBookFriend *_curAddressBookFriend;
    ContactInfoViewController *_curAddressBookFriendView;
    CContact *_curContact;
    CContactVerifyLogic *_contactVerifyLogic;
    int _ftsContactType;
}

- (void).cxx_destruct;
- (void)asyncCancelSearch;
- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
@property(nonatomic) int ftsContactType; // @synthesize ftsContactType=_ftsContactType;
- (id)getSearchArray:(id)arg1;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (_Bool)hasSearchDone:(id)arg1;
- (id)initWithType:(int)arg1;
- (_Bool)isCreateChatRoomCellAtRow:(long long)arg1;
- (void)onCreateChatRoom:(id)arg1;
- (void)onFTSDetailPageContactResultChanged;
- (void)onFTSSelectAddressBookFriend:(id)arg1;
- (void)onSelectCancel;
- (void)onUpdateContact:(id)arg1;
- (void)onWASearchResultChangedForDetail;
- (void)openContactPickerView;
- (void)openMessageContentView:(id)arg1;
- (void)openWeAppWithContact:(id)arg1;
- (id)parseSeperatedKeyword:(id)arg1;
- (void)pop;
- (void)selectAddressBookFriend:(id)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)weAppSearchResultKVReport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

