//
//  OWDashboardViewController.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 5/2/13.
//  Copyright (c) 2013 OpenWatch FPC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWActionBarView.h"
#import "OWPaginatedTableViewController.h"

@interface OWDashboardViewController : OWPaginatedTableViewController <OWActionBarViewDelegate>

@property (nonatomic, strong) OWActionBarView *actionBarView;
@property (nonatomic, strong) UIImageView *onboardingImageView;

@end