//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, ReportImageInfo, ReportVideoInfo;

@interface ReportMediaInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
@property(retain, nonatomic) ReportImageInfo *imageInfo; // @dynamic imageInfo;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) ReportVideoInfo *videoInfo; // @dynamic videoInfo;

@end

