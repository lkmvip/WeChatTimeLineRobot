/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseReq.h"

@class NSString;

@interface PayReq : BaseReq {
	NSString* nonceStr;
	NSString* package;
	NSString* partnerId;
	NSString* prepayId;
	unsigned long timeStamp;
	NSString* sign;
}
@property(retain, nonatomic) NSString* sign;
@property(retain, nonatomic) NSString* package;
@property(assign, nonatomic) unsigned long timeStamp;
@property(retain, nonatomic) NSString* nonceStr;
@property(retain, nonatomic) NSString* prepayId;
@property(retain, nonatomic) NSString* partnerId;
-(void).cxx_destruct;
@end

