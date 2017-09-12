//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AirKissViewControllerDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"

@class AirKissConfData, NSString, UIScrollView, UIView, WCDevice;

@interface WCDeviceSearchGuideViewController : MMUIViewController <AirKissViewControllerDelegate, IWCDeviceBrandMgrExt, CNetworkStatusExt>
{
    WCDevice *m_device;
    AirKissConfData *m_confData;
    UIScrollView *m_scrolView;
    UIView *m_noWifiOrBLEView;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)dealloc;
- (void)initGuideView;
- (void)initNoWifiOrBLEView;
- (id)initWithFilterUserData:(id)arg1;
- (_Bool)isBLEConnected;
- (_Bool)isWifiConnected;
- (void)onAirKiss;
- (void)onAirKissReturn:(_Bool)arg1;
- (void)onDeviceSearch;
- (void)onSimCardNetTypeChange;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)updateConnectState;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

