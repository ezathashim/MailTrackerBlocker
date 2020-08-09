//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class MFMailAccount, NSImage, NSString;

@interface AccountCell : NSActionCell
{
    MFMailAccount *_account;	// 24 = 0x18
    NSImage *_icon;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
// - (void).cxx_destruct;	// IMP=0x00000001000969fc
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000001000892df
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0000000100088f8a
@property(retain, nonatomic) NSImage *icon;
- (id)title;	// IMP=0x0000000100089562
- (struct CGSize)cellSize;	// IMP=0x00000001000969c5
- (void)setAccount:(id)arg1;	// IMP=0x0000000100088e91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100096980
- (void)_accountCellCommonInit;	// IMP=0x00000001000965b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100096569
- (id)initImageCell:(id)arg1;	// IMP=0x0000000100096522
- (id)initTextCell:(id)arg1;	// IMP=0x000000010008788e
- (id)init;	// IMP=0x00000001000964db

@end
