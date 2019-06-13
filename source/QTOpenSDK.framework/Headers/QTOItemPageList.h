//
//  QTOItemPageList.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/12.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

@interface QTOItemPageList <T:QTOBaseBean *>: QTOBaseBean

-(instancetype)initWithDict:(NSDictionary *)dict type:(Class)className;

@property (nonatomic,assign) Class dataClass;

/**
 数据列表
 */
@property (nonatomic,strong) NSArray<T> * items;

/**
 页码
 */
@property (nonatomic,assign) NSInteger page;

/**
 每页数量
 */
@property (nonatomic,assign) NSInteger pageSize;

/**
 总数
 */
@property (nonatomic,assign) NSInteger total;

@end
