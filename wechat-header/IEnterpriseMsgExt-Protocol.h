//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap, NSArray, NSString;

@protocol IEnterpriseMsgExt

@optional
- (void)OnAddEnterpriseMsg:(NSString *)arg1 Brand:(NSString *)arg2 WrapMsg:(CMessageWrap *)arg3;
- (void)OnBatchAddEnterpriseMsg:(NSArray *)arg1 Brand:(NSString *)arg2;
- (void)OnBeginDownloadAppData:(CMessageWrap *)arg1 Brand:(NSString *)arg2;
- (void)OnDelMsg:(NSString *)arg1 Brand:(NSString *)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(NSString *)arg1 Brand:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3;
- (void)OnModEnterpriseMsg:(NSString *)arg1 Brand:(NSString *)arg2 WrapMsg:(CMessageWrap *)arg3;
- (void)OnSyncReadMsg:(NSString *)arg1 Brand:(NSString *)arg2;
- (void)OnUnReadEnterpriseMsgCountChange:(NSString *)arg1 Brand:(NSString *)arg2;
@end

