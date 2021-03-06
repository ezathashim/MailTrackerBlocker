//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSDateFormatter, NSFont;

@interface DateCell : NSTextFieldCell
{
    BOOL _forceTextColor;	// 24 = 0x18
    _Bool _lastStringWasRTL;	// 25 = 0x19
    long long _dateDetailLevel;	// 32 = 0x20
    double _lastWidth;	// 40 = 0x28
}

+ (void)_resetDateFormats:(id)arg1;	// IMP=0x00000001001284ea
+ (void)initialize;	// IMP=0x000000010001335b
@property(nonatomic) _Bool lastStringWasRTL; // @synthesize lastStringWasRTL=_lastStringWasRTL;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(nonatomic) long long dateDetailLevel; // @synthesize dateDetailLevel=_dateDetailLevel;
@property(nonatomic) BOOL forceTextColor; // @synthesize forceTextColor=_forceTextColor;
- (void)_updateDateColumnDetailLevels;	// IMP=0x000000010012b65c
- (void)_updateDateColumnDetailLevelWidths;	// IMP=0x000000010012b485
- (BOOL)_readWidthsFromDefaults;	// IMP=0x000000010012af96
- (void)_saveWidthsToDefaults;	// IMP=0x000000010012ac9e
- (id)_newWeekdayWidthReferenceDatesFirstWeekday:(unsigned long long *)arg1;	// IMP=0x000000010012aa7d
- (id)_newMonthWidthReferenceDates;	// IMP=0x000000010012a85e
- (double)_widthOfLongestDateStringWithLevel:(long long)arg1 format:(id)arg2;	// IMP=0x000000010012a09e
- (double)_widthOfStringWithTimeFormat:(id)arg1 withDatePrefix:(id)arg2;	// IMP=0x0000000100129e1d
@property(retain, nonatomic) NSFont *lastFont;
- (void)setDrawingAttributes:(id)arg1;	// IMP=0x0000000100129d77
- (id)drawingAttributes;	// IMP=0x0000000100129d66
- (long long)accessibilityLineForIndex:(long long)arg1;	// IMP=0x0000000100129d5b
- (id)accessibilityStringForRange:(struct _NSRange)arg1;	// IMP=0x0000000100129cf7
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;	// IMP=0x0000000100129cb1
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;	// IMP=0x0000000100129c10
- (long long)accessibilityNumberOfCharacters;	// IMP=0x0000000100129ba2
- (struct _NSRange)accessibilityVisibleCharacterRange;	// IMP=0x0000000100129b4c
- (id)accessibilityValue;	// IMP=0x0000000100129b1e
- (id)stringValue;	// IMP=0x000000010012987e
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x000000010012948b
@property(readonly, nonatomic) double minimumWidth;
- (void)setObjectValue:(id)arg1;	// IMP=0x00000001001293f3
- (void)setTimeIntervalSince1970:(double)arg1;	// IMP=0x00000001001293a0
@property(nonatomic) BOOL underlinesText;
- (void)setNeedsDisplay:(BOOL)arg1;	// IMP=0x000000010012924e
- (void)setAlignment:(long long)arg1;	// IMP=0x000000010012918a
- (void)setTextColor:(id)arg1;	// IMP=0x00000001001290bf
- (void)setFont:(id)arg1;	// IMP=0x0000000100013600
@property(retain) NSDateFormatter *formatter;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100128d02
- (void)_initDateFormatter;	// IMP=0x0000000100128ac5
- (void)awakeFromNib;	// IMP=0x0000000100014dc8
- (void)_dateCellCommonInit;	// IMP=0x0000000100128985
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000135b9
- (id)initTextCell:(id)arg1;	// IMP=0x00000001001288f3

@end

