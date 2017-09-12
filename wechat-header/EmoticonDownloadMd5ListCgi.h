//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol EmoticonDownloadMd5ListCgiDelegate;

@interface EmoticonDownloadMd5ListCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    unsigned int m_eventId;
    unsigned int m_endFlag;
    unsigned int m_currentIndex;
    id <EmoticonDownloadMd5ListCgiDelegate> m_delegate;
    NSMutableArray *m_md5List;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)internalRequest;
- (_Bool)isActive;
@property(nonatomic) unsigned int m_currentIndex; // @synthesize m_currentIndex;
@property(nonatomic) __weak id <EmoticonDownloadMd5ListCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_endFlag; // @synthesize m_endFlag;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
- (void)startRequest;

@end

