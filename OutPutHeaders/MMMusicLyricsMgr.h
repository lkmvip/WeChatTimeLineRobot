/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface MMMusicLyricsMgr : MMService <MMService, PBMessageObserverDelegate> {
	NSMutableArray* m_arrMusicItems;
	NSString* m_nsLyricsRootPath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleGetLyricsResp:(id)resp Event:(unsigned long)event;
-(BOOL)GetLyricsFromSvr:(id)svr;
-(unsigned)indexOfMusicByWeUrl:(id)musicByWeUrl;
-(BOOL)saveLyricsToFile:(id)file FilePath:(id)path;
-(id)getLyricsFromFile:(id)file;
-(id)getLyricFileName:(id)name AndSinger:(id)singer;
-(void)ClearLyricsFile;
-(void)GetLyricsByMusicInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

