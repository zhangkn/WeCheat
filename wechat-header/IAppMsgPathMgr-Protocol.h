//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IAppMsgPathMgr <NSObject>

@optional
+ (void)GetPathOfAppData:(NSString *)arg1 LocalID:(unsigned int)arg2 FileExt:(NSString *)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(NSString *)arg1 andMessageWrap:(CMessageWrap *)arg2 andAttachId:(NSString *)arg3 andAttachFileExt:(NSString *)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppDataByUserName:(NSString *)arg1 andMessageWrap:(CMessageWrap *)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(NSString *)arg1 LocalID:(unsigned int)arg2 AttachId:(NSString *)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataTemp:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDir:(NSString *)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppRemindAttach:(CMessageWrap *)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppThumb:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfMaskedAppThumb:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
@end

