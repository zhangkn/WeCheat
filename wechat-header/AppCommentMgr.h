//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AppCommentMsg, NSString;

@interface AppCommentMgr : MMService <MMService, IMsgExt, PBMessageObserverDelegate, UIAlertViewDelegate>
{
    AppCommentMsg *storedAppCommentMsg;
    unsigned int m_uiReportEvent;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)appCommentDidClickedButton:(long long)arg1;
- (_Bool)createReportEventWithReportID:(int)arg1;
- (void)dealloc;
- (id)getAppCommentAlertViewWithDelegate:(id)arg1;
- (_Bool)haveNormalUnreadMsg;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
@property(retain, nonatomic) AppCommentMsg *storedAppCommentMsg; // @synthesize storedAppCommentMsg;
- (_Bool)shouldShowAlert;
- (void)tryShowAppCommentAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

