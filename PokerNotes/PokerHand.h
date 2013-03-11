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

typedef enum HandAction {
    HandActionNone,
    HandActionPostSmallBlind,
    HandActionPostBigBlind,
    HandActionCheck,
    HandActionBet,
    HandActionRaise,
    HandActionFold,
    HandActionMuck,
    HandActionDonk
} HandAction;

typedef enum HandResult {
    HandResultWin,
    HandResultLoose,
    HandResultTie
} HandResult;

extern NSString * const PlayerStackSizeKey;     // NSUInteger
extern NSString * const PlayerNameKey;          // NSString
extern NSString * const PlayerLastActionKey;    // HandAction

@interface PokerHand : NSObject
@property (strong, nonatomic) NSArray *players; // of dictionaries. Might be actual player objects
@property NSUInteger smallBlind;
@property NSUInteger bigBlind;
@property NSUInteger ante;
@property NSUInteger pot;
@property HandPhase currentHandPhase;
@property NSUInteger currentActionIndex;
@property NSUInteger currentButtonIndex;
@property NSMutableArray *handLog;
@end
