//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class MMUIWindow, NSString, WCNetworkMediaPlayer, WCNetworkMediaStreamVideoInfo;

@interface WebviewJSEventHandler_streamingVideoPlay : WebviewJSEventHandlerBase <WCNetworkMediaPlayerDelegate, MMWebViewDelegate>
{
    MMUIWindow *m_fullScreenWindow;
    WCNetworkMediaPlayer *m_player;
    WCNetworkMediaStreamVideoInfo *m_streamVideoInfo;
    _Bool m_needReportData;
    _Bool m_needHiddenMoreMenu;
}

- (void).cxx_destruct;
- (void)exitPlayWindow;
- (id)getClickLogWithClickType:(unsigned int)arg1;
- (id)getPlayLogWithPlayType:(unsigned int)arg1;
- (id)getSSIDAndBSSID;
- (id)getStatExtStr;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)logVideoClick:(unsigned int)arg1;
- (void)logVideoPlay:(unsigned int)arg1;
- (_Bool)needHiddenMoreMenu;
- (void)notifyWebViewReturn;
- (void)onCancelShareVideoToFriend;
- (void)onClickFavVideoMenu;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onEndPlayer;
- (void)onPausePlayer;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onStartPlayer;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

