//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class EditImageAttr, MMAsset, MMImageExifLogInfo, MMImageLocation, NSData, NSString, NSURL;

@interface MMImage : UIImage
{
    long long _mattID;
    NSString *_dataPath;
    long long _imageFrom;
    int m_processState;
    int _sourceForSNSUploadStat;
    NSURL *_referenceURL;
    MMAsset *m_asset;
    UIImage *m_imageFromAsset;
    NSData *m_imageData;
    MMImageLocation *m_location;
    MMImageExifLogInfo *_exifLogInfo;
}

- (void).cxx_destruct;
- (void)commonInit;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(nonatomic) long long imageFrom; // @synthesize imageFrom=_imageFrom;
- (id)init;
- (id)initWithImage:(id)arg1;
@property(nonatomic) _Bool isEdited;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset;
@property(retain, nonatomic) NSData *m_imageData; // @synthesize m_imageData;
@property(retain, nonatomic) UIImage *m_imageFromAsset; // @synthesize m_imageFromAsset;
@property(retain, nonatomic) MMImageLocation *m_location; // @synthesize m_location;
@property(nonatomic) int m_processState; // @synthesize m_processState;
@property(nonatomic) long long mattID; // @synthesize mattID=_mattID;
@property(retain, nonatomic) NSURL *referenceURL; // @synthesize referenceURL=_referenceURL;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;

@end

