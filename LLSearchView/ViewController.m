//
//  ViewController.m
//  LLSearchView
//
//  Created by Yang on 2017/9/15.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import "ViewController.h"
#import "LLSearchViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.title = @"点击右边搜索";

    UIButton *rightBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    rightBtn.frame = CGRectMake(0, 0, 44, 44);
    [rightBtn setImage:[UIImage imageNamed:@"Home_Search"] forState:UIControlStateNormal];
    [rightBtn addTarget:self action:@selector(searchAction:) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *rightBtnItem = [[UIBarButtonItem alloc] initWithCustomView:rightBtn];
    self.navigationItem.rightBarButtonItem = rightBtnItem;
    self.navigationItem.backBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"" style:UIBarButtonItemStylePlain target:self action:nil];
    
}

- (void)searchAction:(UIButton *)sender
{
    LLSearchViewController *seachVC = [[LLSearchViewController alloc] init];
    [self.navigationController pushViewController:seachVC animated:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
