//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMsgExt-Protocol.h"

@class WSRedPointCtrlInfo;

@interface WebSearchRedotMgr : NSObject <IMsgExt>
{
    WSRedPointCtrlInfo *_ctrlInfo;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)clearFFBrowseRedot;
- (void)clearFFSearchRedot;
- (void)dealloc;
- (id)init;
- (_Bool)isCtrlInfoValid;
- (void)loadData;
- (void)onServiceReloadData;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (_Bool)shouldShowFFBrowseRedot;
- (_Bool)shouldShowFFSearchRedot;
- (_Bool)shouldShowFindFriendTabRedot;

@end

