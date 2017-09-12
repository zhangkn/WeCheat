//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface UpdateWechatRedDotConfig : NSObject <PBCoding>
{
    unsigned int uiHasShowReddotlevel;
    unsigned int _uiClientVersion;
    unsigned int _uiReddotlevel;
    NSString *nsNewXml;
    NSString *_nsWording;
    NSString *_nsUrl;
}

+ (id)getUpdateWechatRedDotConfig;
+ (void)initialize;
+ (void)loadUpdateWechatRedDotConfig:(id)arg1;
+ (void)receiveUpdateWechatRedDot:(id)arg1;
+ (void)reportConfig:(id)arg1 Opcode:(unsigned int)arg2 OldConfig:(id)arg3;
+ (void)saveUpdateWechatRedDotCofig:(id)arg1;
+ (id)updateWechatRedDotPath;
- (void).cxx_destruct;
- (id)getUpdateWechatCellWording;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsNewXml; // @synthesize nsNewXml;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(retain, nonatomic) NSString *nsWording; // @synthesize nsWording=_nsWording;
- (void)parseUpdateWechatRedDot:(id)arg1;
- (void)setAboutHasShowUpdateWechatRedDot;
- (void)setMoreHasShowUpdateWechatRedDot;
- (void)setSettingHasShowUpdateWechatRedDot;
@property(nonatomic) unsigned int uiClientVersion; // @synthesize uiClientVersion=_uiClientVersion;
@property(nonatomic) unsigned int uiHasShowReddotlevel; // @synthesize uiHasShowReddotlevel;
@property(nonatomic) unsigned int uiReddotlevel; // @synthesize uiReddotlevel=_uiReddotlevel;
- (void)setUpdateHasShowUpdateWechatRedDot;
- (_Bool)shouldAboutShowUpdateWechatRedDot;
- (_Bool)shouldMoreShowUpdateWechatRedDot;
- (_Bool)shouldSettingShowUpdateWechatRedDot;
- (_Bool)shouldUpdateShowUpdateWechatRedDot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

