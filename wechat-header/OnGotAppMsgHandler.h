//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "ShareMessageConfirmLogicHelperDelegate-Protocol.h"

@class AppCommunicateData, NSString, ShareMessageConfirmLogicHelper;
@protocol OnGotAppMsgHandleDelegate;

@interface OnGotAppMsgHandler : MMObject <ShareMessageConfirmLogicHelperDelegate, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    AppCommunicateData *m_appData;
    ShareMessageConfirmLogicHelper *_confirmHelper;
    id <OnGotAppMsgHandleDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)cancelAllHandle;
- (void)cancelGotAppMsg;
- (void)clearAllHandle;
- (void)createConfirmView;
- (void)dealloc;
- (id)init;
- (void)jumpToMessageContentViewAndConfirm;
@property(nonatomic) __weak id <OnGotAppMsgHandleDelegate> m_delegate; // @synthesize m_delegate;
- (void)onGotAppMsg:(id)arg1 withData:(id)arg2;
- (void)onPreEnterWechatDone;
- (void)removeConfirmView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

