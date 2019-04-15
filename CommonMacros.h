//
//  CommonMacros.h
//  TYXBirdCampus
//
//  Created by YangYongJie on 2018/11/14.
//  Copyright © 2018年 TYX. All rights reserved.
//

#ifndef CommonMacros_h
#define CommonMacros_h

#pragma mark - 系统相关的
// 获取系统版本号
#define SYSTEM_VERSION  [[UIDevice currentDevice].systemVersion doubleValue]
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//是否为4inch及以上
#define iPhone5Later (SCREEN_WIDTH >= 568 || SCREEN_HEIGHT >= 568)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_5_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 667.0)
#define IS_IPHONE_6_OR_More (IS_IPHONE && SCREEN_MAX_LENGTH >= 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)


#define IOS11_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define IOS10_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define IOS9_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define IOS8_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define IOS7_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IOS6_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define IOS5_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define IOS4_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 4.0)
#define IOS3_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] floatValue] >= 3.0)

#pragma mark - APP 相关的
// 获取APP名称
#define APP_NAME ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"])
// 程序版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
// 获取APP build版本
#define APP_BUILD ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])


#pragma mark - 内存路径
#define kPathSandHome     NSHomeDirectory()
#define kPathTemp         NSTemporaryDirectory()
#define kPathDocument     [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]


#endif /* CommonMacros_h */
