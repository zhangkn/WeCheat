//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CNoDisturbInfo : NSObject <NSCoding>
{
    _Bool m_bNightSetting;
    unsigned int m_uiNightBeginTime;
    unsigned int m_uiNightEndTime;
    _Bool m_bAllDaySetting;
    unsigned int m_uiAllDayBeginTime;
    unsigned int m_uiAllDayEndTime;
}

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_bAllDaySetting; // @synthesize m_bAllDaySetting;
@property(nonatomic) _Bool m_bNightSetting; // @synthesize m_bNightSetting;
@property(nonatomic) unsigned int m_uiAllDayBeginTime; // @synthesize m_uiAllDayBeginTime;
@property(nonatomic) unsigned int m_uiAllDayEndTime; // @synthesize m_uiAllDayEndTime;
@property(nonatomic) unsigned int m_uiNightBeginTime; // @synthesize m_uiNightBeginTime;
@property(nonatomic) unsigned int m_uiNightEndTime; // @synthesize m_uiNightEndTime;
- (void)preInit;

@end

