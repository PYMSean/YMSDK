//
//  QTOPlayHistory.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/15.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 播放历史信息
 */
@interface QTOPlayHistory : QTOBaseBean

/**
 专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 节目id
 */
@property (nonatomic,assign) NSInteger programId;

/**
 播放时间, 格式：2000-04-12 09:43:05
 */
@property (nonatomic,strong) NSString * playTime;

/**
 播放到的位置，单位 秒
 */
@property (nonatomic,assign) NSInteger position;

/**
 
 专辑类型
 
 - channel_live     电台专辑
 - channel_ondemand 点播专辑
 
 */
@property (nonatomic,strong) NSString * type;

/**
 节目时长
 */
@property (nonatomic,assign) float duration;

/**
 点播专辑或广播电台标题
 */
@property (nonatomic,strong) NSString * title;

/**
 收听的节目名称
 */
@property (nonatomic,strong) NSString * programName;

/**
 专辑的封面图
 */
@property (nonatomic,strong) NSString * thumb;

/**
 播放量 例:100万
 */
@property (nonatomic,strong) NSString * playCount;

@end
