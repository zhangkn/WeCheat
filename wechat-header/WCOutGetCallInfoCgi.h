//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCOutGetCallInfoDelegate;

@interface WCOutGetCallInfoCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID;
    id <WCOutGetCallInfoDelegate> _delegate;
}

+ (id)instanceWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) __weak id <WCOutGetCallInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doCgi;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;

@end

