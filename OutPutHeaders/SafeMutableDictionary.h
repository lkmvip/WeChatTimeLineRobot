/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock, NSMutableDictionary;

@interface SafeMutableDictionary : XXUnknownSuperclass {
	NSMutableDictionary* _m_dic;
	NSRecursiveLock* _m_lock;
}
@property(retain, nonatomic) NSRecursiveLock* m_lock;
@property(retain, nonatomic) NSMutableDictionary* m_dic;
-(void).cxx_destruct;
-(id)dictionaryAllKeys;
-(id)dictionaryGetObjectForKey:(id)key;
-(void)dictionarySetObject:(id)object key:(id)key;
-(void)dictionaryReset;
-(id)init;
@end

