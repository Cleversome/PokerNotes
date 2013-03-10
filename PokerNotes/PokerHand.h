//
//  PokerRound.h
//  PokerNotes
//
//  Created by Elazar Yifrach on 3/10/13.
//  Copyright (c) 2013 Cleversome. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum HandPhase {
    HandPhasePreflop,
    HandPhaseFlop,
    HandPhaseTurn,
    HandPhaseRiver,
    HandPhaseShowdown
} HandPhase;

@interface PokerHand : NSObject
@property (strong, nonatomic) NSDictionary *players;
@property int index;
@end
