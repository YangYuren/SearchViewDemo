//
//  LLSearchResultDoubleViewCell.h
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define KWidth (KScreenWidth > 375 ? 576/3 : 345/2)
#define kSpace (KScreenWidth - KWidth * 2) / 3

@interface LLSearchResultDoubleViewCell : UITableViewCell

- (void)configResultDoubleViewCellWithFirstTitle:(NSString *)firstTitle secondTitle:(NSString *)secondTitle;

@end
