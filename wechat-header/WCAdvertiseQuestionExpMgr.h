//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSString, WCADQuestionStatItem;

@interface WCAdvertiseQuestionExpMgr : MMService <MMService>
{
    NSString *lastReportItemId;
    WCADQuestionStatItem *adQuestItem;
}

- (void).cxx_destruct;
- (void)addADQuestionLog:(id)arg1 ExpId:(id)arg2 UxInfo:(id)arg3 Action:(id)arg4;
- (void)clearLastReportItemId;
- (id)getADQuestionExp:(id)arg1;
- (id)getCurrLanguage;
- (id)getLastReportItemId;
- (id)parseFormatString:(id)arg1 translateMap:(id)arg2;
- (void)reportHasnotDoQuest:(id)arg1;
- (void)statADQuestion:(id)arg1;
- (void)test;
- (void)tryReport;
- (void)tryReportWithAct:(unsigned int)arg1 MenuId:(id)arg2 Wording:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

