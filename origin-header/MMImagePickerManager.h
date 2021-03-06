//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ImageBrowseDelegate-Protocol.h"
#import "MMImagePickerControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class MMImagePickerManagerOptionObj, NSMutableArray, NSString;
@protocol MMImagePickerManagerDelegate;

@interface MMImagePickerManager : MMObject <MMImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ImageBrowseDelegate>
{
    id <MMImagePickerManagerDelegate> m_delegate;
    MMImagePickerManagerOptionObj *_optionObj;
    NSMutableArray *_tempImagePool;
}

+ (id)getImagePickerControllerWithOptionObj:(id)arg1;
+ (id)getImagePickerFromCameraWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (id)getImagePickerFromPhotoLibraryWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (_Bool)isCaptureByImagePicker:(id)arg1;
+ (_Bool)isSupportViewController:(id)arg1;
+ (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2;
- (void).cxx_destruct;
- (void)MMImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MMImagePickerControllerDidCancel:(id)arg1;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)OnShowDidFinished;
- (void)OnShowWillFinished;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <MMImagePickerManagerDelegate> m_delegate; // @synthesize m_delegate;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(retain, nonatomic) NSMutableArray *tempImagePool; // @synthesize tempImagePool=_tempImagePool;
- (void)statusBarShowOniOS10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

