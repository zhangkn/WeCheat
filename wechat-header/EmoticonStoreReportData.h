//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface EmoticonStoreReportData : MMObject
{
}

+ (void)ReportCellSetWithId:(unsigned int)arg1 Name:(id)arg2 SetType:(unsigned int)arg3 Action:(unsigned long long)arg4;
+ (void)ReportClickCollectionCellForReqType:(unsigned int)arg1;
+ (void)ReportClickEmoticonFromDesc:(id)arg1 expId:(id)arg2 index:(unsigned int)arg3 md5:(id)arg4 totalCount:(unsigned long long)arg5;
+ (void)ReportClickEmoticonNew;
+ (void)ReportClickEmoticonShareFromMessage:(id)arg1;
+ (void)ReportClickEmoticonShareFromTimeline:(id)arg1;
+ (void)ReportClickNowUseButton:(id)arg1;
+ (void)ReportDesignerEmojiTipsClickAddEmoticonWithScene:(unsigned int)arg1 Md5:(id)arg2 reportInfo:(id)arg3;
+ (void)ReportDesignerEmojiTipsClickSendEmoticonWithScene:(unsigned int)arg1 Md5:(id)arg2 reportInfo:(id)arg3;
+ (void)ReportDesignerEmojiTipsShowTipsWithScene:(unsigned int)arg1 Md5:(id)arg2 reportInfo:(id)arg3;
+ (void)ReportDesignerEmojiTipsWithScene:(unsigned int)arg1 action:(int)arg2 Md5:(id)arg3 reportInfo:(id)arg4;
+ (void)ReportDoSearchForKeyword:(id)arg1 InScene:(unsigned long long)arg2;
+ (void)ReportEmoticonDesignerPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDetailPageExposure:(id)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4 reportInfo:(id)arg5;
+ (void)ReportEmoticonShareToFriends:(id)arg1;
+ (void)ReportEmoticonShareToTimeline:(id)arg1;
+ (void)ReportEmoticonTopicPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportOpenPageFromWebviewWithPageType:(unsigned long long)arg1 AndPid:(id)arg2 DesignerId:(id)arg3 ReqType:(unsigned int)arg4 Version:(unsigned int)arg5 searchId:(unsigned long long)arg6;
+ (void)ReportRecentHotItemWithPid:(id)arg1 Action:(unsigned long long)arg2;
+ (void)ReportRewardForPid:(id)arg1 scene:(unsigned long long)arg2 extranceScene:(long long)arg3 action:(unsigned long long)arg4;
+ (void)ReportRewardTipsAction:(unsigned long long)arg1 ForPid:(id)arg2;
+ (void)ReportSendEmoticonFromNowUseButton:(id)arg1;
+ (void)ReportShowDescToEmoticon:(id)arg1 expId:(id)arg2 totalCount:(unsigned long long)arg3;
+ (void)ReportStartSearchInScene:(unsigned long long)arg1;
+ (void)changeEmoticonBoardIndex;
+ (void)changeToolViewStateToNoneEmoticon;
+ (void)markReportSendEmoticonFromNowUseButton;
+ (id)safeReportString:(id)arg1;

@end

