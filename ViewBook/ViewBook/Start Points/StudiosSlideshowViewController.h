//
//  StudiosSlideshowViewController.h
//  ViewBook
//
//  Created by Jesse Scott on 2013-08-19.
//  Copyright (c) 2013 Emily Carr Institute of Art + Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StudiosSlideshowViewController : UIViewController {
    
    // Custom Font
    UIFont *captionFont;
    
}

// Image View
@property (weak, nonatomic) IBOutlet UIImageView *slideshow;


// Back To Main Menu
- (IBAction)back:(id)sender;

@end
