//
//  FontSearchResultViewController.h
//  DevelopToolBox
//
//  Created by MADAO on 16/5/18.
//  Copyright © 2016年 MADAO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FontViewController.h"

@interface FontSearchResultViewController : UIViewController

@property (nonatomic, strong) NSArray *resultDataArray;

@property (nonatomic, weak) FontViewController *mainSearchController;

@end
