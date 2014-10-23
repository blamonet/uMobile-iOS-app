//
//  Config.h
//  uMobile
//
//  Connects to the umobile-global-config webapp to respond to server-side configuration settings.
//
//  Created by Andrew Clissold on 9/30/14.
//  Copyright (c) 2014 uMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Config : NSObject<UIAlertViewDelegate>

@property (nonatomic, getter=isAvailable) BOOL available;
@property (nonatomic, getter=isUpgradeRecommended) BOOL upgradeRecommended;
@property (nonatomic, getter=isUpgradeRequired) BOOL upgradeRequired;

// To help determine if ErrorViewController should be presented.
@property (nonatomic, getter=hasUnrecoverableError) BOOL unrecoverableError;

+ (instancetype)sharedConfig;

- (void)check;
- (void)showUpgradeRecommendedAlert;

@end
