//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMNewSessionMgrExt-Protocol.h"

@class NSOperationQueue, NSString, WXGBackupAnalysis, WXGBackupIndexDB, WXGImportMessageHelper;
@protocol WXGBackupImportMessageHelperDelegate;

@interface WXGBackupImportMessageHelper : NSObject <IMMNewSessionMgrExt>
{
    NSOperationQueue *m_operationQueue;
    _Bool m_bRecovering;
    WXGBackupIndexDB *m_indexDB;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    WXGImportMessageHelper *m_importMessageHelper;
    WXGBackupAnalysis *m_analysisiHelper;
    id <WXGBackupImportMessageHelperDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancelImport;
- (void)dealloc;
@property(nonatomic) __weak id <WXGBackupImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)onSessionRebuildEnd;
- (void)p_recoverThread;
- (void)startImport;
- (void)stopImport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

