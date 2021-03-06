/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "ILinkEventExt.h"

@class RichTextView, NSString, UIImageView;
@protocol WCBizTipViewDelegate;

@interface WCBizTipView : XXUnknownSuperclass <ILinkEventExt> {
	NSString* _title;
	NSString* _content;
	NSString* _imageName;
	UIImageView* _backgroundView;
	UIImageView* contentImageView;
	RichTextView* richTextView;
	id<WCBizTipViewDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<WCBizTipViewDelegate> m_delegate;
-(void).cxx_destruct;
-(id)getContentImageView;
-(void)onCloseIntroView;
-(void)dealloc;
-(void)showAnimation;
-(void)initView;
-(id)initWithFrame:(CGRect)frame andTittle:(id)tittle andContent:(id)content andImage:(id)image;
@end

