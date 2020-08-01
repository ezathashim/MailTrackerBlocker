//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFormatter, NSCache, NSMutableDictionary, NSNotificationCenter;

@interface MCDisplayNameManager : NSObject
{
    NSCache *_parsedDisplayNameInfos;	// 8 = 0x8
    NSMutableDictionary *_queriedDisplayNameInfos;	// 16 = 0x10
    NSNotificationCenter *_displayNameNotificationCenter;	// 24 = 0x18
    CNContactFormatter *_fullNameFormatter;	// 32 = 0x20
    CNContactFormatter *_shortNameFormatter;	// 40 = 0x28
}

+ (id)formattedStringForAddressList:(id)arg1;	// IMP=0x000000000003548d
+ (id)formattedStringForDisplayNameInfoList:(id)arg1;	// IMP=0x0000000000008a22
+ (id)namesFromDisplayNameInfos:(id)arg1;	// IMP=0x000000000000f97f
+ (id)sharedInstance;	// IMP=0x00000000000075ab
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a137
@property(readonly, nonatomic) CNContactFormatter *shortNameFormatter; // @synthesize shortNameFormatter=_shortNameFormatter;
@property(readonly, nonatomic) CNContactFormatter *fullNameFormatter; // @synthesize fullNameFormatter=_fullNameFormatter;
@property(readonly, nonatomic) NSNotificationCenter *displayNameNotificationCenter; // @synthesize displayNameNotificationCenter=_displayNameNotificationCenter;
// - (void).cxx_destruct;	// IMP=0x000000000004a77a
- (void)resetCachedDisplayNamesFromContacts;	// IMP=0x000000000004a6f3
- (void)_nameContactsChanged:(id)arg1;	// IMP=0x000000000000ed72
- (void)removeDisplayNameObserver:(id)arg1;	// IMP=0x000000000001354d
- (void)addDisplayNameObserver:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000007a26
- (id)_createDisplayNameInfoWithAddress:(id)arg1;	// IMP=0x0000000000007e4b
- (id)_createDisplayNameInfoWithContact:(id)arg1 fullName:(id)arg2;	// IMP=0x00000000000080cf
- (id)_createDisplayNameInfoWithContact:(id)arg1;	// IMP=0x000000000000edd5
- (id)_queriedDisplayNameInfoForAddress:(id)arg1;	// IMP=0x00000000000084fe
- (id)_cacheItemForFullAddress:(id)arg1;	// IMP=0x0000000000007c58
- (id)displayNameForAddress:(id)arg1;	// IMP=0x0000000000007b3b
- (void)dealloc;	// IMP=0x000000000004a1f0
- (id)init;	// IMP=0x0000000000007664

@end
