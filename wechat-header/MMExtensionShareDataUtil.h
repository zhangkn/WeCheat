//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionShareDataUtil : NSObject
{
}

+ (id)appGroupID;
+ (_Bool)clearAllValues;
+ (id)containerURL;
+ (id)getMessageBackgroundURLSessionIdentifierPrefix;
+ (id)getPathOfFavCompressImg:(id)arg1;
+ (id)getPathOfFavCompressImgDir;
+ (id)getPathOfFavDir;
+ (id)getPathOfFavFileTaskDir;
+ (id)getPathOfFavImgTaskDir;
+ (id)getPathOfFavThumbnalImg:(id)arg1;
+ (id)getPathOfFavThumbnalImgDir;
+ (id)getPathOfFavUrlTaskDir;
+ (id)getPathOfFavVideoTaskDir;
+ (id)getPathOfIDKeyReportDataDir;
+ (id)getPathOfMsgAppFileWithFileName:(id)arg1;
+ (id)getPathOfMsgAppThumbImageWithContentUrl:(id)arg1;
+ (id)getPathOfMsgCompressedVideWithVideoUrl:(id)arg1;
+ (id)getPathOfMsgFileDir;
+ (id)getPathOfMsgImageDir;
+ (id)getPathOfMsgNormalImageWithImageUrl:(id)arg1;
+ (id)getPathOfMsgThumbImageWithImageUrl:(id)arg1;
+ (id)getPathOfMsgVideoDir;
+ (id)getPathOfMsgVideoThumbnailWithVideoUrl:(id)arg1;
+ (id)getPathOfShareExtensionExtraSessionData;
+ (id)getPathOfShareExtensionExtraSessionUpdateTime;
+ (id)getPathOfShareExtensionTransmitData;
+ (id)getPathOfVideoCompressDir;
+ (id)getPathOfVideoTempCacheDir;
+ (id)getPathOfVideoTempCacheWithVideoUrl:(id)arg1;
+ (id)getShareExtensionAppGroupRootDir;
+ (id)getShareExtensionMessageFailSessionDir;
+ (id)getShareExtensionMessageFailSessionPathWithFileName:(id)arg1;
+ (id)getShareExtensionMessageTaskDataDir;
+ (id)getShareExtensionMessageTaskDataPathWithFileName:(id)arg1;
+ (id)getShareExtensionMessageTaskIdDir;
+ (id)getShareExtensionMessageTaskIdPathWithFileName:(id)arg1;
+ (id)getShareExtensionPostDataCachePathWithFileName:(id)arg1;
+ (id)getShareExtensionShareSessionDataPath;
+ (id)getShareExtensionShareSessionDir;
+ (id)getShareExtensionShareSessionHeadImgDir;
+ (id)getShareExtensionShareSessionHeadImgWithFileName:(id)arg1;
+ (id)getShareExtensionTimelineFailTaskDataDir;
+ (id)getShareExtensionTimelineFailTaskDataPathWithFileName:(id)arg1;
+ (id)getShareExtensionTimelineTaskDataDir;
+ (id)getShareExtensionTimelineTaskDataPathWithFileName:(id)arg1;
+ (id)getTimelineBackgroundURLSessionIdentifierPrefix;
+ (_Bool)isTaskHadHandled:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (void)removeTaskAfterHandle:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (void)saveAppCdnInfo:(id)arg1;
+ (void)saveCdnDnsInfo:(id)arg1;
+ (void)saveCgiHost:(id)arg1;
+ (void)saveCryptUin:(unsigned int)arg1;
+ (void)saveCurrentNickname:(id)arg1;
+ (void)saveCurrentUsername:(id)arg1;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveDeviceType:(id)arg1;
+ (void)saveExtensionKey:(id)arg1;
+ (void)saveHeadDeviceType:(unsigned short)arg1;
+ (void)saveMsgImgQuality:(double)arg1;
+ (void)saveOSType:(id)arg1;
+ (void)saveServerID:(id)arg1;
+ (void)saveSnsCdnInfo:(id)arg1;
+ (void)saveSnsImgQuality:(double)arg1;
+ (void)saveVersion:(unsigned int)arg1;
+ (void)setTaskCanBeHandle:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)shareExtensionLogFilePath;
+ (id)shareExtensionLogFolderPath;
+ (_Bool)syncUserDefaultData;
+ (id)userDefaults;

@end

