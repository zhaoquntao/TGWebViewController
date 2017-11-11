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
 
 ###😀😊😎
 感谢 [AXWebViewController](https://github.com/devedbox/AXWebViewController)
 
 
