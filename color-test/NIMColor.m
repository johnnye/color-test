//
//  NIMColor.m
//  color-test
//
//  Created by John Nye on 28/11/2013.
//  Copyright (c) 2013 Nimbleworks LLP. All rights reserved.
//

#import "NIMColor.h"

@implementation NIMColor

@synthesize existingColorHues = _existingColorHues;

-(NSColor *)newRandom{
    int nextColor;
    if (self.existingColorHues == nil) {
        self.existingColorHues = [[NSMutableArray alloc] initWithCapacity:360];
        for (int j = 0; j<360; j++) {
            [self.existingColorHues addObject:[NSNumber numberWithBool:FALSE]];
        }
        nextColor = arc4random_uniform(355);
        [self.existingColorHues replaceObjectAtIndex:nextColor withObject:[NSNumber numberWithBool:TRUE]];
        return [NSColor colorWithHue:nextColor/255.0f saturation:0.5f brightness:0.8f alpha:1.0f];
    }
    
    //Binary Gap:
    int startingIndex   = -1;
    int currentStreakStart = 0;
    int endingIndex     = -1;
    int largest         = -1;
    int currentCount    = 0;
    
    for (int i =0; i< [self.existingColorHues count]; i++){
        if ([[self.existingColorHues objectAtIndex:i]boolValue] == FALSE) {
            currentCount++;
            if (currentCount == 1) {
                currentStreakStart = i;
            }
        }else{
            currentCount = 0;
        }
        if (currentCount > largest){
            largest = currentCount;
            endingIndex = i;
            startingIndex = currentStreakStart;
        }
        
    }

    nextColor = (largest/2)+startingIndex;

    if(largest == -1){
        NSLog(@"Full Array");
    }

    [self.existingColorHues replaceObjectAtIndex:nextColor withObject:[NSNumber numberWithBool:TRUE]];
    return [NSColor colorWithHue:nextColor/360.0f saturation:0.5f brightness:0.8f alpha:1.0f];
}
@end
