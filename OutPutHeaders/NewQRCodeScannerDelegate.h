/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol NewQRCodeScannerDelegate <NSObject>
@optional
-(void)onGotBarcode:(id)barcode Type:(id)type;
-(void)NewQRCodeScanner:(id)scanner didScanResult:(id)result;
@end

