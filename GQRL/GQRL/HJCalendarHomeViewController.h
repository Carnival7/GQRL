//
//  HJCalendarHomeViewController.h
//  GQRL
//
//  Created by 七 on 15/8/26.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HJCalendarViewController.h"

@interface HJCalendarHomeViewController : HJCalendarViewController

@property (nonatomic, strong) NSString *calendartitle;//设置导航栏标题

- (void)setAirPlaneToDay:(int)day ToDateforString:(NSString *)todate;//飞机初始化方法

- (void)setHotelToDay:(int)day ToDateforString:(NSString *)todate;//酒店初始化方法

- (void)setTrainToDay:(int)day ToDateforString:(NSString *)todate;//火车初始化方法


@end
