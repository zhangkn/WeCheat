//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ScanQRCodeUrlPrefixRule : NSObject
{
    NSMutableArray *_m_handlerArray;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 scene:(int)arg2 sourceType:(unsigned int)arg3 sourceInfo:(id)arg4;
@property(retain, nonatomic) NSMutableArray *m_handlerArray; // @synthesize m_handlerArray=_m_handlerArray;
- (void)reportHandleCount;
- (_Bool)shouldHandleUrl:(id)arg1;

@end

