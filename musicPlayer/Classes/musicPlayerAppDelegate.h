//
//  musicPlayerAppDelegate.h
//  musicPlayer
//
//  Created by Justin Watkins on 2/16/12.
//  Copyright 2012 North Carolina State University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class musicPlayerViewController;

@interface musicPlayerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    musicPlayerViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet musicPlayerViewController *viewController;

@end

