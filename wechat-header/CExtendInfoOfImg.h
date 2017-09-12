//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, ImageInfo, MMAsset, MessageExpItem, NSData, NSString;

@interface CExtendInfoOfImg : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiHDImgSize;
    unsigned int m_uiNormalImgSize;
    NSString *m_nsImgHDUrl;
    NSString *m_nsImgMidUrl;
    NSData *m_dtImg;
    ImageInfo *m_oImageInfo;
    NSString *m_nsAesKey;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsAutoDownloadControl;
    NSString *m_nsMsgMd5;
    MessageExpItem *m_oMsgExpItem;
    _Bool m_isCanUpload;
    _Bool m_isForNewYear;
    unsigned int m_uiScene;
    CMessageWrap *m_refMessageWrap;
    MMAsset *m_asset;
    double m_fLongitude;
    double m_fLatitude;
    NSString *m_AttachedContent;
    NSData *_m_dtSenderMidImg;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
- (void)ChangeForDisplay;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (_Bool)IsHDImg;
- (void)UpdateContent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)currentCompressPicQuality;
- (id)init;
- (_Bool)isUploadHDImage;
@property(retain, nonatomic) NSString *m_AttachedContent; // @synthesize m_AttachedContent;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
@property(retain, nonatomic) NSData *m_dtSenderMidImg; // @synthesize m_dtSenderMidImg=_m_dtSenderMidImg;
@property(nonatomic) double m_fLatitude; // @synthesize m_fLatitude;
@property(nonatomic) double m_fLongitude; // @synthesize m_fLongitude;
@property(nonatomic) _Bool m_isCanUpload; // @synthesize m_isCanUpload;
@property(nonatomic) _Bool m_isForNewYear; // @synthesize m_isForNewYear;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @synthesize m_nsAutoDownloadControl;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @synthesize m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @synthesize m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @synthesize m_oImageInfo;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @synthesize m_oMsgExpItem;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_uiHDImgSize; // @synthesize m_uiHDImgSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @synthesize m_uiNormalImgSize;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)setImage:(id)arg1 isLongOriginImage:(_Bool)arg2;
- (void)setImage:(id)arg1 withData:(id)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(id)arg1 withData:(id)arg2 withImageInfo:(id)arg3 isLongOriginImage:(_Bool)arg4;
- (void)setImage:(id)arg1 withImageInfo:(id)arg2 isLongOriginImage:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

