//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <MailUIFW/MUIWKWebViewUIProxyObject-Protocol.h>
#import <MailUIFW/NSSharingServiceDelegate-Protocol.h>
#import <MailUIFW/NSSharingServicePickerDelegate-Protocol.h>
#import <MailUIFW/WKNavigationDelegate-Protocol.h>
#import <MailUIFW/WKUIDelegate-Protocol.h>
#import <MailUIFW/WKUIDelegatePrivate-Protocol.h>

@class MUILinkEditWindowController, MUIWKWebView, MUIWebDocument, MUIWebDocumentView, MUIWebDocumentViewGroup, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSPort, NSSharingServicePicker, NSString, NSUUID;
@protocol MUIWKWebViewWebProxyObject;

@interface MUIWKWebViewController : NSViewController <NSSharingServiceDelegate, NSSharingServicePickerDelegate, WKUIDelegatePrivate, WKNavigationDelegate, WKUIDelegate, MUIWKWebViewUIProxyObject>
{
    BOOL _webInspectorEnabled;	// 16 = 0x10
    MUIWebDocumentView *_webDocumentView;	// 24 = 0x18
    NSMutableDictionary *_pendingJavascriptRequests;	// 32 = 0x20
    NSMutableArray *_blocksToPerformAfterDidLoadMainFrame;	// 40 = 0x28
    unsigned long long _webProcessCrashCount;	// 48 = 0x30
    BOOL _ignoreKVOHTMLChanges;	// 56 = 0x38
    BOOL _finished;	// 57 = 0x39
    MUIWebDocumentViewGroup *_viewGroup;	// 64 = 0x40
    NSMapTable *_attachmentControllersByAttachment;	// 72 = 0x48
    MUILinkEditWindowController *_linkEditController;	// 80 = 0x50
    NSPort *_javaScriptPort;	// 88 = 0x58
    id <MUIWKWebViewWebProxyObject> _webProxy;	// 96 = 0x60
    NSPort *_selectionPort;	// 104 = 0x68
    NSDictionary *_applicationDictionary;	// 112 = 0x70
    NSMapTable *_sharingItems;	// 120 = 0x78
    NSSharingServicePicker *_sharingServicePicker;	// 128 = 0x80
    NSUUID *_cacheDisplayInRectToken;	// 136 = 0x88
}

