//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountFillPhoneViewControllerDelegate <NSObject>

@optional
- (void)onByPhonePwdLoginByVerifyCode:(NSString *)arg1 phoneNumber:(NSString *)arg2;
- (void)onFillPhoneBack;
- (void)onFillPhoneBindAgreeMobileCanBeFound:(_Bool)arg1;
- (void)onFillPhoneCancelLogout;
- (void)onFillPhoneFromRegToLogin;
- (void)onFillPhoneGoToSecurityCenter;
- (void)onFillPhoneLoginByQQ;
- (void)onFillPhoneNext:(NSString *)arg1 phoneNumber:(NSString *)arg2;
- (void)onFillPhoneNext:(NSString *)arg1 phoneNumber:(NSString *)arg2 pwd:(NSString *)arg3;
- (void)onFillPhoneReg;
- (void)onFillPhoneSetPrivate;
@end

