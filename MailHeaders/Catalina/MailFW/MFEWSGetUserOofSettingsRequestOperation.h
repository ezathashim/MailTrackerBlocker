//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSRequestOperation.h>

@class EWSEmailAddress, MFEWSGetUserOofSettingsResponseOperation;

@interface MFEWSGetUserOofSettingsRequestOperation : MFEWSRequestOperation
{
    EWSEmailAddress *_emailAddress;	// 8 = 0x8
}

@property(readonly, nonatomic) EWSEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
// - (void).cxx_destruct;	// IMP=0x0000000000089b5a
- (id)prepareRequest;	// IMP=0x0000000000089adf
@property(retain, nonatomic) MFEWSGetUserOofSettingsResponseOperation *responseOperation;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x0000000000089907
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x0000000000089838
- (id)initWithEmailAddress:(id)arg1 gateway:(id)arg2 errorHandler:(id)arg3;	// IMP=0x0000000000089777

@end

