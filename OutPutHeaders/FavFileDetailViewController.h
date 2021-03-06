/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "IFavoritesExt.h"
#import "MMUIViewController.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "INetworkStatusMgrExt.h"
#import "FavForwardLogicDelegate.h"
#import "ImageScrollViewDelegate.h"

@class UIDocumentInteractionController, FavoritesItem, UILabel, UIView, FavForwardLogicController, UIImageView, NSString, FavDataItemWrap, UIButton, MMProgressView, ImageScrollView, FavoritesItemDataField;
@protocol FavFileDetailDelegate;

@interface FavFileDetailViewController : MMUIViewController <UIAlertViewDelegate, INetworkStatusMgrExt, IFavoritesExt, ImageScrollViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate, UIDocumentInteractionControllerDelegate> {
	FavoritesItem* m_favItem;
	FavDataItemWrap* m_favDataWrap;
	FavoritesItemDataField* m_favData;
	UIImageView* m_imageView;
	UILabel* m_labFileName;
	MMProgressView* m_progressBar;
	UILabel* m_labProgress;
	UIButton* m_btnFileOpen;
	UIButton* m_btnOpenByApp;
	UILabel* m_labelSyncTip;
	UIButton* m_labelSync;
	UIView* m_capExceedView;
	ImageScrollView* m_imgPreview;
	UIDocumentInteractionController* m_vcDocument;
	int syncStautus;
	BOOL m_bIsUnkownType;
	NSString* m_nsDataPath;
	NSString* m_nsFileName;
	unsigned long m_uiFileSize;
	unsigned long m_uiPreviewType;
	BOOL m_bFileExit;
	FavForwardLogicController* m_favForwardController;
	id<FavFileDetailDelegate> m_delegate;
	NSString* m_tmpFilePath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FavFileDetailDelegate> m_delegate;
-(void).cxx_destruct;
-(id)getFavForawrdViewController;
-(void)onSingleTap:(id)tap;
-(void)documentInteractionController:(id)controller didEndSendingToApplication:(id)application;
-(void)updateRightBtn;
-(void)onFavTagEditBegin:(int)begin;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onAction:(id)action;
-(void)onNetworkStatusChange:(unsigned long)change;
-(void)viewDidTransitionToNewSize;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)OnFavoritesItemStartAsyncUpload:(id)upload;
-(void)OnAddFavoritesItem:(id)item ErrCode:(int)code;
-(void)OnUploadFavoritesItem:(id)item LocalDataId:(id)anId FinishedLength:(long)length TotalLength:(long)length4;
-(void)OnFavoritesItemDownloadFinished:(id)finished ErrCode:(int)code;
-(void)OnDownloadFavoritesItem:(id)item LocalDataId:(id)anId FinishedLength:(long)length TotalLength:(long)length4;
-(void)SetProgress:(float)progress TotalSize:(float)size;
-(void)StopSync;
-(void)StartSync;
-(void)OpenByApp;
-(void)OpenFile;
-(void)showVideoExpire;
-(void)showSyncComplete;
-(void)showDownloading;
-(void)showUploading;
-(void)showNeedDownload;
-(void)showNeedUpload;
-(void)updateBtns;
-(void)updateStatus;
-(id)getFileImgByPreviewType;
-(unsigned long)getPreviewType;
-(void)initView;
-(void)updateData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)SafeDeleteDocument;
-(void)dealloc;
-(id)initWithFavDataWrap:(id)favDataWrap;
-(id)initWithFavItem:(id)favItem;
@end

