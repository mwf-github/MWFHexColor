//
//  UIColor+MWFHexColor.h
//  MWFHexColor
//
//  Created by mwf on 2021/4/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (MWFHexColor)

+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

//默认alpha值为1
+ (UIColor *)colorWithHexString:(NSString *)color;

@end

NS_ASSUME_NONNULL_END
