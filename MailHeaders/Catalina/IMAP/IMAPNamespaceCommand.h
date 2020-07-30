//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSArray, NSString;
@protocol IMAPAccount;

@interface IMAPNamespaceCommand : IMAPSingleCommand
{
    id <IMAPAccount> _account;	// 8 = 0x8
    NSString *_separatorChar;	// 16 = 0x10
    NSArray *_privateNamespaces;	// 24 = 0x18
    NSArray *_publicNamespaces;	// 32 = 0x20
    NSArray *_sharedNamespaces;	// 40 = 0x28
}

@property(copy, nonatomic) NSArray *sharedNamespaces; // @synthesize sharedNamespaces=_sharedNamespaces;
@property(copy, nonatomic) NSArray *publicNamespaces; // @synthesize publicNamespaces=_publicNamespaces;
@property(copy, nonatomic) NSArray *privateNamespaces; // @synthesize privateNamespaces=_privateNamespaces;
@property(copy, nonatomic) NSString *separatorChar; // @synthesize separatorChar=_separatorChar;
@property(retain, nonatomic) id <IMAPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;	// IMP=0x0000000000045b6c
- (long long)maxAllowedConnectionState;	// IMP=0x0000000000045aac
- (long long)minRequiredConnectionState;	// IMP=0x0000000000045aa1
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000045a86
- (BOOL)shouldSendAgainOnError;	// IMP=0x0000000000045a7b
- (id)activityString;	// IMP=0x0000000000045a0f
- (id)commandTypeString;	// IMP=0x00000000000459f0
- (id)init;	// IMP=0x0000000000045921
- (id)initWithAccount:(id)arg1 separatorChar:(id)arg2;	// IMP=0x000000000004586c

@end
