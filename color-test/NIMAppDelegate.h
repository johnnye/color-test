//
//  NIMAppDelegate.h
//  color-test
//
//  Created by John Nye on 28/11/2013.
//  Copyright (c) 2013 Nimbleworks LLP. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NIMAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
