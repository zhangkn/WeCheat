//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface ShowRatingAchive : NSObject <NSCoding>
{
    unsigned int m_uiLastShowedVersion;
    NSDate *m_dtFirstRecieveTime;
    unsigned int m_uiShowType;
    unsigned int m_uiWaitDays;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *m_dtFirstRecieveTime; // @synthesize m_dtFirstRecieveTime;
@property(nonatomic) unsigned int m_uiLastShowedVersion; // @synthesize m_uiLastShowedVersion;
@property(nonatomic) unsigned int m_uiShowType; // @synthesize m_uiShowType;
@property(nonatomic) unsigned int m_uiWaitDays; // @synthesize m_uiWaitDays;

@end
