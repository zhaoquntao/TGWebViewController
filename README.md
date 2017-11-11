# 导航条底部进度条
# TGWebViewController
TGWebViewController
# GIF
![TGWebViewController](GIF/ScreenImage.gif "TGWebViewController")

## 把TGWebController 拖到你的工程中 
## 已经适配iPhoneX了哟
## 导入#import "TGWebViewController.h"
```
    TGWebViewController *web = [[TGWebViewController alloc] init];
    //网址
    web.url = @"http://www.jianshu.com/u/9e396019b1ca";
    //
    web.webTitle = @"web";
    //进度条颜色
    web.progressColor = [UIColor blueColor];
    [self.navigationController pushViewController:web animated:YES];
 ``` 
 
 ####
  内部基本原理 
 ```
    - (void)initBezierPath {
    //绘制贝塞尔曲线
    UIBezierPath *path = [UIBezierPath bezierPath];
    //起点
    [path moveToPoint:CGPointMake(0, 3)];
    //终点
    [path addLineToPoint:CGPointMake(WIDTH,3)];
    
    self.path = path.CGPath;
    self.strokeEnd = 0;
    _plusWidth = 0.005;
    self.lineWidth = 2;
    self.strokeColor = [UIColor redColor].CGColor;
    
    _timer = [NSTimer scheduledTimerWithTimeInterval:ProgressTimeInterval target:self selector:@selector(pathChanged:) userInfo:nil repeats:YES];
    [_timer tg_pauseTime];
}
 ``` 
 
 
 ```
      //在KVO 计算  实际的读取进度时,调用改方法
    - (void)tg_WebViewPathChanged:(CGFloat)estimatedProgress {
        self.strokeEnd = estimatedProgress;
    
      }

    - (void)tg_startLoad {
       [_timer tg_webPageTimeWithTimeInterval:ProgressTimeInterval];
    
       }
 ``` 
 
 
 --------------
 ### 😀😊😎
 ## 感谢 [RxWebViewController](https://github.com/Roxasora/RxWebViewController) 提供的思路
 
 
