//
//  AMSpringboardDemoAppDelegate.h
//  AMSpringboardDemo
//
//  Created by Andy Mroczkowski on 4/6/11.
//  Copyright 2011 Andy Mroczkowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AMSpringboardDemoAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
