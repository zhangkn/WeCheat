//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class CContact;

@interface BrandServiceEnterConversationLogic : MMObject <PBMessageObserverDelegate>
{
    CContact *m_contact;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)startReportEnterConversationForContact:(id)arg1;
- (void)startReportExitConversationForContact;

@end

