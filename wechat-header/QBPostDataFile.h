//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QBPostDataProtocol-Protocol.h"

@class NSInputStream, NSString;

@interface QBPostDataFile : NSObject <QBPostDataProtocol>
{
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    _Bool _dataReady;
    long long _randomString;
    unsigned long long _streamRead;
    NSInputStream *_fileInput;
    unsigned long long _totalLength;
    unsigned char _buffer[32768];
    int _dataPostType;
    NSString *_filePath;
    NSString *_name;
    NSString *_fileName;
    NSString *_fileType;
    unsigned long long _fileSize;
    double _lastModified;
}

- (void).cxx_destruct;
- (id)contentBoundaryString;
- (unsigned long long)contentBoundayStringLength;
- (id)contentData;
- (id)contentInfoString;
- (unsigned long long)contentInfoStringLength;
- (id)contentPath;
- (id)createInputStreamForPost;
@property(nonatomic) int dataPostType; // @synthesize dataPostType=_dataPostType;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
- (unsigned long long)dataSize;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSString *fileType; // @synthesize fileType=_fileType;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)finalPostData;
- (id)initWithName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (id)initWithString:(id)arg1;
@property(readonly) double lastModified; // @synthesize lastModified=_lastModified;
@property(readonly) NSString *name; // @synthesize name=_name;
@property long long randomString; // @synthesize randomString=_randomString;
- (void)setName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (_Bool)shouldUseStreamToSendData;
- (unsigned long long)totalLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

