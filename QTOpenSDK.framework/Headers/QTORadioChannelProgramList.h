//
//  QTORadioChannelProgramList.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTORadioChannelProgram.h"

/**
 广播节目单
 */
@interface QTORadioChannelProgramList : QTOBaseBean

// 周一节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnMon;

// 周二节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnTue;

// 周三节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnWed;

// 周四节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnThu;

// 周五节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnFri;

// 周六节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnSat;

// 周日节目单
@property (nonatomic,strong) NSArray<QTORadioChannelProgram *> * programsOnSun;

-(NSArray<QTORadioChannelProgram *>*)programsOnDate:(NSDate *)date;

@end
