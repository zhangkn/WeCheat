//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SimpleImgInfo.h"

@class CMessageWrap, NSString;

@interface SimpleMsgInfo : SimpleImgInfo
{
    unsigned int m_uiMsgLocalID;
    unsigned int m_uiMsgType;
    NSString *_m_nsChatName;
    CMessageWrap *_m_msg;
}

- (void).cxx_destruct;
- (id)getDefaultImg;
- (id)getIconName;
- (id)getImgPath;
- (id)getMsg;
- (id)getSquareImgDir;
- (id)getThumbOfAppMessage:(id)arg1;
- (id)getTitle;
- (unsigned int)getVideoTime;
- (id)init;
- (_Bool)isAppFileMsg;
- (_Bool)isAppMusicMsg;
- (_Bool)isAppUrlMsg;
- (_Bool)isAppVideoMsg;
- (_Bool)isFileMsg;
- (_Bool)isImgMsg;
- (_Bool)isVideoMsg;
@property(retain, nonatomic) CMessageWrap *m_msg; // @synthesize m_msg=_m_msg;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(readonly, nonatomic) unsigned int m_uiMsgLocalID; // @synthesize m_uiMsgLocalID;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
- (void)setM_strMsgLocalID:(id)arg1;

@end

