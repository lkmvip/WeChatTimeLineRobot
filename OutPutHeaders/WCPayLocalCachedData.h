/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSMutableSet, NSString, NSMutableDictionary;

@interface WCPayLocalCachedData : XXUnknownSuperclass <NSCoding> {
	BOOL m_bResetMainBindSerial;
	NSString* m_nsLastBindSerial;
	BOOL m_bShowedBalanceDescriptionTips;
	BOOL m_bShowedFaceToFaceTransferViewTips;
	BOOL m_bShowedFaceToFaceReceiveMoneyTips;
	NSString* m_nsWCPayOfflinePayLastSelectedCardBindSerial;
	NSMutableDictionary* m_arrWXBorrowMoneyItemRedCode;
	NSMutableSet* m_setReceivedHBMsgID;
	NSMutableSet* m_setReceivedTransferMsgID;
	unsigned long m_localBadgeIndex;
	NSMutableDictionary* m_dicFunctionVisits;
	BOOL m_bShowedChangeWalletTips;
	NSMutableDictionary* m_dicBanners;
	NSMutableDictionary* m_dicAllSceneLastCard;
	NSString* _m_walletUrl;
}
@property(retain, nonatomic) NSMutableDictionary* m_dicAllSceneLastCard;
@property(retain, nonatomic) NSMutableDictionary* m_dicBanners;
@property(assign, nonatomic) BOOL m_bShowedChangeWalletTips;
@property(retain, nonatomic) NSMutableDictionary* m_dicFunctionVisits;
@property(assign, nonatomic) unsigned long m_localBadgeIndex;
@property(retain, nonatomic) NSMutableSet* m_setReceivedTransferMsgID;
@property(retain, nonatomic) NSMutableSet* m_setReceivedHBMsgID;
@property(retain, nonatomic) NSMutableDictionary* m_arrWXBorrowMoneyItemRedCode;
@property(copy, nonatomic) NSString* m_walletUrl;
@property(retain, nonatomic) NSString* m_nsWCPayOfflinePayLastSelectedCardBindSerial;
@property(assign, nonatomic) BOOL m_bShowedFaceToFaceReceiveMoneyTips;
@property(assign, nonatomic) BOOL m_bShowedFaceToFaceTransferViewTips;
@property(assign, nonatomic) BOOL m_bShowedBalanceDescriptionTips;
@property(retain, nonatomic) NSString* m_nsLastBindSerial;
@property(assign, nonatomic) BOOL m_bResetMainBindSerial;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end

