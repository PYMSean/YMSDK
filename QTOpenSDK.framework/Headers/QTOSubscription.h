//
//  QTOSubscription.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/29.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOPodCaster.h"
/**
 用户订单
 */
@interface QTOSubscription : QTOBaseBean

/**
 购买的专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 支付时间 format:1900-10-10 12:22:12
 */
@property (nonatomic,strong) NSString * paidTime;

/**
 过期时间 format:1900-10-10 12:22:12
 */
@property (nonatomic,strong) NSString * expireTime;

/**
 专辑付费类型,
 # channel 全本付费
 # channel_programs 单集付费
 */
@property (nonatomic,strong) NSString * type;

/**
 type为channel_programs时,已购的点播专辑节目id数组
 */
@property (nonatomic,strong) NSArray<NSNumber *> * programIds;

/**
 用户id
 */
@property (nonatomic,strong) NSString * userId;

/**
 专辑简介
 */
@property (nonatomic,strong) NSString * desc;

/**
 播放量 例:100万
 */
@property (nonatomic,strong) NSString * playCount;

/**
 专辑节目数
 */
@property (nonatomic,assign) NSInteger programCount;

/**
 专辑封面图
 */
@property (nonatomic,strong) NSString * thumb;

/**
 主播信息
 */
@property (nonatomic,strong) NSArray<QTOPodCaster *> * podcasters;

@end
