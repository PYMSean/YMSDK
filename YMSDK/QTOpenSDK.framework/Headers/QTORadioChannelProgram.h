//
//  QTORadioChannelProgram.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOBroadcaster.h"

/**
 广播节目
 */
@interface QTORadioChannelProgram : QTOBaseBean


/**
 节目所在广播电台id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 广播节目id
 */
@property (nonatomic,assign) NSInteger programId;

/**
 广播节目名称
 */
@property (nonatomic,strong) NSString * title;

/**
 广播节目开始时间 格式： 1900-0-0 12:12:12
 */
@property (nonatomic,strong) NSString * startTime;

/**
 广播节目结束时间 格式： 1900-0-0 12:12:12
 */
@property (nonatomic,strong) NSString * endTime;

/**
 广播节目时长，单位 秒
 */
@property (nonatomic,assign) NSInteger duration;

/**
 广播员信息
 */
@property (nonatomic,strong) NSArray<QTOBroadcaster *>* broadcasters;

@end
