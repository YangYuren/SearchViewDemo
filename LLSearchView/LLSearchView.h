//
//  LLSearchView.h
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef void(^TapActionBlock)(NSString *str);
@interface LLSearchView : UIView

@property (nonatomic, copy) TapActionBlock tapAction;

- (instancetype)initWithFrame:(CGRect)frame hotArray:(NSMutableArray *)hotArr historyArray:(NSMutableArray *)historyArr;

@end
