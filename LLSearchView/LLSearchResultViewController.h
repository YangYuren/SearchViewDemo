//
//  LLSearchResultViewController.h
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LLSearchResultViewController : UIViewController

@property (nonatomic, copy) NSString *searchStr;
@property (nonatomic, strong) NSMutableArray *hotArray;
@property (nonatomic, strong) NSMutableArray *historyArray;

@end
