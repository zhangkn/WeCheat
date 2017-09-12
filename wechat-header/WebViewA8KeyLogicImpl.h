//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IJumpEmoticonDetailCgiDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class JumpEmoticonDetailCgi, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, UIView, WebviewAskAuthorizationLogic;
@protocol WebViewA8KeyLogicDelegate, YYWebViewInterface;

@interface WebViewA8KeyLogicImpl : MMObject <IJumpEmoticonDetailCgiDelegate, PBMessageObserverDelegate>
{
    unsigned int _firstGetA8KeyOpCode;
    NSString *_firstGetA8KeyAppId;
    NSString *_firstGetA8KeyScope;
    NSString *_firstGetA8KeyState;
    unsigned int _getA8KeyScene;
    struct timeval _getA8KeyStartTime;
    NSString *_bundleId;
    NSString *_getA8KeyUsrname;
    unsigned int _getA8KeyEventId;
    unsigned int _getA8KeyReason;
    NSMutableDictionary *_dicUrlPermission;
    NSMutableDictionary *_dicShareUrlForMainUrl;
    WebviewAskAuthorizationLogic *_authorizationLogic;
    _Bool _alwaysAllowJumpUrl;
    NSMutableSet *_disableGetA8KeyUrlList;
    id <WebViewA8KeyLogicDelegate> _delegate;
    NSURL *_currentUrl;
    _Bool m_hasSetFontPermission;
    unsigned int m_fontScale;
    UIView<YYWebViewInterface> *_webView;
    vector_ecc2264a _pIDKeyList;
    NSString *_currentShareUrl;
    unsigned int _firstGetA8KeyOpcode;
    unsigned int m_RequestID;
    JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi;
    NSString *_offlineA8KeyFullUrl;
    NSArray *_offlineA8KeyHeaders;
    NSString *_offlineA8KeyOriginUrl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)GetDefaultPermisson;
- (id)GetMainDocumentURL;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool alwaysAllowJumpUrl; // @synthesize alwaysAllowJumpUrl=_alwaysAllowJumpUrl;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)changeCurrentShareUrlForMainUrl:(id)arg1;
- (void)checkApiAuthorization:(id)arg1;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
- (void)dealloc;
@property(nonatomic) __weak id <WebViewA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *firstGetA8KeyAppId; // @synthesize firstGetA8KeyAppId=_firstGetA8KeyAppId;
@property(nonatomic) unsigned int firstGetA8KeyOpcode; // @synthesize firstGetA8KeyOpcode=_firstGetA8KeyOpcode;
@property(retain, nonatomic) NSString *firstGetA8KeyScope; // @synthesize firstGetA8KeyScope=_firstGetA8KeyScope;
@property(retain, nonatomic) NSString *firstGetA8KeyState; // @synthesize firstGetA8KeyState=_firstGetA8KeyState;
- (void)getA8Key:(id)arg1 Reason:(int)arg2;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(retain, nonatomic) NSString *getA8KeyUsrname; // @synthesize getA8KeyUsrname=_getA8KeyUsrname;
- (unsigned long long)getDeepLinkBitSet;
- (unsigned int)getGeneralBitSet;
- (unsigned int)getGeneralBitSetForUrl:(id)arg1;
- (unsigned int)getPermissionBitSet;
- (unsigned int)getPermissionBitSet2;
- (unsigned int)getPermissionBitSet3;
- (id)getPermissionForUrl:(id)arg1;
- (id)getRequestingOrCurrentUrl;
- (id)getShareUrl;
- (id)getShareUrlForMain:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (void)goToURL:(id)arg1 withCustomerCookies:(id)arg2;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (void)handleOnGetA8KeyOK:(id)arg1 reason:(int)arg2;
- (void)handleOnGetA8KeyOK:(id)arg1 reason:(int)arg2 req:(id)arg3;
- (_Bool)hasUrlPermission:(id)arg1;
- (id)init;
- (_Bool)isAsynGetA8KeyAndNeedInjectWxjs;
- (_Bool)isDisableGetA8KeyForUrl:(id)arg1;
- (_Bool)isGettingA8Key;
@property(nonatomic) unsigned int m_RequestID; // @synthesize m_RequestID;
@property(readonly, nonatomic) unsigned int m_fontScale; // @synthesize m_fontScale;
@property(readonly, nonatomic) _Bool m_hasSetFontPermission; // @synthesize m_hasSetFontPermission;
@property(retain, nonatomic) JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi; // @synthesize m_jumpEmoticonDetailCgi;
@property(retain, nonatomic) NSString *offlineA8KeyFullUrl; // @synthesize offlineA8KeyFullUrl=_offlineA8KeyFullUrl;
@property(retain, nonatomic) NSArray *offlineA8KeyHeaders; // @synthesize offlineA8KeyHeaders=_offlineA8KeyHeaders;
@property(retain, nonatomic) NSString *offlineA8KeyOriginUrl; // @synthesize offlineA8KeyOriginUrl=_offlineA8KeyOriginUrl;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)reportGetA8KeyFailForReason:(int)arg1;
- (void)reportGetA8KeyForceRedirect;
- (void)reportGetA8KeyRequest;
- (void)setPermission:(id)arg1 ForUrl:(id)arg2;
- (void)setShareUrl:(id)arg1 forMain:(id)arg2;
- (void)setUrlPermission:(id)arg1 GeneralCtrl:(id)arg2 DeepLink:(id)arg3 forURL:(id)arg4;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (void)updateGetA8KeySceneBySourceType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

