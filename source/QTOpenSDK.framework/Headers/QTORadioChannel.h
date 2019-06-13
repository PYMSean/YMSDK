//
//  QTORadioChannel.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOThumb.h"

/**
 广播电台信息
 */
@interface QTORadioChannel : QTOBaseBean

/**
 广播电台id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 广播电台描述
 */
@property (nonatomic,strong) NSString * channelDescription;

/**
 广播电台缩略图
 */
@property (nonatomic,strong) QTOThumb * thumbs;

/**
 广播电台名称
 */
@property (nonatomic,strong) NSString * title;

/**
 广播电台最后更新节目时间
 */
@property (nonatomic,strong) NSString * updateTime;

/**
 热度值，热度值仅与播放量相关
 */
@property (nonatomic,assign) NSInteger popularity;


@end
