//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObject, NSManagedObjectContext;

@interface MFSeenMessagesManager : NSObject
{
    NSManagedObject *_account;	// 8 = 0x8
    NSManagedObjectContext *_managedObjectContext;	// 16 = 0x10
}

+ (id)_managedObjectContext;	// IMP=0x0000000000203d14
+ (BOOL)migrateAccountFromAccountUID:(id)arg1 toSystemAccountIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002026d5
+ (void)closeSeenMessageStore;	// IMP=0x000000000020269a
+ (id)_sharedSeenMessagesStore;	// IMP=0x00000000002025fb
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSManagedObject *account; // @synthesize account=_account;
// - (void).cxx_destruct;	// IMP=0x0000000000203de0
- (void)saveChanges;	// IMP=0x0000000000203c91
- (void)removeMessagesNotOnServer:(id)arg1;	// IMP=0x0000000000203acd
- (void)removeServerDeletedMessages;	// IMP=0x0000000000203976
@property(readonly, copy, nonatomic) NSArray *messagesToBeDeletedFromServer;
@property(readonly, copy, nonatomic) NSArray *seenMessages;
- (void)removeMessageIDs:(id)arg1;	// IMP=0x000000000020326b
- (id)addMessageID:(id)arg1 dateSeen:(id)arg2;	// IMP=0x0000000000203115
@property(readonly, nonatomic) unsigned long long countOfSeenMessages;
- (id)seenMessageForMessageID:(id)arg1;	// IMP=0x0000000000202d23
- (id)_addAccountWithID:(id)arg1;	// IMP=0x0000000000202c26
- (id)_accountForAccountID:(id)arg1;	// IMP=0x0000000000202a2b
- (id)init;	// IMP=0x000000000020252c
- (id)initWithAccountID:(id)arg1 createAccount:(BOOL)arg2;	// IMP=0x000000000020241a

@end
