//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WCDevice;

@interface WCDeviceMessage : NSObject
{
    WCDevice *m_device;
    unsigned long long m_sessionID;
    NSData *m_data;
    NSData *m_sessionBuffer;
    unsigned int m_type;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(retain, nonatomic) WCDevice *m_device; // @synthesize m_device;
@property(retain, nonatomic) NSData *m_sessionBuffer; // @synthesize m_sessionBuffer;
@property(nonatomic) unsigned long long m_sessionID; // @synthesize m_sessionID;
@property(nonatomic) unsigned int m_type; // @synthesize m_type;

@end

