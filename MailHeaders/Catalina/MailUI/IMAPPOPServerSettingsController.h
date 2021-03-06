//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ServerSettingsController.h"

@class ACAccount, NSNumber, NSPopUpButton, NSStackView, NSString, NSView;

@interface IMAPPOPServerSettingsController : ServerSettingsController
{
    BOOL _outgoingAccountNeedsSaving;	// 16 = 0x10
    BOOL _outgoingAccountNeedsVerification;	// 17 = 0x11
    ACAccount *_outgoingAccount;	// 24 = 0x18
    NSPopUpButton *_incomingAuthenticationPopUp;	// 32 = 0x20
    NSStackView *_outgoingServerSettings;	// 40 = 0x28
    NSView *_outgoingProperties;	// 48 = 0x30
    NSView *_outgoingDynamicallyManagedProperties;	// 56 = 0x38
    NSPopUpButton *_outgoingAuthenticationPopUp;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingAnyAccountNeedsVerification;	// IMP=0x00000001001852a1
+ (id)keyPathsForValuesAffectingIncomingAdvancedButtonTitle;	// IMP=0x000000010018516f
+ (id)keyPathsForValuesAffectingOutgoingDisablesDynamicConfiguration;	// IMP=0x0000000100184fc6
+ (id)keyPathsForValuesAffectingOutgoingSSLEnabled;	// IMP=0x0000000100184e8c
+ (id)keyPathsForValuesAffectingOutgoingPortNumber;	// IMP=0x0000000100184d68
+ (id)keyPathsForValuesAffectingOutgoingHostname;	// IMP=0x0000000100184c5a
+ (id)keyPathsForValuesAffectingOutgoingPassword;	// IMP=0x0000000100184ad0
+ (id)keyPathsForValuesAffectingOutgoingUsername;	// IMP=0x0000000100184906
+ (id)keyPathsForValuesAffectingIncomingSSLEnabled;	// IMP=0x00000001001847cc
+ (id)keyPathsForValuesAffectingIncomingPortNumber;	// IMP=0x00000001001846a8
+ (id)keyPathsForValuesAffectingIncomingHostname;	// IMP=0x000000010018459a
+ (id)keyPathsForValuesAffectingIncomingAccountTypeDescription;	// IMP=0x0000000100184500
@property(nonatomic) __weak NSPopUpButton *outgoingAuthenticationPopUp; // @synthesize outgoingAuthenticationPopUp=_outgoingAuthenticationPopUp;
@property(nonatomic) __weak NSView *outgoingDynamicallyManagedProperties; // @synthesize outgoingDynamicallyManagedProperties=_outgoingDynamicallyManagedProperties;
@property(nonatomic) __weak NSView *outgoingProperties; // @synthesize outgoingProperties=_outgoingProperties;
@property(nonatomic) __weak NSStackView *outgoingServerSettings; // @synthesize outgoingServerSettings=_outgoingServerSettings;
@property(nonatomic) __weak NSPopUpButton *incomingAuthenticationPopUp; // @synthesize incomingAuthenticationPopUp=_incomingAuthenticationPopUp;
@property(nonatomic) BOOL outgoingAccountNeedsVerification; // @synthesize outgoingAccountNeedsVerification=_outgoingAccountNeedsVerification;
@property(nonatomic) BOOL outgoingAccountNeedsSaving; // @synthesize outgoingAccountNeedsSaving=_outgoingAccountNeedsSaving;
@property(retain, nonatomic) ACAccount *outgoingAccount; // @synthesize outgoingAccount=_outgoingAccount;
// - (void).cxx_destruct;	// IMP=0x00000001001855c3
- (void)_outgoingAuthenticationPopUpClicked:(id)arg1;	// IMP=0x00000001001853c1
- (void)_incomingAuthenticationPopUpClicked:(id)arg1;	// IMP=0x0000000100185308
@property(readonly, nonatomic) BOOL anyAccountNeedsVerification;
@property(readonly, copy, nonatomic) NSString *incomingAdvancedButtonTitle;
@property(retain, nonatomic) NSNumber *outgoingDisablesDynamicConfiguration;
@property(retain, nonatomic) NSNumber *outgoingSSLEnabled;
@property(retain, nonatomic) NSNumber *outgoingPortNumber;
@property(copy, nonatomic) NSString *outgoingHostname;
@property(copy, nonatomic) NSString *outgoingPassword;
@property(copy, nonatomic) NSString *outgoingUsername;
@property(retain, nonatomic) NSNumber *incomingSSLEnabled;
@property(retain, nonatomic) NSNumber *incomingPortNumber;
@property(copy, nonatomic) NSString *incomingHostname;
@property(readonly, copy, nonatomic) NSString *incomingAccountTypeDescription;
- (void)outgoingAccountDidChange:(id)arg1;	// IMP=0x000000010018426f
- (void)_showAdvancedSettings:(id)arg1;	// IMP=0x00000001001841f7
- (id)advancedSettingsControllerIdentifier;	// IMP=0x0000000100184065
- (id)advancedSettingsSegueIdentifier;	// IMP=0x0000000100183ed3
- (void)accountDidFailToVerify:(id)arg1;	// IMP=0x0000000100183e42
- (id)getAccountsNeedingVerification;	// IMP=0x0000000100183cdd
- (void)_configureAuthenticationPopUp:(id)arg1 forAccount:(id)arg2;	// IMP=0x0000000100183366
- (void)setUpUIForAccount:(id)arg1;	// IMP=0x00000001001832cb
- (void)dismissViewController:(id)arg1;	// IMP=0x0000000100183114
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000100182fc0
- (void)setRepresentedObject:(id)arg1;	// IMP=0x0000000100182f71
- (void)viewDidLoad;	// IMP=0x0000000100182eb7
- (void)dealloc;	// IMP=0x0000000100182e42

@end

