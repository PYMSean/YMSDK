//
//  QTOBroadcaster.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 广播员信息
 */
@interface QTOBroadcaster : QTOBaseBean

/**
 广播员昵称
 */
@property (nonatomic,strong) NSString * name;

/**
 广播员头像
 */
@property (nonatomic,strong) NSString * avatar;
@end
