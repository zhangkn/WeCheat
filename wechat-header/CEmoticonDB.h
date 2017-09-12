//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB;

@interface CEmoticonDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (_Bool)AddEmoticon:(id)arg1 Type:(unsigned int)arg2;
- (_Bool)AddEmoticon:(id)arg1 Type:(unsigned int)arg2 ProductId:(id)arg3 ExtInfo:(id)arg4 ExtFlag:(unsigned int)arg5 IndexInPack:(id)arg6;
- (_Bool)DelRowInEmoticonUpload:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)DeleteEmoticonByMD5:(id)arg1;
- (unsigned int)GetCountOfEmoticonDownload;
- (unsigned int)GetCountOfEmoticonUpload;
- (unsigned int)GetCountOfEmoticonUpload:(id)arg1;
- (id)GetEmoticonList;
- (id)GetFirstEmoticonUploadInfoFromTable;
- (void)InitDB:(id)arg1;
- (_Bool)InsertMessageInEmoticonUpload:(id)arg1;
- (_Bool)IsEmoticonExist:(id)arg1;
- (_Bool)IsEmoticonExistInCustomListByMd5:(id)arg1;
- (_Bool)IsInEmoticonUploadTable:(id)arg1 LocalID:(unsigned int)arg2;
- (void)ResetEmoticon;
- (void)ResetEmoticonUpload;
- (_Bool)UpdateEmoticon:(id)arg1 ExtInfo:(id)arg2;
- (void)convertEmotcion:(id)arg1 fromDBObject:(id)arg2 isFullField:(_Bool)arg3;
- (id)deleteEmoticonByPid:(id)arg1;
- (void)fillEmoticonListQueryPropery:(list_2812bee2 *)arg1 isFullField:(_Bool)arg2;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (id)getSelfEmoticonList;
- (id)init;
- (_Bool)insertEmoticonWithMD5:(id)arg1 type:(unsigned int)arg2 productId:(id)arg3 extInfo:(id)arg4 extFlag:(unsigned int)arg5 indexInPack:(id)arg6;
- (id)lastestSentMd5InMd5list:(id)arg1;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (id)msgWrapsInEmoticonDownloadTableAfterCreateTime:(unsigned int)arg1;
- (_Bool)updateEmoticon:(id)arg1 extFlag:(unsigned int)arg2 needOverWrite:(_Bool)arg3;
- (_Bool)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (_Bool)updateEmoticon:(id)arg1 productId:(id)arg2 extInfo:(id)arg3 extFlag:(id)arg4 indexInPack:(id)arg5;
- (_Bool)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;

@end

