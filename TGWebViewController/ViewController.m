//
//  ViewController.m
//  TGWebViewController
//
//  Created by 赵群涛 on 2017/9/15.
//  Copyright © 2017年 QR. All rights reserved.
//

#import "ViewController.h"
#import "TGWebViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)pushBtn:(id)sender {
    
    TGWebViewController *web = [[TGWebViewController alloc] init];
    web.url = @"http://www.jianshu.com/u/9e396019b1ca";
    web.webTitle = @"web";
    web.progressColor = [UIColor blueColor];
    [self.navigationController pushViewController:web animated:YES];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
