//
//  NIMColor.h
//  color-test
//
//  Created by John Nye on 28/11/2013.
//  Copyright (c) 2013 Nimbleworks LLP. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NIMColor : NSColor{
    
}
@property (atomic) NSMutableArray *existingColorHues;
-(NSColor *)newRandom;
@end
