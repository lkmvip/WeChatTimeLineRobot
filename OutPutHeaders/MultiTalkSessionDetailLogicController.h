/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSArray, MMDelegateProxy, MultiTalkSessionItem;
@protocol MultiTalkSessionDetailLogicControllerDelegate;

@interface MultiTalkSessionDetailLogicController : MMObject {
	MMDelegateProxy<MultiTalkSessionDetailLogicControllerDelegate>* _delegate;
	MultiTalkSessionItem* _sessionItem;
	NSArray* _sessionMemberArray;
	NSArray* _sessionMesssageArray;
}
@property(retain, nonatomic) NSArray* sessionMesssageArray;
@property(retain, nonatomic) NSArray* sessionMemberArray;
@property(retain, nonatomic) MultiTalkSessionItem* sessionItem;
@property(assign, nonatomic) __weak MMDelegateProxy<MultiTalkSessionDetailLogicControllerDelegate>* delegate;
-(void).cxx_destruct;
-(void)handleStartMultiTalk;
-(id)getSessionMessageList;
-(id)getSessionMemberList;
-(int)numberOfMemberListCount;
-(int)numberOfMessageListCount;
-(void)initData;
-(id)initWithSessionItem:(id)sessionItem;
-(void)dealloc;
@end

