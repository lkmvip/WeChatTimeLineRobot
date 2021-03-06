/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterUserRankList : MMObject <PBCoding> {
	BOOL hasRank;
	NSString* appID;
	NSArray* rankList;
	NSString* title;
	NSString* moreTitle;
	NSString* moreUrl;
	NSString* rankTitle;
	NSString* myDesc;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* myDesc;
@property(retain, nonatomic) NSString* rankTitle;
@property(retain, nonatomic) NSString* moreUrl;
@property(retain, nonatomic) NSString* moreTitle;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* rankList;
@property(assign, nonatomic) BOOL hasRank;
@property(retain, nonatomic) NSString* appID;
+(void)initialize;
-(void).cxx_destruct;
-(void)parseFromResp:(id)resp;
-(void)dealloc;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

