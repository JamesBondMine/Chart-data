//
//  PYLinkStyle.h
//  iOS-Echarts
//
//  Created by Pluto Y on 7/26/16.
//  Copyright © 2016 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PYColor;

typedef NSString *PYLinkStyleType;

extern PYLinkStyleType const PYLinkStyleTypeLine;
extern PYLinkStyleType const PYLinkStyleTypeCurve;

/**
 *
 *  You can goto this website for references:
 *  http://echarts.baidu.com/echarts2/doc/doc.html#LinkStyle
 *
 */
@interface PYLinkStyle : NSObject

@property (nonatomic, copy) PYLinkStyleType type;
@property (nonatomic, strong) PYColor *color;
@property (nonatomic, strong) NSNumber *width;

@end
