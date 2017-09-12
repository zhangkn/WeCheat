//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "VoicePrintLogicControllerDelegate-Protocol.h"

@class NSString, UIViewController, VoicePrintLogicControllerFactory;
@protocol VoicePrintHandlerDelegate;

@interface VoicePrintHandler : MMObject <VoicePrintLogicControllerDelegate>
{
    VoicePrintLogicControllerFactory *m_VoicePrintLogicController;
    _Bool m_bPresentViewController;
    id <VoicePrintHandlerDelegate> m_delegate;
    UIViewController *m_viewController;
    NSString *nsTicket;
    unsigned long long uiMaxVerifyTryTimes;
    NSString *nsShowUrlWhenOverMaxVerifyTimes;
    NSString *_voiceKey;
    NSString *_lyrics;
    NSString *_tipWordingWhenSuccess;
}

- (void).cxx_destruct;
- (void)OnClickCanNotUnLockBtn;
- (void)OnCreateSuccessful;
- (void)OnCreateSuccessfulAndClickTryVerifyBtn;
- (void)OnVerifyOverLimitFromServer;
- (void)OnVerifySuccessful;
- (void)OpenLogin;
- (void)OpenRsaCreate;
- (void)OpenRsaVerify;
- (void)OpenVerify;
- (void)OpenVoicePrintViewForLogin;
- (void)OpenVoicePrintViewWithType:(int)arg1;
- (id)getNavigationController;
- (id)getViewController;
- (id)init;
@property(copy, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) __weak id <VoicePrintHandlerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak UIViewController *m_viewController; // @synthesize m_viewController;
@property(retain, nonatomic) NSString *nsShowUrlWhenOverMaxVerifyTimes; // @synthesize nsShowUrlWhenOverMaxVerifyTimes;
@property(retain, nonatomic) NSString *nsTicket; // @synthesize nsTicket;
@property(retain, nonatomic) NSString *tipWordingWhenSuccess; // @synthesize tipWordingWhenSuccess=_tipWordingWhenSuccess;
@property(nonatomic) unsigned long long uiMaxVerifyTryTimes; // @synthesize uiMaxVerifyTryTimes;
@property(nonatomic) NSString *voiceKey; // @synthesize voiceKey=_voiceKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

