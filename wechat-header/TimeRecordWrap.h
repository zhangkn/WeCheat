//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TimeRecordWrap : NSObject
{
    struct timeval m_msCurTime;
}

- (id)initWithTime:(struct timeval)arg1;
@property(nonatomic) struct timeval m_msCurTime; // @synthesize m_msCurTime;

@end

