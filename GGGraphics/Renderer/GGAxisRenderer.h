//
//  GGAxisRenderer.h
//  111
//
//  Created by _ | Durex on 2017/5/27.
//  Copyright © 2017年 wenhua. All rights reserved.
//

#import "GGChart.h"

@interface GGAxisRenderer : NSObject <GGRenderProtocol>

@property (nonatomic, assign) GGAxis axis;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) BOOL showLine;
@property (nonatomic, assign) BOOL showSep;
@property (nonatomic, assign) CGSize lineOffSet;

@property (nonatomic, copy) NSArray <NSString *>* aryString;
@property (nonatomic, strong) UIColor *strColor;
@property (nonatomic, strong) UIFont *strFont;
@property (nonatomic, assign) BOOL showText;

@end