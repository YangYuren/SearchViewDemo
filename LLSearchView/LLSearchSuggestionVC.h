//
//  LLSearchSuggestionVC.h
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SuggestSelectBlock)(NSString *searchTest);
@interface LLSearchSuggestionVC : UIViewController

@property (nonatomic, copy) SuggestSelectBlock searchBlock;

- (void)searchTestChangeWithTest:(NSString *)test;

@end
