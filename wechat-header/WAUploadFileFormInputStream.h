//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSArray, NSError, NSString;

@interface WAUploadFileFormInputStream : NSInputStream
{
    NSArray *_arrFormBodyObject;
    unsigned long long _curObjectIndex;
    unsigned long long _curOffset;
    unsigned long long _contentLength;
    NSString *_boundary;
    unsigned long long streamStatus;
    NSError *streamError;
}

- (void).cxx_destruct;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (id)boundary;
- (void)close;
- (unsigned long long)contentLength;
- (void)dealloc;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (id)init;
- (void)nextBodyObject;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setStreamError:(id)arg1;
- (void)setStreamStatus:(unsigned long long)arg1;
- (void)setupWithFileFieldName:(id)arg1 filePath:(id)arg2 formFields:(id)arg3;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

