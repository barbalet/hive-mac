//
//  HITransactionPopoverViewController.h
//  Hive
//
//  Created by Jakub Suder on 11/08/14.
//  Copyright (c) 2014 Hive Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class HITransactionPopoverViewController;

@protocol HITransactionPopoverDelegate <NSObject>
@optional
- (void)transactionPopoverDidClose:(HITransactionPopoverViewController *)controller;
@end

@interface HITransactionPopoverViewController : NSViewController

@property (strong) id<HITransactionPopoverDelegate> delegate;

- (instancetype)initWithTransaction:(HITransaction *)transaction;
- (NSPopover *)createPopover;

@end
