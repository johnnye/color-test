//
//  NIMAppDelegate.h
//  color-test
//
//  Created by John Nye on 28/11/2013.
//  Copyright (c) 2013 Nimbleworks LLP. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NIMColor.h"

@interface NIMAppDelegate : NSObject <NSApplicationDelegate>{
    NIMColor *color;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSView *colorView;
@property (assign) IBOutlet NSTextView *listOfHues;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
-(IBAction)newColor:(id)sender;


@end
