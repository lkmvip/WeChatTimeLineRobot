/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class MMDiskUsageScanData, MMDiskUsageScanConfig, MMDiskBizUsageHandler, MMPathComponent, NSObject;
@protocol MMDiskUsageScannerDelegate, OS_dispatch_queue;

@interface MMDiskUsageScaner : XXUnknownSuperclass {
	BOOL m_isImmediateStop;
	id<MMDiskUsageScannerDelegate> m_delegate;
	int m_status;
	NSObject<OS_dispatch_queue>* m_workQueue;
	MMPathComponent* m_pathComponent;
	MMDiskBizUsageHandler* m_bizHandler;
	unsigned m_curScanDepth;
	MMDiskUsageScanData* m_scanData;
	MMDiskUsageScanConfig* m_config;
}
@property(retain, nonatomic) MMDiskUsageScanConfig* m_config;
@property(retain, nonatomic) MMDiskUsageScanData* m_scanData;
@property(assign, nonatomic) unsigned m_curScanDepth;
@property(retain, nonatomic) MMDiskBizUsageHandler* m_bizHandler;
@property(retain, nonatomic) MMPathComponent* m_pathComponent;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* m_workQueue;
@property(assign) BOOL m_isImmediateStop;
@property(assign) int m_status;
@property(assign, nonatomic) __weak id<MMDiskUsageScannerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)reportUnknowPath:(const char*)path fileNum:(unsigned)num totalFileSize:(unsigned long long)size latestFileTime:(unsigned)time;
-(void)reportUnknowDir:(const char*)dir fileNum:(unsigned)num fileSize:(unsigned long long)size;
-(void)reportUnknowFile:(const char*)file accessTime:(long)time modifyTime:(long)time3 changeTime:(long)time4 fileSize:(unsigned long long)size;
-(unsigned)currentAppRootPathLength;
-(void)addBizDelFolderStat:(int)stat delFolderNum:(unsigned)num delFileNum:(unsigned)num3 delFileSize:(unsigned long long)size;
-(void)addBizDelFileStat:(id)stat bizType:(int)type delFileSize:(unsigned long long)size;
-(void)addBizFileStat:(id)stat bizType:(int)type fileSize:(unsigned long long)size;
-(MMBizMatchInfo)fileMatchedBizType:(id)type inFolder:(id)folder;
-(void)matchBizWithChildFolder:(id)childFolder parentFolder:(id)folder;
-(void)loadBizHandler;
-(void)printCurrentScanSummary;
-(void)finisheScanDisk:(id)disk;
-(id)scanRootDir;
-(void)scanSubFolder:(id)folder isCanceled:(BOOL*)canceled;
-(void)checkNeedSlowDown;
-(void)sumFolderStatData:(id)data;
-(BOOL)isFileDelete:(const char*)aDelete storeTime:(long)time curTime:(long)time3 accessTime:(long)time4 modifyTime:(long)time5 changeTime:(long)time6;
-(BOOL)isFileDelete:(const char*)aDelete matchInfo:(const MMBizMatchInfo*)info accessTime:(long)time modifyTime:(long)time4 changeTime:(long)time5 fileSize:(unsigned long long)size;
-(void)finishScanFilesInFolder:(id)folder;
-(void)scanFileInFolder:(id)folder isCanceled:(BOOL*)canceled;
-(void)getChildFolderAndFile:(id)file;
-(void)scanOneFolder:(id)folder isCanceled:(BOOL*)canceled;
-(void)makeTmpFirstForRoot:(id)root;
-(void)checkFolderDelete:(id)aDelete path:(const char*)path;
-(void)recursiveScanFolder:(id)folder isCanceled:(BOOL*)canceled;
-(void)removeCacheData;
-(void)saveCacheData;
-(void)clearCacheData;
-(void)loadCacheData;
-(BOOL)scanBeginWithRootFolder;
-(void)scanDiskOnThread;
-(BOOL)isCanceled;
-(void)callScanStartWithConfig:(id)config;
-(BOOL)isReadyToStart;
-(void)onScanDidStop;
-(void)onScanStart;
-(BOOL)IsRunning;
-(void)ImmediateStop;
-(void)Stop;
-(void)StartWithScanConfig:(id)scanConfig;
-(void)ReleaseWorkQueue;
-(void)SetWorkQueue:(id)queue;
-(void)dealloc;
-(id)init;
@end

