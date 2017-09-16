//
//  LLSearchResultView.h
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LLSearchResultView : UIView

- (instancetype)initWithFrame:(CGRect)frame dataSource:(NSMutableArray *)dataArr;

- (void)refreshResultViewWithIsDouble:(BOOL)isDouble;

@end
