//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface H5VideoPlayInfo : MMObject
{
    NSString *_videoUrl;
    NSString *_fileID;
    long long _fileSize;
    int _fileType;
    int _fileDuration;
    int _playID;
}

- (void).cxx_destruct;
@property(nonatomic) int fileDuration; // @synthesize fileDuration=_fileDuration;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) int playID; // @synthesize playID=_playID;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;

@end
