//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUtility : NSObject
{
}

+ (unsigned int)ChatNotifyC2S:(unsigned int)arg1;
+ (unsigned int)ChatNotifyS2C:(unsigned int)arg1;
+ (_Bool)CheckSyncMediaNote:(id)arg1;
+ (unsigned int)CheckUsrNameType:(id)arg1;
+ (void)ClearAllWebViewCookies;
+ (id)DecodeBase64:(id)arg1;
+ (int)DecodePack:(id)arg1 Output:(id)arg2 DESKey:(char *)arg3 KeyLen:(unsigned int)arg4;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)DoDns:(id)arg1;
+ (id)DoNewDns:(id)arg1;
+ (id)DoNewDns:(id)arg1 DnsType:(unsigned int *)arg2;
+ (id)DoNewDnsForSns:(id)arg1 DnsType:(unsigned int *)arg2 IsOldData:(_Bool)arg3;
+ (id)EncodeBase64:(id)arg1;
+ (id)EncodeWithBase64:(id)arg1;
+ (unsigned int)GenID;
+ (unsigned int)GenSeq;
+ (id)GetClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (id)GetDNSServers;
+ (id)GetDocPath;
+ (id)GetDownloadPathOfEmoticonPackage:(id)arg1;
+ (id)GetEmoticonLinkPid:(id)arg1;
+ (id)GetExcutablePath;
+ (id)GetHttpEndData;
+ (id)GetKeyValueFromPB:(id)arg1;
+ (id)GetLibraryCachePath;
+ (id)GetMMUserAgent;
+ (basic_string_a490aa4c)GetMd5StrOfLocalUsr;
+ (basic_string_a490aa4c)GetMd5StrOfUsr:(id)arg1;
+ (id)GetMd5StrsOfOtherUsrs;
+ (id)GetMimeTypeByFileExt:(id)arg1;
+ (long long)GetNetWorkReachable;
+ (id)GetPathOfAlbumCoverRootPath;
+ (id)GetPathOfBakChat;
+ (id)GetPathOfCacheLocalUsrDir;
+ (id)GetPathOfDraftUsrDir;
+ (id)GetPathOfFileTempPath;
+ (id)GetPathOfJSApiLocalDataBaseFile;
+ (id)GetPathOfJSApiLocalDataFile:(id)arg1 CurrentUrl:(id)arg2;
+ (id)GetPathOfLocalUsrDir;
+ (id)GetPathOfLocalUsrDirAsync;
+ (id)GetPathOfLocationCache;
+ (id)GetPathOfLyricsRootPath;
+ (id)GetPathOfMaskedMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMaskedMesVideoThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMassShortVideoDir:(id)arg1 andVideoName:(id)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudioDir:(id)arg1;
+ (id)GetPathOfMesAudioDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImg:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImgTemp:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImg:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgDir:(id)arg1;
+ (id)GetPathOfMesImgDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesImgTemp:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesOpenDataDir:(id)arg1;
+ (id)GetPathOfMesOpenDataDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesSettingDir;
+ (id)GetPathOfMesVideo:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesVideoDir:(id)arg1;
+ (id)GetPathOfMesVideoDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesVideoThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMiddleImgForSender:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfPackage:(id)arg1;
+ (id)GetPathOfProductDetail;
+ (id)GetPathOfProductItem:(id)arg1;
+ (id)GetPathOfSHakePeopleStorage;
+ (id)GetPathOfShakeBeaconStorage;
+ (id)GetPathOfShakeBeaconStoragePB;
+ (id)GetPathOfShakeBgImg;
+ (id)GetPathOfShakeBgImgTmp:(unsigned int)arg1;
+ (id)GetPathOfShakeBkgUp;
+ (id)GetPathOfShakeMusicStorage;
+ (id)GetPathOfShakeMusicStoragePB;
+ (id)GetPathOfShakePeopleStoragePB;
+ (id)GetPathOfShakeTvMsgStorage;
+ (id)GetPathOfShakeTvStorage;
+ (id)GetPathOfShakeTvStoragePB;
+ (id)GetPathOfSnsMusicStoragePB;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfSystemAuthorization;
+ (id)GetPathOfTempCacheVideo;
+ (id)GetPathOfTempPackage:(id)arg1;
+ (id)GetPathOfURLCache;
+ (id)GetPathOfUsrChatBKSetting;
+ (id)GetPathOfUsrShakeImg:(id)arg1;
+ (id)GetPathOfUsrWCBKSetting;
+ (id)GetPathOfWCAddressBaseFile;
+ (id)GetPathOfWCMallBaseFile;
+ (id)GetPathOfWCPayBaseFile;
+ (id)GetPathOfWCRedEnvelopesBaseFile;
+ (id)GetPathOfWeSport;
+ (id)GetPathOfWebMesAudioTrans:(id)arg1 LocalID:(id)arg2 DocPath:(id)arg3;
+ (id)GetRandomKey;
+ (id)GetRandomKeyWithSalt:(id)arg1;
+ (id)GetRandomMD5;
+ (id)GetRandomPathOfTrash;
+ (id)GetRandomUUID;
+ (id)GetRootPathOfTrash;
+ (id)GetSystemCachePath;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)GetTempPathOfDocVideoPath:(id)arg1 ensureCreate:(_Bool)arg2;
+ (id)GetTempPathOfMesVideo:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetThumbPathOfPackage:(id)arg1;
+ (id)GetTmpPath;
+ (id)GetUUIDNew;
+ (id)GetUserAgentSuffix;
+ (id)GetUserAlbumRootDir;
+ (unsigned int)GetVersion;
+ (unsigned int)GetVersionFromPList;
+ (unsigned int)IPStringToInt:(id)arg1;
+ (void)Initial;
+ (id)IntToIPString:(unsigned int)arg1;
+ (_Bool)IsCurLanguageChineseTraditional;
+ (_Bool)IsFacebookAuthName:(id)arg1;
+ (_Bool)IsURLFromAppStore:(id)arg1;
+ (struct CLLocationCoordinate2D)MakeLocationCoordinate2D:(double)arg1 andLongitude:(double)arg2;
+ (id)MergeSyncBuffer:(id)arg1 NewBuffer:(id)arg2;
+ (id)NSStringToUTF8Hex:(id)arg1;
+ (_Bool)NeedNewSync:(unsigned int)arg1;
+ (char *)NewStrFromNSStr:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)ParseFullVersionString:(unsigned int)arg1;
+ (void)ParseVersion:(unsigned int)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4;
+ (id)ParseVersionString:(unsigned int)arg1;
+ (void)PrintClientInfo;
+ (id)ReplaceClientVersion:(id)arg1;
+ (id)ReplaceInvalidChar:(id)arg1;
+ (id)ReplaceSingleQuote:(id)arg1;
+ (void)ReportFailIPToNewDNS:(id)arg1;
+ (id)SafeUnarchive:(id)arg1;
+ (id)SafeUnarchive:(id)arg1 hasError:(_Bool *)arg2;
+ (id)SafeUnarchiveFromData:(id)arg1;
+ (id)SafeUtf8WithCString:(const char *)arg1;
+ (_Bool)SetDoNotBackupForPath:(id)arg1;
+ (void)SetLocalUsrNameMD5:(id)arg1;
+ (void)SetNewVersion:(unsigned int)arg1;
+ (void)SetPathOfLocalUsrDir;
+ (id)SockAddrToIPV4String:(struct sockaddr_in *)arg1;
+ (id)SyncBufferToString:(id)arg1;
+ (id)UTF8HexToNSString:(id)arg1;
+ (void)UpdateUserAgent;
+ (id)componentsSeparated:(id)arg1 byString:(id)arg2;
+ (_Bool)containOnlyLetterOrDigit:(id)arg1;
+ (id)dumpSqlString:(id)arg1;
+ (id)ellipseImageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)filterAllWhiteSpaceAndNewLineString:(id)arg1;
+ (id)filterString:(id)arg1;
+ (id)filterWhiteSpaceAndNewLineString:(id)arg1;
+ (unsigned int)genCurrentTime;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned int)genServerCurrentTime;
+ (id)genWebpUrlWithOriUrl:(id)arg1;
+ (unsigned int)getCrc32ClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (id)getCurSystemLanguage;
+ (id)getDomainName:(id)arg1;
+ (id)getFavIconImageByFileExt:(id)arg1;
+ (id)getFavIconNameByFileExt:(id)arg1;
+ (int)getFileTypeByFileExt:(id)arg1;
+ (int)getGeneralNetworkType;
+ (id)getIconImageByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)getIconNameByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)getMatchFullPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (id)getMatchShortPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (id)getPathOfMsgVcodec2HDImg:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2Img:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2ImgThumb:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfMsgVcodec2NormalImg:(id)arg1 localID:(unsigned int)arg2 docPath:(id)arg3;
+ (id)getPathOfVcodec2ImageDir:(id)arg1;
+ (id)getPathOfVcodec2ImageDir:(id)arg1 docPath:(id)arg2;
+ (id)getPathOfVcodec2ToJpgTmpDir:(id)arg1 docPath:(id)arg2;
+ (unsigned int)getRegSrcVersionNum;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)getSystemTimeZoneString;
+ (int)getWebpNetworkType;
+ (_Bool)hasPinYinPrefix:(id)arg1 searchText:(id)arg2 options:(unsigned long long)arg3;
+ (id)hashForString:(id)arg1;
+ (id)hashPathForString:(id)arg1;
+ (id)imageBorderFromColor:(id)arg1 size:(struct CGSize)arg2 conerSize:(double)arg3;
+ (id)imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (int)imageTypeForImageData:(id)arg1;
+ (_Bool)is64BitEnvironment;
+ (_Bool)isBeingDebugged;
+ (_Bool)isEnglishLetter:(unsigned short)arg1;
+ (_Bool)isEnglishWord:(id)arg1;
+ (_Bool)isEnterpriseSingleUsrName:(id)arg1;
+ (_Bool)isEnterpriseUsrName:(id)arg1;
+ (_Bool)isGIFFile:(id)arg1;
+ (_Bool)isLaunchBeforeDeviceFirstUnlock;
+ (_Bool)isLeadSurrogates:(unsigned short)arg1;
+ (_Bool)isNeedUseWebpFormatUrl:(id)arg1;
+ (_Bool)isNumber:(id)arg1;
+ (_Bool)isTrailSurrogates:(unsigned short)arg1;
+ (_Bool)isValidWeChatID:(id)arg1;
+ (id)md5OfString:(id)arg1;
+ (id)obfuscate:(id)arg1 withKey:(id)arg2;
+ (id)snapshotForUIView:(id)arg1;
+ (id)stringOfFriendlySize:(double)arg1 maxFractionDigits:(unsigned long long)arg2;
+ (id)stringOfFriendlySizeForApple:(double)arg1 maxFractionDigits:(unsigned long long)arg2;
+ (id)trimString:(id)arg1;

@end
