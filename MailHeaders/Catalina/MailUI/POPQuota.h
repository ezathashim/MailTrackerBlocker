//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Quota.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MFPOPSizeEngine, NSButton, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSPopUpButton, NSString;

@interface POPQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableAttributedString *_truncatedString;	// 8 = 0x8
    NSMutableDictionary *_truncatedParagraphStyle;	// 16 = 0x10
    struct QuotaSimpleSortDescriptor _simpleSortDescs[5];	// 24 = 0x18
    NSMutableArray *_messageIDs;	// 104 = 0x68
    NSPopUpButton *_showMessagesPopup;	// 112 = 0x70
    NSButton *_deleteButton;	// 120 = 0x78
}

@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NSPopUpButton *showMessagesPopup; // @synthesize showMessagesPopup=_showMessagesPopup;
// - (void).cxx_destruct;	// IMP=0x0000000100253c06
- (void)_deleteServerMessagesCompleted:(id)arg1;	// IMP=0x0000000100253b10
- (void)_deleteServerMessagesStarted:(id)arg1;	// IMP=0x0000000100253a77
- (BOOL)_updateMessage:(id)arg1;	// IMP=0x00000001002537dd
- (unsigned long long)_addMessage:(id)arg1;	// IMP=0x000000010025361c
- (void)_resortMessages;	// IMP=0x000000010025356f
- (void)_syncSortDescriptors;	// IMP=0x0000000100252de8
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x0000000100252d1a
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;	// IMP=0x0000000100252d08
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;	// IMP=0x00000001002528d3
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x00000001002526ba
- (id)_truncatedAttributedStringForString:(id)arg1;	// IMP=0x0000000100252478
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x0000000100252449
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000010025240d
- (unsigned long long)numberOfSortDescriptors;	// IMP=0x0000000100252402
- (void)engineUpdated:(id)arg1;	// IMP=0x0000000100251e47
- (void)engineDidFinish;	// IMP=0x0000000100251dca
- (void)engineDidStart;	// IMP=0x0000000100251d5b
- (id)_account;	// IMP=0x0000000100251d0b
- (void)showMessagesPopupChanged:(id)arg1;	// IMP=0x0000000100251bbd
- (void)_updateUsageField;	// IMP=0x00000001002517c5
- (id)_filterMessages:(id)arg1 showMessageType:(long long)arg2;	// IMP=0x0000000100251614
- (BOOL)_shouldShowMessage:(id)arg1 showMessageType:(long long)arg2;	// IMP=0x0000000100251530
- (void)deleteFromServer:(id)arg1;	// IMP=0x0000000100250fe1
- (void)dealloc;	// IMP=0x0000000100250f28
- (void)awakeFromNib;	// IMP=0x0000000100250d4b
- (id)initWithSizeEngine:(id)arg1;	// IMP=0x0000000100250afe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MFPOPSizeEngine *sizeEngine; // @dynamic sizeEngine;
@property(readonly) Class superclass;

@end

