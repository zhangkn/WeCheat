//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, UrlInfo, WXPBGeneratedMessage;

@interface ProtobufCGIWrap : NSObject <NSCopying>
{
    WXPBGeneratedMessage *m_pbRequest;
    Class m_pbRespClass;
    WXPBGeneratedMessage *m_pbResponse;
    unsigned int m_uiChannelType;
    unsigned int m_uiCgi;
    unsigned int m_uiScene;
    NSString *m_nsCgiName;
    NSString *m_nsUri;
    unsigned int m_uiRequestEncryptType;
    NSData *m_dtResponseDecryptKey;
    unsigned int m_uiMessage;
    Class m_eventHandlerClass;
    NSObject *m_oUserData;
    UrlInfo *m_oUrlInfo;
    _Bool m_bNotifyPartLen;
    unsigned int m_uiRetryCount;
    double m_douTimeout;
    double m_douReadTimeout;
    int m_netwrokStrategy;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(nonatomic) _Bool m_bNotifyPartLen; // @synthesize m_bNotifyPartLen;
@property(nonatomic) double m_douReadTimeout; // @synthesize m_douReadTimeout;
@property(nonatomic) double m_douTimeout; // @synthesize m_douTimeout;
@property(retain, nonatomic) NSData *m_dtResponseDecryptKey; // @synthesize m_dtResponseDecryptKey;
@property(nonatomic) Class m_eventHandlerClass; // @synthesize m_eventHandlerClass;
@property(nonatomic) int m_netwrokStrategy; // @synthesize m_netwrokStrategy;
@property(retain, nonatomic) NSString *m_nsCgiName; // @synthesize m_nsCgiName;
@property(retain, nonatomic) NSString *m_nsUri; // @synthesize m_nsUri;
@property(retain, nonatomic) UrlInfo *m_oUrlInfo; // @synthesize m_oUrlInfo;
@property(retain, nonatomic) NSObject *m_oUserData; // @synthesize m_oUserData;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbRequest; // @synthesize m_pbRequest;
@property(nonatomic) Class m_pbRespClass; // @synthesize m_pbRespClass;
@property(retain, nonatomic) WXPBGeneratedMessage *m_pbResponse; // @synthesize m_pbResponse;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi;
@property(nonatomic) unsigned int m_uiChannelType; // @synthesize m_uiChannelType;
@property(nonatomic) unsigned int m_uiMessage; // @synthesize m_uiMessage;
@property(nonatomic) unsigned int m_uiRequestEncryptType; // @synthesize m_uiRequestEncryptType;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;

@end