+ (id)webKitLog;	// IMP=0x000000000002ee9b
@property(retain, nonatomic) NSUUID *cacheDisplayInRectToken; // @synthesize cacheDisplayInRectToken=_cacheDisplayInRectToken;
@property(retain, nonatomic) NSSharingServicePicker *sharingServicePicker; // @synthesize sharingServicePicker=_sharingServicePicker;
@property(retain, nonatomic) NSMapTable *sharingItems; // @synthesize sharingItems=_sharingItems;
@property(retain, nonatomic) NSDictionary *applicationDictionary; // @synthesize applicationDictionary=_applicationDictionary;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) NSPort *selectionPort; // @synthesize selectionPort=_selectionPort;
@property(retain, nonatomic) id <MUIWKWebViewWebProxyObject> webProxy; // @synthesize webProxy=_webProxy;
@property(readonly, nonatomic) NSPort *javaScriptPort; // @synthesize javaScriptPort=_javaScriptPort;
@property(nonatomic) BOOL ignoreKVOHTMLChanges; // @synthesize ignoreKVOHTMLChanges=_ignoreKVOHTMLChanges;
@property(readonly, nonatomic) MUILinkEditWindowController *linkEditController; // @synthesize linkEditController=_linkEditController;
@property(retain, nonatomic) NSMapTable *attachmentControllersByAttachment; // @synthesize attachmentControllersByAttachment=_attachmentControllersByAttachment;
@property(retain, nonatomic) MUIWebDocumentViewGroup *viewGroup; // @synthesize viewGroup=_viewGroup;
// - (void).cxx_destruct;	// IMP=0x0000000000037c39
- (void)cancelCacheDisplayInRect;	// IMP=0x00000000000379cf
- (void)cacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003775c
- (void)_noteFileSystemChanged:(id)arg1;	// IMP=0x00000000000376b6
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003746a
- (void)exportAttachments:(id)arg1 toApplication:(id)arg2;	// IMP=0x0000000000037195
- (BOOL)canExportAttachments:(id)arg1 toApplication:(id)arg2;	// IMP=0x0000000000036f75
- (id)_imageAttachments;	// IMP=0x0000000000036d0a
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;	// IMP=0x0000000000036b82
- (void)_saveAttachment:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3 makePathUnique:(BOOL)arg4;	// IMP=0x00000000000367a9
- (void)saveAttachmentsWithPanel:(id)arg1;	// IMP=0x00000000000361dd
- (void)_performAfterDidLoadMainFrame:(CDUnknownBlockType)arg1;	// IMP=0x00000000000360d9
- (void)generateSelectionWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035d0c
- (void)generateStyleInlinedWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035989
- (void)_documentSelectionChanged:(id)arg1;	// IMP=0x00000000000357d7
- (id)evaluateJavaScriptSynchronously:(id)arg1;	// IMP=0x000000000003537f
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034e3e
- (id)selectionAndClickInformationForClickAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000034a6d
- (void)dataDetectorsExternalUIRequested:(id)arg1;	// IMP=0x00000000000346b0
- (void)setDocumentElementDirection:(long long)arg1;	// IMP=0x0000000000034641
- (void)logInjectedWebBundleMessage:(id)arg1;	// IMP=0x0000000000034587
- (void)logWebConsoleMessage:(id)arg1;	// IMP=0x00000000000344cd
- (void)setMessageHasBlockedMessageContent;	// IMP=0x000000000003448b
- (void)completeWebDocumentPasteboardType;	// IMP=0x000000000003405f
- (void)_runPendingJavascriptRequests;	// IMP=0x0000000000033b4b
- (void)_didLoadMainFrameTimeout;	// IMP=0x0000000000033b34
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;	// IMP=0x00000000000339c9
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;	// IMP=0x00000000000338df
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x00000000000338cd
- (void)_handleWebContentProcessTermination;	// IMP=0x00000000000338a1
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000000003377f
- (void)_loadMainFrameWithViewVisible:(BOOL)arg1;	// IMP=0x00000000000334a8
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003304f
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;	// IMP=0x0000000000032fff
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x0000000000032f8e
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;	// IMP=0x0000000000032d74
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;	// IMP=0x0000000000032d6b
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;	// IMP=0x0000000000032b63
- (void)_webView:(id)arg1 didNotHandleWheelEvent:(id)arg2;	// IMP=0x0000000000032af1
- (void)_webView:(id)arg1 takeFocus:(long long)arg2;	// IMP=0x0000000000032a77
- (void)toggleViewInline:(id)arg1;	// IMP=0x0000000000032a15
- (void)openLinkBehind:(id)arg1;	// IMP=0x0000000000032937
- (void)openLink:(id)arg1;	// IMP=0x0000000000032859
- (void)exportToAperture:(id)arg1;	// IMP=0x0000000000032800
- (void)exportToIPhoto:(id)arg1;	// IMP=0x00000000000327a7
- (void)exportToPhotos:(id)arg1;	// IMP=0x000000000003274e
- (void)downloadAttachment:(id)arg1;	// IMP=0x000000000003270a
- (void)saveToDownloads:(id)arg1;	// IMP=0x00000000000326b3
- (void)saveAttachments:(id)arg1;	// IMP=0x0000000000032664
- (void)quickLookAttachments:(id)arg1;	// IMP=0x00000000000325d1
- (void)openAttachments:(id)arg1;	// IMP=0x0000000000032507
- (void)_addWebKitDefaults:(id)arg1 toCustomMenu:(id)arg2 clickedLinkURL:(id)arg3;	// IMP=0x0000000000031def
- (void)_addImageExportMenuItemsForAttachments:(id)arg1 toMenu:(id)arg2;	// IMP=0x0000000000031ac1
- (void)_addInlineToggleMenuItemForAttachmentController:(id)arg1 toMenu:(id)arg2;	// IMP=0x0000000000031963
- (void)_addDownloadAttachmentMenuItemForAttachmentController:(id)arg1 toMenu:(id)arg2;	// IMP=0x0000000000031851
- (void)_webView:(id)arg1 getContextMenuFromProposedMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030a98
- (void)_updateImageScaling;	// IMP=0x0000000000030901
- (void)_reloadDocument;	// IMP=0x000000000003013b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002ff87
- (void)_fullResolutionDataDidBecomeAvailable:(id)arg1;	// IMP=0x000000000002ff15
@property(retain) MUIWebDocument *representedObject;
@property(retain) MUIWKWebView *view;
- (id)_webRemoteObjectInterface;	// IMP=0x000000000002f80d
- (id)_uiRemoteObjectInterface;	// IMP=0x000000000002f7a1
- (void)loadView;	// IMP=0x000000000002f5b2
@property(nonatomic) __weak MUIWebDocumentView *webDocumentView;
- (void)tearDown;	// IMP=0x000000000002f3d2
- (void)dealloc;	// IMP=0x000000000002f1e6
- (void)_MUIWKWebViewControllerCommonInit;	// IMP=0x000000000002efb0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ef69
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002eef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
