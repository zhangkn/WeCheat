//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayOfflinePayFreezeMessageStruct : NSObject <NSCoding>
{
    _Bool m_bFreezeOfflinePay;
    unsigned int m_uiFreezeOfflinePayType;
    NSString *m_nsFreezeOfflinePayMessage;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_bFreezeOfflinePay; // @synthesize m_bFreezeOfflinePay;
@property(retain, nonatomic) NSString *m_nsFreezeOfflinePayMessage; // @synthesize m_nsFreezeOfflinePayMessage;
@property(nonatomic) unsigned int m_uiFreezeOfflinePayType; // @synthesize m_uiFreezeOfflinePayType;

@end

