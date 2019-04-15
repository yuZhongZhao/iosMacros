//
//  FontAndColorMacros.h
//  TYXBirdCampus
//
//  Created by YangYongJie on 2018/11/14.
//  Copyright © 2018年 TYX. All rights reserved.
//

#ifndef FontAndColorMacros_h
#define FontAndColorMacros_h

/** 字体大小  */
#define BOLD_SYSTEM_FONT(FONTSIZE)  [UIFont boldSystemFontOfSize:FONTSIZE]
#define SYSTEM_FONT(FONTSIZE)  [UIFont systemFontOfSize:FONTSIZE]

/**
 十六进制颜色转为UIColor
 @param  #开头的十六进制数
 @return UIColor
 */
#define Color(hex)              B2BUtils.color(hex)
#define RGBA(r, g, b, a)        [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

/** 常用色值 */
#define kGrayCustomColor [UIColor colorWithRed:0.94f green:0.94f blue:0.96f alpha:1.00f]
#define kNavigationBarColor [UIColor colorWithHex:@"#2eb1ff"] // 导航栏颜色
#define kjoinButtonBackgroungColor [UIColor colorWithHex:@"ff7000"] // 
#define kBlackFontColor [UIColor colorWithHex:@"#333333"]    // 黑色字体
#define kCoverPlaceholderColor [UIColor colorWithHex:@"#e8e8e8"] // 封面占位图颜色
#define kWhiteColor [UIColor whiteColor]    // 白色
#define kDividerLineColor [UIColor colorWithHex:@"#e5e5e5"] // 分割线

#define kColorWith_e10000 [UIColor colorWithHex:@"#e10000"]
#define kColorWith_e0f5ff [UIColor colorWithHex:@"#e0f5ff"]
#define kColorWith_e2e2e2 [UIColor colorWithHex:@"#e2e2e2"]
#define kColorWith_e31d1a [UIColor colorWithHex:@"#e31d1a"]
#define kColorWith_f1f1f1 [UIColor colorWithHex:@"#f1f1f1"] // 默认灰色背景
#define kColorWith_fe0000 [UIColor colorWithHex:@"#fe0000"]
#define kColorWith_f3f3f3 [UIColor colorWithHex:@"#f3f3f3"]
#define kColorWith_ff0808 [UIColor colorWithHex:@"#ff0808"]
#define kColorWith_ff2645 [UIColor colorWithHex:@"#ff2645"]
#define kColorWith_ffd700 [UIColor colorWithHex:@"#ffd700"]
#define kColorWith_ff732e [UIColor colorWithHex:@"#ff732e"]
#define kColorWith_ff8d33 [UIColor colorWithHex:@"#ff8d33"]
#define kColorWith_ff8d00 [UIColor colorWithHex:@"#ff8d00"]
#define kColorWith_ff9c22 [UIColor colorWithHex:@"#ff9c22"]
#define kColorWith_fff000 [UIColor colorWithHex:@"#fff000"]
#define kColorWith_ff0000 [UIColor colorWithHex:@"#ff0000"] // 红色
#define kColorWith_fb0909 [UIColor colorWithHex:@"#fb0909"]
#define kColorWith_f4f4f4 [UIColor colorWithHex:@"#f4f4f4"]
#define kColorWith_f4f5f6 [UIColor colorWithHex:@"#f4f5f6"]
#define kColorWith_f46100 [UIColor colorWithHex:@"#f46100"]
#define kColorWith_f7f7f7 [UIColor colorWithHex:@"#f7f7f7"]
#define kColorWith_f9f9f9 [UIColor colorWithHex:@"#f9f9f9"]
#define kColorWith_ffd4b2 [UIColor colorWithHex:@"#ffd4b2"]
#define kColorWith_eaeaea [UIColor colorWithHex:@"#eaeaea"]
#define kColorWith_ffffff [UIColor colorWithHex:@"#ffffff"]
#define kColorWith_f5f5f5 [UIColor colorWithHex:@"#f5f5f5"]
#define kColorWith_fafbfc [UIColor colorWithHex:@"#fafbfc"]

#define kColorWith_01619a [UIColor colorWithHex:@"#01619a"]
#define kColorWith_0289da [UIColor colorWithHex:@"#0289da"]
#define kColorWith_0088cc [UIColor colorWithHex:@"#0088cc"]
#define kColorWith_444444 [UIColor colorWithHex:@"#444444"]
#define kColorWith_555555 [UIColor colorWithHex:@"#555555"]
#define kColorWith_666666 [UIColor colorWithHex:@"#666666"]
#define kColorWith_748887 [UIColor colorWithHex:@"#748887"]
#define kColorWith_777777 [UIColor colorWithHex:@"#777777"]
#define kColorWith_888888 [UIColor colorWithHex:@"#888888"]
#define kColorWith_999999 [UIColor colorWithHex:@"#999999"]

#define kColorWith_93d7ff [UIColor colorWithHex:@"#93d7ff"]
#define kColorWith_aaaaaa [UIColor colorWithHex:@"#aaaaaa"]
#define kColorWith_b1b1b1 [UIColor colorWithHex:@"#b1b1b1"]
#define kColorWith_bbbbbb [UIColor colorWithHex:@"#bbbbbb"]
#define kColorWith_bbe5fe [UIColor colorWithHex:@"#bbe5fe"]
#define kColorWith_cccccc [UIColor colorWithHex:@"#cccccc"]
#define kColorWith_eeeeee [UIColor colorWithHex:@"#eeeeee"]
#define kColorWith_dddddd [UIColor colorWithHex:@"#dddddd"]
#define kColorWith_2eb1ff [UIColor colorWithHex:@"#2eb1ff"]

#define kImageWithColor(color) [UIImage imageWithColor:color]
#define kRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.00f] // 随机色


#endif /* FontAndColorMacros_h */
