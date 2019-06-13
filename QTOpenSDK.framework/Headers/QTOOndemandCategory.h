//
//  QTOOndemandCategory.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/14.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 专辑分类信息
 */
@interface QTOOndemandCategory : QTOBaseBean

/**
 专辑分类id
 */
@property (nonatomic,assign) NSInteger categoryId;

/**
 专辑分类名称
 */
@property (nonatomic,strong) NSString * categoryName;
@end
