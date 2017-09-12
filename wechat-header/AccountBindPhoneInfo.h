//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface AccountBindPhoneInfo : NSObject <NSCoding>
{
    NSString *m_nsTitle;
    NSString *m_nsDetail;
    unsigned int m_uiSafeRemindType;
    unsigned int m_uiMobileCanBeFoundShowPos;
    _Bool m_bForce;
}

- (void).cxx_destruct;
- (void)ParseFromStyle:(id)arg1;
- (void)ParseFromXml:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getHeadIcon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isMobileCanBeFoundShowInFillPhoneViewController;
@property(nonatomic) _Bool m_bForce; // @synthesize m_bForce;
@property(retain, nonatomic) NSString *m_nsDetail; // @synthesize m_nsDetail;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned int m_uiMobileCanBeFoundShowPos; // @synthesize m_uiMobileCanBeFoundShowPos;
@property(nonatomic) unsigned int m_uiSafeRemindType; // @synthesize m_uiSafeRemindType;

@end

