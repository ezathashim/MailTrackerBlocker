//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString;

@protocol WebDocumentText <NSObject>
- (void)deselectAll;
- (void)selectAll;
- (NSAttributedString *)selectedAttributedString;
- (NSString *)selectedString;
- (NSAttributedString *)attributedString;
- (NSString *)string;
- (BOOL)supportsTextEncoding;
@end

