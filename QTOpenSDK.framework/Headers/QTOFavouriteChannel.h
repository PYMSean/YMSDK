//
//  QTOFavouriteChannel.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/15.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOPodCaster.h"

/**
 我的收藏信息
 */
@interface QTOFavouriteChannel : QTOBaseBean

/**
 专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 专辑名称
 */
@property (nonatomic,strong) NSString * title;

/**
 更新时间
 */
@property (nonatomic,strong) NSString * updateTime;

/**
 专辑类型
 
 - channel_live     电台专辑
 - channel_ondemand 点播专辑
 */
@property (nonatomic,strong) NSString * type;

/**
 专辑封面图
 */
@property (nonatomic,strong) NSString * thumb;

/**
 最新更新节目名称
 */
@property (nonatomic,strong) NSString * latestProgram;

/**
 播放量 例:100万
 */
@property (nonatomic,strong) NSString * playCount;

/**
 专辑主播信息
 */
@property (nonatomic,strong) NSArray<QTOPodCaster *> * podcasters;

/**
 专辑简介
 */
@property (nonatomic,strong) NSString * desc;

@end
