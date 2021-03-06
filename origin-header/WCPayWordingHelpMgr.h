//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCPayWordingHelpMgr : MMService <MMService, MMPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    unsigned int _lastUpdateTime;
    NSMutableDictionary *_serverDefaultWordingDict;
    NSMutableDictionary *_validityDynamicWordingDict;
    NSMutableDictionary *_phoneNumberDynamicWordingDict;
    NSMutableDictionary *_cvvCodeDynamicWordingDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cvvCodeDynamicWordingDict; // @synthesize cvvCodeDynamicWordingDict=_cvvCodeDynamicWordingDict;
- (void)dealloc;
- (id)getCVVCodeWoring:(id)arg1;
- (id)getCardNumberInputSafetyInstructionDescWording;
- (id)getCardNumberInputSafetyTipWording;
- (id)getCardNumberInputTipWording;
- (id)getPersonalInfoWording;
- (id)getPhoneNumberWording:(id)arg1;
- (id)getSmsVerifyCodeTipWording;
- (id)getSmsVerifyCodeWording;
- (id)getValidityWording:(id)arg1;
- (id)init;
- (void)initData;
- (_Bool)isShowCVVCode:(id)arg1;
- (_Bool)isShowCardNumberInputSafetyTip;
- (_Bool)isShowCardNumberInputTip;
- (_Bool)isShowPersonalInfo;
- (_Bool)isShowPhoneNumber:(id)arg1;
- (_Bool)isShowSmsVerifyCode;
- (_Bool)isShowValidity:(id)arg1;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (_Bool)loadAndUpdateWCPayWording;
- (void)onLanguageChange;
- (void)onPackageListUpdated:(id)arg1;
- (void)onServiceInit;
@property(retain, nonatomic) NSMutableDictionary *phoneNumberDynamicWordingDict; // @synthesize phoneNumberDynamicWordingDict=_phoneNumberDynamicWordingDict;
- (void)receiveWordingContent:(id)arg1;
- (void)saveWCPayWording:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *serverDefaultWordingDict; // @synthesize serverDefaultWordingDict=_serverDefaultWordingDict;
@property(retain, nonatomic) NSMutableDictionary *validityDynamicWordingDict; // @synthesize validityDynamicWordingDict=_validityDynamicWordingDict;
- (void)tryDownloadWCPayWording;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

