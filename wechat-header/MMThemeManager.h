//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class MMColor, MMDrawScript, MMRuleSetList, MMScriptInterpreter, MMTheme, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSThread;

@interface MMThemeManager : MMService <MMService>
{
    NSMutableArray *m_themeList;
    MMTheme *m_currentTheme;
    MMColor *m_colorList;
    NSMutableDictionary *m_imageCache;
    long long m_cachedImageSize;
    MMRuleSetList *m_ruleSetList;
    MMRuleSetList *m_imageMapList;
    MMRuleSetList *m_resMapList;
    int m_ipadCssStyleType;
    NSThread *m_backgroundWorkerThread;
    MMDrawScript *m_drawScripts;
    MMScriptInterpreter *m_scriptInterpreter;
    NSRecursiveLock *m_lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (int)getIpadStyleType;
+ (void)initialize;
+ (id)sharedThemeManager;
+ (_Bool)useiPadCss;
+ (_Bool)useiPhone6CssForIpadCompact;
- (void).cxx_destruct;
- (void)addImageSizeToCachedSize:(id)arg1;
- (void)addToThemeList:(id)arg1;
@property(retain, nonatomic) NSThread *backgroundWorkerThread; // @synthesize backgroundWorkerThread=m_backgroundWorkerThread;
- (_Bool)changeThemeByThemeID:(id)arg1;
- (void)clearImageCache;
- (void)clearSelfCreateImage;
@property(retain, nonatomic) MMColor *colorList; // @synthesize colorList=m_colorList;
@property(retain, nonatomic) MMTheme *currentTheme; // @synthesize currentTheme=m_currentTheme;
- (id)fileOfImageNamed:(id)arg1;
- (id)getDefaultTheme;
- (id)getIconImageByName:(id)arg1;
- (id)getImageCacheObjectForKey:(id)arg1;
- (id)getImageName:(id)arg1;
- (id)getRuleSetForSeletor:(id)arg1;
- (id)getThemeByThemeID:(id)arg1;
- (id)getThemeDir;
- (id)getUserThemeIDPrefKey;
- (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=m_imageCache;
- (id)imageDisableNamed:(id)arg1;
- (id)imageFromColor:(id)arg1;
- (id)imageFromImageMap:(id)arg1;
- (id)imageFromResPackage:(id)arg1 withName:(id)arg2;
- (id)imageFromScript:(id)arg1 withArguments:(id)arg2;
- (id)imageFromSelfCreateImagePath:(id)arg1;
- (id)imageFromStaticResourcePatchWithName:(id)arg1;
- (id)imageFromSystemFileContent:(id)arg1;
- (id)imageHighlightNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 Alpha:(float)arg2 Suffix:(id)arg3 ForDifferentIosVersion:(_Bool)arg4;
- (id)imageNamed:(id)arg1 inTheme:(id)arg2;
- (id)imageNamed:(id)arg1 warnIfNotFound:(_Bool)arg2;
- (id)imageNamedWithCurTheme:(id)arg1;
- (id)image_disable_for_different_ios_version:(id)arg1;
- (id)image_for_different_ios_version:(id)arg1;
- (id)image_highlight_for_different_ios_version:(id)arg1;
- (id)init;
- (void)installThemeInBundle;
- (void)installThemeInBundleInBackground:(long long)arg1;
- (_Bool)installThemeUpdatePack:(id)arg1;
- (_Bool)is2xScreen;
- (_Bool)is3xScreen;
- (_Bool)is568H2xScreen;
- (_Bool)isInstallDone;
- (_Bool)isThemeDirExist;
- (_Bool)isThemesZipInBundle;
- (_Bool)loadCSSFromPath:(id)arg1 IntoRuleSetList:(id)arg2;
- (void)loadColors;
- (_Bool)loadDefaultTheme;
- (void)loadImageMap;
- (void)loadResPackageSetting;
- (void)loadRuleSets;
- (void)loadScripts;
- (_Bool)loadUserPreferedTheme;
- (_Bool)loadUserPreferedThemeNoCallExtension;
- (id)localizedImageNamed:(id)arg1;
- (id)localizedImageNamed:(id)arg1 inTheme:(id)arg2;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=m_lock;
@property(retain, nonatomic) MMDrawScript *m_drawScripts; // @synthesize m_drawScripts;
@property(retain, nonatomic) MMRuleSetList *m_imageMapList; // @synthesize m_imageMapList;
@property(retain, nonatomic) MMRuleSetList *m_resMapList; // @synthesize m_resMapList;
@property(retain, nonatomic) MMScriptInterpreter *m_scriptInterpreter; // @synthesize m_scriptInterpreter;
- (id)makeImageWithFitScale:(id)arg1;
- (_Bool)needToClearCache;
- (void)onBackgroundInstallDone;
- (void)onFirstRun;
- (_Bool)onServiceMemoryWarning;
- (id)pathOfImageNamed:(id)arg1;
- (id)pathOfResNamed:(id)arg1;
- (void)reloadCssForMultiTaskingIfNeed;
- (long long)reloadThemeList;
- (void)reloadThemeResource;
- (void)removeFromThemeList:(id)arg1;
- (void)removeImageCacheObjectForKey:(id)arg1;
- (void)removeImageSizeFromCachedSize:(id)arg1;
@property(retain, nonatomic) MMRuleSetList *ruleSetList; // @synthesize ruleSetList=m_ruleSetList;
- (void)runScript:(id)arg1 withArguments:(id)arg2;
- (void)saveImage:(id)arg1 ToSelfCreateImagePath:(id)arg2;
- (void)setImageCacheObject:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSMutableArray *themeList; // @synthesize themeList=m_themeList;
- (void)setUserPreferedTheme:(id)arg1;
- (void)startInstallThreadAfterDelay;
- (id)translateToHDImageName:(id)arg1;
- (_Bool)unPackThemePackToThemeDir;
- (void)uninstallAllThemes;
- (void)waitForInstallDone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

