//
//  TGWebViewController.h
//  TGWebViewController
//
//  Created by 赵群涛 on 2017/9/15.
//  Copyright © 2017年 QR. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TGWebViewController : UIViewController


/** 相关链接*/
@property (nonatomic, copy) NSString *url;

/** 标题 */
@property (nonatomic, copy) NSString *webTitle;

/** 进度条颜色 */
@property (nonatomic, assign) UIColor *progressColor;

@end
