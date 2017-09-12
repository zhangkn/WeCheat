//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ILinkEventExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class MMPhoneNumberHandler, MMURLHandler, NSString;
@protocol UrlControllerDelegate;

@interface UrlController : MMObject <MMWebViewDelegate, contactInfoDelegate, IMsgExt, ILinkEventExt, WCActionSheetDelegate>
{
    MMURLHandler *m_urlHandler;
    MMPhoneNumberHandler *m_phoneNumberHandler;
    id <UrlControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)AddPhoneNumberToExistContact:(id)arg1;
- (void)CreateNewContact:(id)arg1;
- (void)Register;
- (void)Reset;
- (void)UnRegister;
- (void)contactsReturn:(_Bool)arg1 contact:(id)arg2;
- (void)dealloc;
- (id)handlePreviewUrl:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleUrl:(id)arg1 withExtraInfo:(id)arg2;
- (id)init;
- (void)jumpToBindPhone;
- (void)jumpToProfile:(id)arg1;
@property(nonatomic) __weak id <UrlControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDone:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)webviewShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

