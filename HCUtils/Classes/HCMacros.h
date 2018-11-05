//
//  HCMacros.h
//  HCMacros
//
//  Created by Darren Ng on 11/4/2018.
//  Copyright © 2018 Darren Ng. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^HCBlock)();


#define RGBAColor(r, g, b, a) [UIColor colorWithRed:(r) green:(g) blue:(b) alpha:(a)]
#define RGBColor(r, g, b) RGBAColor(r, g, b, 1.0)

#define HCSafeCast(type, expression) ( { id object = expression; ([object isKindOfClass:[type class]] ? (type *)object : nil); } )

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...)
#endif

