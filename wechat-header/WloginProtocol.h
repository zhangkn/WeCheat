//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WloginPkgHead;

@interface WloginProtocol : NSObject
{
    WloginPkgHead *pkgHead;
    NSMutableDictionary *basicInfoTlvList;
    unsigned int dwSrcSigAppid;
    unsigned int dwSrcSigSubAppid;
    unsigned int dwDstSigAppid;
    unsigned int dwDstSigSubAppid;
    NSMutableDictionary *reslutSigTlvList;
    char sKey[16];
    char A1_Key[16];
    CDStruct_e485254d stRetValue;
}

- (_Bool)addBasicTlv:(id)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (int)checkPic:(id)arg1;
- (void)dealloc;
- (_Bool)decodeTlvList:(const char *)arg1 andLeftLen:(int *)arg2;
- (int)exchangeSig:(id)arg1 retData:(id)arg2;
- (_Bool)genEncryptBody_0x144:(id)arg1 subCmd:(unsigned short)arg2;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andUin:(unsigned int)arg2 andFlag:(int)arg3 outTGTGT:(id)arg4;
- (id)initWithClientVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;
- (int)loginWithPasswd:(id)arg1 retData:(id)arg2;
- (unsigned int)pkgHeadUin;
- (void)recvPkgError;
- (int)refreshPic:(id)arg1;
- (_Bool)resetProtocol;
@property(readonly) NSMutableDictionary *reslutSigTlvList; // @synthesize reslutSigTlvList;
- (CDStruct_e485254d *)resolveSvrPkg:(id)arg1;
- (void)setPkgHeadUin:(unsigned int)arg1;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (id)sigTlvDictByTag:(unsigned short)arg1;

@end

