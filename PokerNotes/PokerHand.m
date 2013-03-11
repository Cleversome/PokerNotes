//
//  PokerRound.m
//  PokerNotes
//
//  Created by Elazar Yifrach on 3/10/13.
//  Copyright (c) 2013 Cleversome. All rights reserved.
//

#import "PokerHand.h"

@implementation PokerHand
- (id)init
{
    self = [super init];
    if (self) {
        self.players = @[@{
        PlayerNameKey : @"Villain 1",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionPostSmallBlind),
        PlayerNameKey : @"Villain 2",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionPostBigBlind),
        PlayerNameKey : @"Hero",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 4",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 5",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 6",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 7",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 8",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 9",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone),
        PlayerNameKey : @"Villain 10",
        PlayerStackSizeKey : @(100),
        PlayerLastActionKey : @(HandActionNone)}];
        
    }
    return self;
}
@end
