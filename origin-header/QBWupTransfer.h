//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QBWupTransfer : NSObject
{
    NSObject *_requestLock;
    _Bool _haveRetryRequest;
    _Bool _needEncrpyt;
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (void)addPostDataWithZipAndEncryption:(id)arg1 withData:(id)arg2 forServant:(id)arg3 withAESKey:(id)arg4;
- (id)decodeResponseData:(id)arg1;
- (id)encodeRequestData:(id)arg1 encryptKey:(id)arg2;
- (id)init;
- (id)sendUniPacket:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (id)sendUniPackets:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (id)uniPacketFromHttpResponseData:(id)arg1 withRequestHeaders:(id)arg2 withAESKey:(id)arg3;

@end

