//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IContactMgrExt-Protocol.h"
#import "IEnterpriseContactMgrExt-Protocol.h"
#import "IHeadImageExt-Protocol.h"
#import "IKFContactExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IStrangerContactMgrExt-Protocol.h"
#import "LongPressImageViewDelegate-Protocol.h"
#import "WCForceTouchTriggerLongPressProtocol-Protocol.h"

@class MMUILongPressImageView, NSString, UIImage, UIImageView;

@interface MMHeadImageView : MMUIView <IKFContactExt, IEnterpriseContactMgrExt, WCForceTouchTriggerLongPressProtocol, LongPressImageViewDelegate, IMsgExt, IHeadImageExt, IContactMgrExt, IStrangerContactMgrExt>
{
    MMUILongPressImageView *_headImageView;
    UIImageView *_borderImageView;
    NSString *_nsHeadImgUrl;
    NSString *_nsUsrName;
    _Bool _bAutoUpdate;
    struct CGSize _imageSize;
    UIImage *_borderImage;
    UIImage *_borderImageHL;
    _Bool _addBorder;
    _Bool _bRoundedCorner;
    id _oTarget;
    SEL _selAction;
    id _object;
    id _oLongPressTarget;
    SEL _selLongPressAction;
    id _oLongPressObject;
    UIImageView *_sceneImageView;
    unsigned int _conerSize;
    UIImage *_defaultImage;
    unsigned char _headUseScene;
    unsigned char _headCategory;
    _Bool _isHeadImgExistedLocal;
    _Bool _isShowCertIcon;
    UIImageView *_certIconView;
}

- (void).cxx_destruct;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
@property(nonatomic) _Bool addBorder; // @synthesize addBorder=_addBorder;
- (void)addSceneImageView:(long long)arg1;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(retain, nonatomic) UIImage *borderImageHL; // @synthesize borderImageHL=_borderImageHL;
- (void)checkAndUpdateImage;
@property(nonatomic) unsigned int conerSize; // @synthesize conerSize=_conerSize;
- (void)dealloc;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void)doUpdateHeadImg:(_Bool)arg1;
- (id)getRealUserName:(id)arg1;
@property(nonatomic) unsigned char headCategory; // @synthesize headCategory=_headCategory;
@property(nonatomic) unsigned char headUseScene; // @synthesize headUseScene=_headUseScene;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(_Bool)arg3 bRoundCorner:(_Bool)arg4;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) _Bool isShowCertIcon; // @synthesize isShowCertIcon=_isShowCertIcon;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
- (void)onHeadImageChange:(id)arg1;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)setHeadImageByName:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)setTargetForLongPress:(id)arg1 action:(SEL)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)updateCertInfoView;
- (void)updateExtensionRegister;
- (void)updateHeadImage:(id)arg1;
- (void)updateUsrName:(id)arg1 withHeadImgUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

