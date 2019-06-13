//
//  QTOOndemandChannel.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/12.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOThumb.h"
#import "QTOPurchaseItem.h"
#import "QTOPodCaster.h"
#import "QTOOndemandCategory.h"
#import "QTOOndemandChannelAttribute.h"

/**
 点播专辑
 */
@interface QTOOndemandChannel : QTOBaseBean

/**
 点播专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 点播专辑名称
 */
@property (nonatomic,strong) NSString * title;

/**
 点播专辑更新时间 格式： 1900-0-0 12:12:12
 */
@property (nonatomic,strong) NSString * updateTime;

/**
 点播专辑描述
 */
@property (nonatomic,strong) NSString * channelDescription;

/**
 专辑是否完结
 */
@property (nonatomic,assign) BOOL isFinished;

/**
 专辑评星（范围为0到10）
 */
@property (nonatomic,assign) NSInteger star;

/**
 热度值（范围为0到+∞）热度值仅与播放量相关
 */
@property (nonatomic,assign) NSInteger popularity;

/**
 播放量
 */
@property (nonatomic,assign) NSInteger playCount;

/**
 专辑节目数量
 */
@property (nonatomic,assign) NSInteger programCount;

/**
 最新一期节目id
 */
@property (nonatomic,assign) NSString * latestProgramId;

/**
 最新一期节目名称
 */
@property (nonatomic,strong) NSString * latestProgramTitle;

/**
 专辑封面缩略图
 */
@property (nonatomic,strong) QTOThumb * thumbs;

/**
 专辑付费项目
 */
@property (nonatomic,strong) NSArray<QTOPurchaseItem *> * purchaseItems;

/**
 付费专辑的默认商品富文本信息
 */
@property (nonatomic,strong) NSString * purchaseItemSummary;

/**
 主播列表
 */
@property (nonatomic,strong) NSArray<QTOPodCaster *> * podcasters;

/**
 专辑所属分类
 */
@property (nonatomic,strong) NSArray<QTOOndemandCategory *> * categories;

/**
 属性标签
 */
@property (nonatomic,strong) NSArray<QTOOndemandChannelAttribute *> * attributes;

/**
 哪些会员可以免费收听
 */
@property (nonatomic,strong) NSArray<NSString *> * freeVips;

/**
 专辑是否免费 true免费，false付费
 */
@property (nonatomic,assign) BOOL isFree;

@end
