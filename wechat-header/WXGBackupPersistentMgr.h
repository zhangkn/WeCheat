//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXGBackupPersistentMgr : NSObject
{
}

+ (_Bool)canSucccesInOneTransfer;
+ (unsigned long long)checkBackupRecoverState;
+ (_Bool)checkBackupRecvoerOnlyText;
+ (unsigned long long)checkMigrationRecoverState;
+ (void)clearBackupTmpData;
+ (void)clearChatSyncData;
+ (void)clearMigrationTmpData;
+ (id)convertByteSizeToString:(unsigned long long)arg1;
+ (void)deleteBackupDeleteSelection;
+ (void)deleteBackupSelection;
+ (void)deleteMigrationSelection;
+ (void)failOnFirstTransfer;
+ (id)getBackupBufferPath;
+ (id)getBackupBufferPathWithDataId:(id)arg1;
+ (id)getBackupDeleteSelectionPath;
+ (id)getBackupIndexDataBasePath;
+ (id)getBackupPath;
+ (id)getBackupPathWithDataId:(id)arg1;
+ (id)getBackupReportPath;
+ (_Bool)getBackupSelectTextOnlySetting;
+ (id)getBackupSelectionPath;
+ (id)getBackupTmpPath;
+ (id)getBackupTmpPathWithDataId:(id)arg1;
+ (id)getChatSyncFilePath;
+ (id)getChatSyncPath;
+ (id)getChatSyncTmpPath;
+ (id)getChatSyncTmpPathWithDataID:(id)arg1;
+ (unsigned long long)getFileSizeOfBackupPath;
+ (unsigned long long)getFileSizeOfMigrationPath;
+ (unsigned long long)getFreeDiskSpace;
+ (unsigned long long)getFreeDiskSpaceBeforeBackupDelete;
+ (id)getLastBackupComputerName;
+ (id)getLastDeviceID;
+ (id)getMigrationBufferPath;
+ (_Bool)getMigrationBuildIndex;
+ (id)getMigrationFileBufferPathWithDataId:(id)arg1;
+ (id)getMigrationFilePathWithDataId:(id)arg1;
+ (id)getMigrationInfoDBPath;
+ (id)getMigrationMsgItemDBPath;
+ (id)getMigrationPath;
+ (id)getMigrationProgress;
+ (_Bool)getMigrationSelectTextOnlySetting;
+ (id)getMigrationSelectionPath;
+ (id)getMigrationSessionProgress;
+ (id)getMigrationTmpPath;
+ (id)getProgress;
+ (id)getRecoverReportPath;
+ (id)getRelatedMemoryKV;
+ (unsigned long long)getSelectMigrationType;
+ (_Bool)getStateOfBackupSelection;
+ (_Bool)getStateOfMigrated;
+ (_Bool)getStateOfMigrationTimeSelection;
+ (_Bool)hasBackupDeleteSelection;
+ (_Bool)hasBackupSelection;
+ (_Bool)hasMigrationSelection;
+ (_Bool)isExportChatLog;
+ (_Bool)isMigrationOldRecover;
+ (id)loadBackupDeleteSelection;
+ (id)loadBackupSelection;
+ (id)loadMigrationSelection;
+ (void)p_clearBackupBufferData;
+ (void)p_clearBackupPath;
+ (void)p_clearMigrationBufferPath;
+ (void)p_clearMigrationPath;
+ (void)p_syncClearBackupBufferData;
+ (void)p_syncClearBackupPath;
+ (void)p_syncClearMigrationBufferPath;
+ (void)p_syncClearMigrationPath;
+ (void)resetBackupRecoverInfo;
+ (void)resetMigrationRecoverInfo;
+ (void)resetStateOfBackupSelection;
+ (void)resetStateOfExportChatLog;
+ (void)resetStateOfMigraitonTimeSelection;
+ (void)resetStateOfMigrated;
+ (_Bool)saveBackupDeleteSelection:(id)arg1;
+ (void)saveBackupSelectTextOnly:(_Bool)arg1;
+ (_Bool)saveBackupSelection:(id)arg1;
+ (void)saveCurrentDeviceID:(id)arg1;
+ (void)saveMigrationBuildIndex:(_Bool)arg1;
+ (void)saveMigrationSelectTextOnly:(_Bool)arg1;
+ (_Bool)saveMigrationSelection:(id)arg1;
+ (void)setLastBackupComputerName:(id)arg1;
+ (void)setSelectMigrationType:(unsigned long long)arg1;
+ (void)setStateOfBackupSelection;
+ (void)setStateOfExportChatLog;
+ (void)setStateOfMigrated;
+ (void)setStateOfMigrationTimeSelection;
+ (void)syncClearBackupTmpData;
+ (void)syncClearChatSyncData;
+ (void)syncClearMigrationTmpData;
+ (void)syncDeleteBackupMsgListArray:(id)arg1;
+ (void)syncDeleteMigrationMsgListArray:(id)arg1;
+ (void)triggerToQuickClearTrashPath;
+ (void)writeBackupRecoverDataBeignInfo;
+ (void)writeBackupRecoverDataWaitInfo;
+ (void)writeBackupRecoverOnlyText:(_Bool)arg1;
+ (void)writeBackupRecoverTransferBeginInfo;
+ (void)writeBeginFirstTransfer;
+ (void)writeFreeSpaceBeforeBackupDelete:(unsigned long long)arg1;
+ (void)writeMigrationNewRecover;
+ (void)writeMigrationOldRecover;
+ (void)writeMigrationProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (void)writeMigrationRecoverDataBeignInfo;
+ (void)writeMigrationRecoverDataWaitInfo;
+ (void)writeMigrationRecoverTransferBeginInfo;
+ (void)writeMigrationSessionCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
+ (void)writeProgressCurrent:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;

@end

