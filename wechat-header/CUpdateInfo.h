//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CUpdateInfo : NSObject <NSCoding>
{
    _Bool m_bShowInSetting;
    _Bool m_bShowInTab;
    _Bool m_bSysNoticeShowInTab;
    unsigned int m_uiNewVersion;
    unsigned int m_uiLastShowAlertTime;
    unsigned int m_uiNewVersionUpdateTime;
    unsigned int m_uiSysNoticeVersion;
    unsigned int m_uiSysNoticeCount;
    NSString *m_nsDescription;
}

+ (void)updateSysNotice:(id)arg1;
- (void).cxx_destruct;
- (void)copyFromUpdateInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_bShowInSetting; // @synthesize m_bShowInSetting;
@property(nonatomic) _Bool m_bShowInTab; // @synthesize m_bShowInTab;
@property(nonatomic) _Bool m_bSysNoticeShowInTab; // @synthesize m_bSysNoticeShowInTab;
@property(copy, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(nonatomic) unsigned int m_uiLastShowAlertTime; // @synthesize m_uiLastShowAlertTime;
@property(nonatomic) unsigned int m_uiNewVersion; // @synthesize m_uiNewVersion;
@property(nonatomic) unsigned int m_uiNewVersionUpdateTime; // @synthesize m_uiNewVersionUpdateTime;
@property(nonatomic) unsigned int m_uiSysNoticeCount; // @synthesize m_uiSysNoticeCount;
@property(nonatomic) unsigned int m_uiSysNoticeVersion; // @synthesize m_uiSysNoticeVersion;

@end

