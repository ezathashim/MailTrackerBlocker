//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCTaskHandler.h>

@class MFEWSAccount;

@interface MFEWSPersistenceTaskHandler : MCTaskHandler
{
    MFEWSAccount *_account;	// 8 = 0x8
}

@property(readonly) __weak MFEWSAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;	// IMP=0x000000000009a8b5
- (id)init;	// IMP=0x000000000009a7cd
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000009a766

@end

