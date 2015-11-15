//
//  DetailViewController.h
//  sample-ios-application-objc
//
//  Created by Pivotal on 2015-11-15.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

