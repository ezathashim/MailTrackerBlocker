//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class SegmentedToolbarItem;

@interface SegmentedToolbarItemSegmentItem : NSToolbarItem
{
    SegmentedToolbarItem *_parent;	// 8 = 0x8
    long long _segmentNumber;	// 16 = 0x10
}

@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) __weak SegmentedToolbarItem *parent; // @synthesize parent=_parent;
// - (void).cxx_destruct;	// IMP=0x000000010027037f
- (void)setMenu:(id)arg1;	// IMP=0x0000000100270307
- (void)setImage:(id)arg1;	// IMP=0x0000000100025c79
- (void)_setTag:(long long)arg1;	// IMP=0x00000001000212dc
- (void)setTag:(long long)arg1;	// IMP=0x00000001002702a9
- (void)_setToolTip:(id)arg1;	// IMP=0x0000000100020e0b
- (void)setToolTip:(id)arg1;	// IMP=0x0000000100025bd7
- (id)menuFormRepresentation;	// IMP=0x0000000100270113

@end

