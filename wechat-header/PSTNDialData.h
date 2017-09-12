//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSData, NSMutableArray, NSString;

@interface PSTNDialData : NSObject
{
    int mRoomId;
    int mRoomMemberId;
    int mCallType;
    int mLinkDisconnectHbInterval;
    int mLinkDisconnectHbCnt;
    int mInviteRet;
    int mIsGotRing;
    int mIsGotAnswer;
    int mIsGotShutdown;
    int mIsSendCancel;
    int mIsSendShutdown;
    int mAbnormalExitCode;
    int mEncryptLength;
    int mSwitchTcpPktCnt;
    int mEncryptStrategy;
    unsigned int mKeypadNumberClickCount;
    unsigned int mCallFlag;
    long long mRoomKey;
    CContact *mContact;
    NSString *mCaller;
    NSString *mPhoneNum;
    NSString *mRetPhoneNumber;
    long long mCallSeq;
    NSMutableArray *mRelaySvrIp;
    NSMutableArray *mRelaySvrPort;
    NSMutableArray *mPunchSvrIp;
    NSMutableArray *mPunchSvrPort;
    NSMutableArray *mRelayTcpSvrIp;
    NSMutableArray *mRelayTcpSvrPort;
    unsigned long long mInviteTime;
    unsigned long long mRingRecvTime;
    unsigned long long mAnswerRecvTime;
    unsigned long long mStopTalkTime;
    unsigned long long mConnectTime;
    unsigned long long mCancelTime;
    NSData *mClientSigns;
    NSString *mCountryCode;
    NSData *mEncryptKey;
}

- (void).cxx_destruct;
- (void)SetRoomId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
- (void)SetRoomMemberId:(int)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isValidKey;
@property(nonatomic) int mAbnormalExitCode; // @synthesize mAbnormalExitCode;
@property(nonatomic) unsigned long long mAnswerRecvTime; // @synthesize mAnswerRecvTime;
@property(nonatomic) unsigned int mCallFlag; // @synthesize mCallFlag;
@property(nonatomic) long long mCallSeq; // @synthesize mCallSeq;
@property(nonatomic) int mCallType; // @synthesize mCallType;
@property(copy, nonatomic) NSString *mCaller; // @synthesize mCaller;
@property(nonatomic) unsigned long long mCancelTime; // @synthesize mCancelTime;
@property(retain, nonatomic) NSData *mClientSigns; // @synthesize mClientSigns;
@property(nonatomic) unsigned long long mConnectTime; // @synthesize mConnectTime;
@property(retain, nonatomic) CContact *mContact; // @synthesize mContact;
@property(retain, nonatomic) NSString *mCountryCode; // @synthesize mCountryCode;
@property(retain, nonatomic) NSData *mEncryptKey; // @synthesize mEncryptKey;
@property(nonatomic) int mEncryptLength; // @synthesize mEncryptLength;
@property(nonatomic) int mEncryptStrategy; // @synthesize mEncryptStrategy;
@property(nonatomic) int mInviteRet; // @synthesize mInviteRet;
@property(nonatomic) unsigned long long mInviteTime; // @synthesize mInviteTime;
@property(nonatomic) int mIsGotAnswer; // @synthesize mIsGotAnswer;
@property(nonatomic) int mIsGotRing; // @synthesize mIsGotRing;
@property(nonatomic) int mIsGotShutdown; // @synthesize mIsGotShutdown;
@property(nonatomic) int mIsSendCancel; // @synthesize mIsSendCancel;
@property(nonatomic) int mIsSendShutdown; // @synthesize mIsSendShutdown;
@property(nonatomic) unsigned int mKeypadNumberClickCount; // @synthesize mKeypadNumberClickCount;
@property(nonatomic) int mLinkDisconnectHbCnt; // @synthesize mLinkDisconnectHbCnt;
@property(nonatomic) int mLinkDisconnectHbInterval; // @synthesize mLinkDisconnectHbInterval;
@property(copy, nonatomic) NSString *mPhoneNum; // @synthesize mPhoneNum;
@property(retain, nonatomic) NSMutableArray *mPunchSvrIp; // @synthesize mPunchSvrIp;
@property(retain, nonatomic) NSMutableArray *mPunchSvrPort; // @synthesize mPunchSvrPort;
@property(retain, nonatomic) NSMutableArray *mRelaySvrIp; // @synthesize mRelaySvrIp;
@property(retain, nonatomic) NSMutableArray *mRelaySvrPort; // @synthesize mRelaySvrPort;
@property(retain, nonatomic) NSMutableArray *mRelayTcpSvrIp; // @synthesize mRelayTcpSvrIp;
@property(retain, nonatomic) NSMutableArray *mRelayTcpSvrPort; // @synthesize mRelayTcpSvrPort;
@property(copy, nonatomic) NSString *mRetPhoneNumber; // @synthesize mRetPhoneNumber;
@property(nonatomic) unsigned long long mRingRecvTime; // @synthesize mRingRecvTime;
@property(nonatomic) int mRoomId; // @synthesize mRoomId;
@property(nonatomic) long long mRoomKey; // @synthesize mRoomKey;
@property(nonatomic) int mRoomMemberId; // @synthesize mRoomMemberId;
@property(nonatomic) unsigned long long mStopTalkTime; // @synthesize mStopTalkTime;
@property(nonatomic) int mSwitchTcpPktCnt; // @synthesize mSwitchTcpPktCnt;
- (void)reset;

@end

