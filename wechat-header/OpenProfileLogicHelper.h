//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IStrangerContactMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol OpenProfileLogicHelperDelegate;

@interface OpenProfileLogicHelper : MMObject <PBMessageObserverDelegate, IStrangerContactMgrExt>
{
    id <OpenProfileLogicHelperDelegate> _delegate;
    NSString *_ticket;
    int _source;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <OpenProfileLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleOpenProfileResponse:(id)arg1;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)openProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

