//
//  QTOUserInfo.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/15.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 用户信息
 */
@interface QTOUserInfo : QTOBaseBean

/**
 用户昵称
 */
@property (nonatomic,strong) NSString * nickname;

/**
 用户描述
 */
@property (nonatomic,strong) NSString * userInfo;

/**
 用户id
 */
@property (nonatomic,strong) NSString * userId;

/**
 用户头像
 */
@property (nonatomic,strong) NSString * avatar;

@end
