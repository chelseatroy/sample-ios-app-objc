//
//  MasterViewController.h
//  sample-ios-application-objc
//
//  Created by Pivotal on 2015-11-15.
//
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

