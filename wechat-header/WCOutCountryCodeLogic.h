//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ILocationMgrExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"

@class NSDictionary, NSLocale, NSMutableArray, NSSet, NSString, Package, WCOutCountryCodeWrap;

@interface WCOutCountryCodeLogic : MMObject <MMPackageDownloadMgrExt, ILocationMgrExt>
{
    WCOutCountryCodeWrap *m_defaultCountryCodeWrap;
    unsigned int m_lastUpdateTime;
    NSString *m_countryCodeConfig;
    Package *m_downloadingPackage;
    NSString *m_curLanguage;
    NSSet *m_restrictionSet;
    NSMutableArray *m_allCountryCodes;
    NSDictionary *m_countryCodesDic;
    NSLocale *m_curLocale;
    unsigned long long _locationMgrId;
    unsigned long long _addressMgrId;
    NSString *_currentLocationCountryCode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long addressMgrId; // @synthesize addressMgrId=_addressMgrId;
- (void)checkUpdate;
- (void)configCountryCodeRestriction;
- (void)configData;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (id)countryCodeFromISOCountryCode:(id)arg1;
- (id)countryISOCodeForCountryCode:(id)arg1;
@property(copy, nonatomic) NSString *currentLocationCountryCode; // @synthesize currentLocationCountryCode=_currentLocationCountryCode;
- (void)dealloc;
@property(readonly, nonatomic) NSString *defaultCoutryCode;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (void)getAllCountryCode;
- (void)getAllCountryCodeForLocaleIdentifier:(id)arg1;
- (id)getAllCountryCodes;
- (id)getCarrierCountryCode;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)arg1;
- (id)getCurCountryCode;
- (id)getLocaleCountryCode;
- (id)getTopCountryCodeConfig;
- (id)init;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
@property(nonatomic) unsigned long long locationMgrId; // @synthesize locationMgrId=_locationMgrId;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;

@end

