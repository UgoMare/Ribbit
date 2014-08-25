//
//  ImageViewController.h
//  Ribbit
//
//  Created by Ugo on 25/08/2014.
//  Copyright (c) 2014 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end
