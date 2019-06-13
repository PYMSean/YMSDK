//
//  QTOPodCaster.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/15.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 播客信息
 */
@interface QTOPodCaster : QTOBaseBean

/**
 播客id
 */
@property (nonatomic,strong) NSString * podcasterId;

/**
 播客昵称
 */
@property (nonatomic,strong) NSString * nickname;

/**
 播客头像
 */
@property (nonatomic,strong) NSString * avatar;

/**
 播客描述
 */
@property (nonatomic,strong) NSString * podcasterInfo;

@end
