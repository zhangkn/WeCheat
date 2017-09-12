//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSURL;
@protocol APAccessDelegate;

@interface APAccess : APBase <PBMessageObserverDelegate>
{
    NSURL *_thirdPartyUrl;
    id <APAccessDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancel;
- (void)dealloc;
@property(nonatomic) __weak id <APAccessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFail;
- (void)didSuccess;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 thirdPartyUrl:(id)arg3 delegate:(id)arg4;
- (void)onAPAccess:(id)arg1;
- (void)sendToWeixinSvrToAPAccess;
@property(retain, nonatomic) NSURL *thirdPartyUrl; // @synthesize thirdPartyUrl=_thirdPartyUrl;
- (void)start;

@end

