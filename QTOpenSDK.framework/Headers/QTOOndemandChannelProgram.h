//
//  QTOOndemandChannelProgram.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 点播专辑节目
 */
@interface QTOOndemandChannelProgram : QTOBaseBean

/**
 点播专辑节目id
 */
@property (nonatomic,assign) NSInteger programId;

/**
 点播专辑节目名称
 */
@property (nonatomic,strong) NSString * title;

/**
 是否是免费节目
 */
@property (nonatomic,assign) BOOL isFree;

/**
 节目时长
 */
@property (nonatomic,assign) NSInteger duration;

/**
 节目更新时间 格式： 1900-0-0 12:12:12
 */
@property (nonatomic,strong) NSString * updateTime;

@end
