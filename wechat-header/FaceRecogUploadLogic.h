//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "FaceRecogBindVideoLogicDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"

@class FaceRecogBindVideoLogic, NSString;
@protocol FaceRecogUploadLogicDelegate;

@interface FaceRecogUploadLogic : MMObject <ICdnComMgrExt, FaceRecogBindVideoLogicDelegate>
{
    _Bool _isRetry;
    _Bool _uploading;
    unsigned int _scene;
    unsigned int _verifySource;
    unsigned int _currentResourceType;
    id <FaceRecogUploadLogicDelegate> _delegate;
    NSString *_appId;
    unsigned long long _bioId;
    NSString *_currentFaceResultClientId;
    NSString *_currentFaceVideoClientId;
    FaceRecogBindVideoLogic *_bindVideoLogic;
}

+ (id)genResourceClientId:(id)arg1;
- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecogBindVideoLogic *bindVideoLogic; // @synthesize bindVideoLogic=_bindVideoLogic;
- (void)bindVideoOperationDone:(int)arg1 logic:(id)arg2;
@property(nonatomic) unsigned long long bioId; // @synthesize bioId=_bioId;
@property(retain, nonatomic) NSString *currentFaceResultClientId; // @synthesize currentFaceResultClientId=_currentFaceResultClientId;
@property(retain, nonatomic) NSString *currentFaceVideoClientId; // @synthesize currentFaceVideoClientId=_currentFaceVideoClientId;
@property(nonatomic) unsigned int currentResourceType; // @synthesize currentResourceType=_currentResourceType;
- (void)dealloc;
@property(nonatomic) __weak id <FaceRecogUploadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
- (_Bool)isUploadedCorrectResource:(id)arg1;
- (_Bool)isUploading;
- (void)onUploadOperationFinish:(id)arg1;
- (void)onUploadStartFailed:(unsigned int)arg1;
- (void)resetBindVideoLogic;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(nonatomic) unsigned int verifySource; // @synthesize verifySource=_verifySource;
- (_Bool)startUploadFaceResult:(unsigned long long)arg1;
- (_Bool)startUploadFaceVideo:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

