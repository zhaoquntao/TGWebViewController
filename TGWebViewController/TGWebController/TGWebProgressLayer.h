//
//  TGWebProgressLayer.h
//  TGWebViewController
//
//  Created by 赵群涛 on 2017/9/19.
//  Copyright © 2017年 QR. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#define WIDTH [UIScreen mainScreen].bounds.size.width
@interface TGWebProgressLayer : CAShapeLayer
/** 开始加载 */
- (void)tg_startLoad;

/** 完成加载 */
- (void)tg_finishedLoadWithError:(NSError *)error;

/** 关闭时间 */
- (void)tg_closeTimer;

- (void)tg_WebViewPathChanged:(CGFloat)estimatedProgress;



@end
