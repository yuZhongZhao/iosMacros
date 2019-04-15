
//
//  UtilsMacros.h
//  TYXBirdCampus
//
//  Created by YangYongJie on 2018/11/14.
//  Copyright © 2018年 TYX. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h

#pragma mark -- 日志配置
// 本工程推荐采用GDLog来输出日志信息
#ifdef DEBUG
#define LRString [NSString stringWithFormat:@"%s", __FILE__].lastPathComponent
#define GDLog(...) printf("%s: %s 第%d行: %s\n\n",[[NSString yj_formatterCurrentDate] UTF8String], [LRString UTF8String] ,__LINE__, [[NSString stringWithFormat:__VA_ARGS__] UTF8String])//
#else
#define GDLog(...)
#endif


#pragma mark -- 弱引用/强引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type)  __strong typeof(type) type = strong##type;



#pragma mark -- 设置 view 圆角和边框
#define kSetCornerRadius(view, radius)\
\
[view.layer setMasksToBounds:YES];\
[view.layer setCornerRadius:(radius)]

#define kSetBorder(view, borderWidth, borderColor)\
\
[view.layer setMasksToBounds:YES];\
[view.layer setBorderWidth:(borderWidth)];\
[view.layer setBorderColor:[borderColor CGColor]]




#pragma mark -- 队列
#define kDispatch_global_quque  dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)
#define kDispatch_main_queue  dispatch_get_main_queue()



#pragma mark -- 常用尺寸
#define kScreenWidth    [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight   [[UIScreen mainScreen] bounds].size.height
#define kLifeLength(x)  (((x) / 750.0f) *(kScreenWidth<kScreenHeight?kScreenWidth:kScreenHeight))  // 动态设置高
#define kThumbupBarHeight 49.0f
#define BORDER_WIDTH_1PX  ([[UIScreen mainScreen] scale] > 0.0 ? 1.0 / [[UIScreen mainScreen] scale] : 1.0)
#define kTitleMaxRow 5 // 标题(文章、回答、问题)最大行数
#define kTitleMaxRowText @"1\n2\n3\n4\n5"
#define kDesMaxRow 3 // 描述(文章、回答、问题)最大行数
#define kDesMaxRowText @"1\n2\n3"

// 判断是否是iPhone X
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 状态栏高度
#define STATUS_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NAVIGATION_BAR_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define TAB_BAR_HEIGHT (iPhoneX ? (49.f + 34.f) : 49.f)
// home indicator
#define HOME_INDICATOR_HEIGHT (iPhoneX ? 34.f : 0.f)





#pragma mark -- 单例
#define kWindow                [UIApplication sharedApplication].keyWindow
#define kNotificationCenter    [NSNotificationCenter defaultCenter]
#define kUserDefault           [NSUserDefaults standardUserDefaults]



#pragma mark -- 网络指示
// 亮出风火轮
#define kShowNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = YES
// 收起风火轮
#define HideNetworkActivityIndicator()      [UIApplication sharedApplication].networkActivityIndicatorVisible = NO
// 设置风火轮
#define NetworkActivityIndicatorVisible(x)  [UIApplication sharedApplication].networkActivityIndicatorVisible = x



#pragma mark -- 文字提示框
#define kToast(str) dispatch_async(dispatch_get_main_queue(), ^{ [kWindow hideToasts];\
[kWindow makeToast:str duration:2.0 position:CSToastPositionCenter];})



#pragma mark -- 点击事件
#define kTap_Ges(id, SEL) [[UITapGestureRecognizer alloc] initWithTarget:id action:SEL]
#define kAdd_Event(btn, target, actionName) [btn addTarget:target action:@selector(actionName) forControlEvents:UIControlEventTouchUpInside]



#pragma mark -- 网络请求错误码
#define NETWORK_UNAVAILABLE -1009 // 网络断开或不可用
#define FORBIDDEN_STATUS 403 // 访问被禁止，(http错误码)
#define FORBIDDEN_STATUS_400 400 // 丢失token,没有登录
#define SUCCESS_STATUS 200 // 访问成功 (http错误码)
#define SUCCESS_CODE 1 // 访问成功 (server错误码)
#define FORBIDDEN_CODE 1016 // 访问被禁止，需重新登录(server错误码)
#define Status_CODE 500 // 服务器内部错误
#define Code_CODE 6001 // 服务器内部错误，具体错误原因是该课程已删除



#pragma mark -- 单例宏
#undef    AS_SINGLETON
#define AS_SINGLETON( __class ) \
- (__class *)sharedInstance; \
+ (__class *)sharedInstance;

#undef    DEF_SINGLETON
#define DEF_SINGLETON( __class ) \
- (__class *)sharedInstance \
{ \
return [__class sharedInstance]; \
} \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once( &once, ^{ __singleton__ = [[[self class] alloc] init]; } ); \
return __singleton__; \
}


#pragma mark -- 打包宏
#undef    AS_PACKAGE
#define AS_PACKAGE( __parentClass, __class, __propertyName ) \
@class __class; \
@interface __parentClass (AutoLoad_##__propertyName) \
@property (nonatomic, readonly) __class * __propertyName; \
@end

#undef    DEF_PACKAGE
#define DEF_PACKAGE( __parentClass, __class, __propertyName ) \
@implementation __parentClass (AutoLoad_##__propertyName) \
@dynamic __propertyName; \
- (__class *)__propertyName \
{ \
return [__class sharedInstance]; \
} \
@end

#undef    AS_PACKAGE_INSTANCE
#define AS_PACKAGE_INSTANCE( __parentClass, __class, __propertyName ) \
@class __class; \
@interface __parentClass (AutoLoad_##__propertyName) \
@property (nonatomic, readonly) __class * __propertyName; \
@end \
@interface __class : NSObject \
AS_SINGLETON( __class ); \
@end

#undef    DEF_PACKAGE_INSTANCE
#define DEF_PACKAGE_INSTANCE( __parentClass, __class, __propertyName ) \
@implementation __parentClass (AutoLoad_##__propertyName) \
@dynamic __propertyName; \
- (__class *)__propertyName \
{ \
return [__class sharedInstance]; \
} \
@end \
@implementation __class \
DEF_SINGLETON( __class ); \
@end
////////////////////////////////////////////
#pragma mark -

#endif /* UtilsMacros_h */
