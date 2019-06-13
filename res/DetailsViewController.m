//
//  DetailsViewController.m
//  ADTest
//
//  Created by 庞伊明 on 2019/6/13.
//  Copyright © 2019 Markphone Culture Media Co.Ltd. All rights reserved.
//

#import "DetailsViewController.h"
#import <Foundation/Foundation.h>
@interface DetailsViewController ()

@end

@implementation DetailsViewController

- (void)viewDidLoad {
    
    
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor greenColor];
    self.navigationController.navigationBar.hidden = YES;
    
    UIButton * btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:@"返回" forState:UIControlStateNormal];
    btn.frame = CGRectMake(0, 0, self.view.frame.size.width, 160);
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(backWay) forControlEvents:UIControlEventTouchUpInside];
    btn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    [self.view addSubview:btn];
    
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(waitWay) name:UIApplicationDidEnterBackgroundNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(waitWay1) name:UIApplicationWillEnterForegroundNotification object:nil];

}

- (void)waitWay{
    NSLog(@"didactive3");
}
- (void)waitWay1{
    NSLog(@"didactive4");
}
- (void)backWay{
    [self.navigationController popViewControllerAnimated:YES];
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
