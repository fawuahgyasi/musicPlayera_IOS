//
//  musicPlayerAppDelegate.h
//  musicPlayer
//
//  Created by Frederick Awuah-Gyasi on 2/16/12.
//  Copyright 2012 Wake Forest University. All rights reserved.
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

