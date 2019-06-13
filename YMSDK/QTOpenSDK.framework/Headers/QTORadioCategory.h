//
//  QTORadioCategory.h
//  QTOpenSDK
//
//  Created by Chicago on 2018/9/10.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

/**
 电台分类信息
 */
@interface QTORadioCategory : QTOBaseBean

/**
 电台分类id
 */
@property (nonatomic,assign) NSInteger categoryId;

/**
 电台分类名字
 */
@property (nonatomic,strong) NSString * name;

/**
 分类类型，有2种，“regions”和 “content”
 */
@property (nonatomic,strong) NSString * categoryType;

@end


/**
 电台分类集合
 */
@interface QTORadioCategorySet:QTOBaseBean

/**
 所有的电台分类
 */
@property (nonatomic,strong) NSArray<QTORadioCategory *> * allCategories;

/**
 按地区的电台分类，例如："国家台"，"网络台"，"北京"
 */
@property (nonatomic,strong) NSArray<QTORadioCategory *> * regionCategories;

/**
 按内容的电台分类，例如："资讯台"，"音乐台"
 */
@property (nonatomic,strong) NSArray<QTORadioCategory *> * contentCategories;

@end


