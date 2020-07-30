//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class ECLocalMessageAction, ECLocalMessageActionResults;
@protocol IMAPMessageActionPersistResultsOperationDelegate;

@interface IMAPMessageActionPersistResultsOperation : IMAPPersistenceTaskOperation
{
    ECLocalMessageAction *_messageAction;	// 8 = 0x8
    ECLocalMessageActionResults *_results;	// 16 = 0x10
    id <IMAPMessageActionPersistResultsOperationDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <IMAPMessageActionPersistResultsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ECLocalMessageActionResults *results; // @synthesize results=_results;
@property(readonly, nonatomic) ECLocalMessageAction *messageAction; // @synthesize messageAction=_messageAction;
- (void).cxx_destruct;	// IMP=0x0000000000042c7b
- (void)main;	// IMP=0x0000000000042786
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000426b7
- (id)initWithMessageAction:(id)arg1 results:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000000004260d

@end
