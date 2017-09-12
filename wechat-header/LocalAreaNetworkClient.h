//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "C2ObjcClientCallBackExt-Protocol.h"

@class MMTimer, NSData, NSDate, NSString, WXGSpeedFilter;
@protocol LocalAreaNetworkClientDelegate;

@interface LocalAreaNetworkClient : MMObject <C2ObjcClientCallBackExt>
{
    unsigned long long m_totalReciveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    NSDate *m_realSendStartDate;
    NSDate *m_sendStartDate;
    NSDate *m_reciveStartDate;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    _Bool m_bFirstPacket;
    _Bool m_bFirstPacketOK;
    MMTimer *m_firstPacketTimer;
    NSData *m_firstPacketData;
    unsigned short _server_port;
    id <LocalAreaNetworkClientDelegate> _delegate;
    NSString *_server_ip;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <LocalAreaNetworkClientDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getClientOpenTime;
- (float)getClientRecvSpeed;
- (float)getClientSendSpeed;
- (unsigned long long)getTotalRecvLength;
- (unsigned long long)getTotalSendLength;
- (id)init;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (void)p_checkFirstPacket;
- (void)reset;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
- (void)stopClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

