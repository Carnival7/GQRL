//
//  HJCalendarDayCell.h
//  GQRL
//
//  Created by 七 on 15/8/26.
//  Copyright (c) 2015年 七. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HJCalendarDayModel.h"

@interface HJCalendarDayCell : UICollectionViewCell

{
    UILabel *day_lab;//今天的日期或者是节日
    UILabel *day_title;//显示标签
    UIImageView *imgview;//选中时的图片
}

@property(nonatomic , strong)HJCalendarDayModel *model;

@end
