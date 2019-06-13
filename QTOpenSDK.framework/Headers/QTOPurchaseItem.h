//
//  QTOPurchaseItem.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/12.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 商品信息
 */
@interface QTOPurchaseItem : QTOBaseBean

/**
 商品价格
 */
@property (nonatomic,assign) float price;

/**
 商品促销价
 */
@property (nonatomic,assign) float promotionalPrice;

/**
 商品id
 */
@property (nonatomic,strong) NSString * itemId;

/**
 
 商品类型
 
 channel_programs表示单集购买、channel表示全本购买、channel_subscription表示订阅购买
 
 */
@property (nonatomic,strong) NSString * itemType;

/**
 
 订阅周期
 
 当商品类型为channel_subscription（订阅购买）时有值
 
 格式为以下的一种:
 
    * 1d:表示一天
    * 1M:表示一个月
    * 1y:表示一年
 
 */
@property (nonatomic,strong) NSString * subscriptionPeriod;

@end
