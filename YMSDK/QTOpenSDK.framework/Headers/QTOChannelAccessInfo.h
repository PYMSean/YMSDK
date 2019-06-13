//
//  QTOChannelAccessInfo.h
//  QTOpenSDK
//
//  Created by cong on 2018/6/5.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

@interface QTOChannelAccessInfo : QTOBaseBean

/**
 是否有权限
 */
@property (nonatomic,assign) BOOL isValid;

/**
 有播放权限的节目id数组
 付费专辑时，空数组代表全部都有权限
 */
@property (nonatomic,strong) NSArray<NSNumber*>* programIds;

@end
