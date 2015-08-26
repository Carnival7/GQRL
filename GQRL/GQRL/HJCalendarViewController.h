//
//  HJCalendarViewController.h
//  GQRL
//
//  Created by 七 on 15/8/26.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HJCalendarLogic.h"

//回掉代码块
typedef void (^CalendarBlock)(HJCalendarDayModel *model);

@interface HJCalendarViewController : UIViewController

@property(nonatomic ,strong) UICollectionView* collectionView;//网格视图

@property(nonatomic ,strong) NSMutableArray *calendarMonth;//每个月份的中的daymodel容器数组

@property(nonatomic ,strong) HJCalendarLogic *Logic;

@property (nonatomic, copy) CalendarBlock calendarblock;//回调

@end
