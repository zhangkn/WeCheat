//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IWCCardPkgExt-Protocol.h"

@class NSMutableArray, NSString, NSTimer;

@interface WCCardDynamicCodeGenerator : MMObject <IWCCardPkgExt>
{
    NSString *_nsCardId;
    NSMutableArray *_arrCodes;
    double _codeExpiredTime;
    unsigned int _uiCountOfNeedRefresh;
    NSTimer *_oCheckExpireTimer;
    _Bool _bFetchingCode;
    unsigned int _uiRefreshInteval;
    unsigned int _refreshInteval;
    CDUnknownBlockType _getCodeBlock;
}

- (void).cxx_destruct;
- (_Bool)bCodesExpired;
- (_Bool)bHasAvailableCode;
- (void)clearAllCode;
- (void)dealloc;
- (void)fetchCodeFromSvr;
- (id)getCode:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType getCodeBlock; // @synthesize getCodeBlock=_getCodeBlock;
- (id)initWithCardId:(id)arg1;
- (void)onGetSerialNumberData:(id)arg1 ErrCode:(int)arg2;
@property(nonatomic) unsigned int refreshInteval; // @synthesize refreshInteval=_refreshInteval;
- (id)takeOneCode;
- (void)tryFetchCodeIfLackCode;
@property(readonly, nonatomic) unsigned int uiRefreshInteval; // @synthesize uiRefreshInteval=_uiRefreshInteval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
