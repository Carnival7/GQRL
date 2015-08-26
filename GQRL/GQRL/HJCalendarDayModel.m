//
//  HJCalendarDayModel.m
//  GQRL
//
//  Created by 七 on 15/8/26.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import "HJCalendarDayModel.h"

@implementation HJCalendarDayModel

//公共的方法
+ (HJCalendarDayModel *)calendarDayWithYear:(NSUInteger)year month:(NSUInteger)month day:(NSUInteger)day
{
    HJCalendarDayModel *calendarDay = [[HJCalendarDayModel alloc] init];//初始化自身
    calendarDay.year = year;//年
    calendarDay.month = month;//月
    calendarDay.day = day;//日
    
    return calendarDay;
}


//返回当前天的NSDate对象
- (NSDate *)date
{
    NSDateComponents *c = [[NSDateComponents alloc] init];
    c.year = self.year;
    c.month = self.month;
    c.day = self.day;
    return [[NSCalendar currentCalendar] dateFromComponents:c];
}

//返回当前天的NSString对象
- (NSString *)toString
{
    NSDate *date = [self date];
    NSString *string = [date stringFromDate:date];
    return string;
}


//返回星期
- (NSString *)getWeek
{
    
    NSDate *date = [self date];
    
    NSString *week_str = [date compareIfTodayWithDate];
    
    return week_str;
}

//判断是不是同一天
- (BOOL)isEqualTo:(HJCalendarDayModel *)day
{
    BOOL isEqual = (self.year == day.year) && (self.month == day.month) && (self.day == day.day);
    return isEqual;
}

@end
