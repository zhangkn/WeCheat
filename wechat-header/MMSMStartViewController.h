//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSMBaseViewController.h"

#import "MMSafeModeMgrExt-Protocol.h"

@class NSString, UIImageView;

@interface MMSMStartViewController : MMSMBaseViewController <MMSafeModeMgrExt>
{
    UIImageView *m_logoView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)layoutLogoView;
- (void)layoutViews;
- (void)onNextButtonClicked:(id)arg1;
- (void)onReportAndUpdateConfigFinished;
- (void)startupFirstRun;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

