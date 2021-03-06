/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface AuthAppItem : XXUnknownSuperclass <PBCoding> {
	NSString* appID;
	NSString* appIconURL;
	NSString* appTypeList;
	NSString* appName;
	int appSettingFlag;
	NSString* devInfo;
	NSString* authInfo;
	NSString* extInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* extInfo;
@property(retain, nonatomic) NSString* authInfo;
@property(retain, nonatomic) NSString* devInfo;
@property(assign, nonatomic) int appSettingFlag;
@property(retain, nonatomic) NSString* appName;
@property(retain, nonatomic) NSString* appTypeList;
@property(retain, nonatomic) NSString* appIconURL;
@property(retain, nonatomic) NSString* appID;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

