//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, NSData, NSString, UIImage;

@protocol MMSightCameraViewControllerDelegate <NSObject>

@optional
- (NSString *)chatUserNameForSightStatistics;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(EditVideoAttr *)arg5;
- (void)onSightCameraCancel;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
@end

