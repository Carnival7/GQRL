//
//  HJCalendarLogic.h
//  GQRL
//
//  Created by 七 on 15/8/26.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HJCalendarDayModel.h"
#import "NSData+HJCalendarLogic.h"

@interface HJCalendarLogic : NSObject

- (NSMutableArray *)reloadCalendarView:(NSDate *)date  selectDate:(NSDate *)date1 needDays:(int)days_number;
- (void)selectLogic:(HJCalendarDayModel *)day;

@end
