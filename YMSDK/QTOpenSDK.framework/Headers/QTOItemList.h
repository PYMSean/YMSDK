//
//  QTOItemList.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/17.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

@interface QTOItemList<T:QTOBaseBean *>: QTOBaseBean

-(instancetype)initWithDict:(NSDictionary *)dict type:(Class)className;
/**
 数据列表
 */
@property (nonatomic,strong) NSArray<T> * items;
@property (nonatomic,assign) Class dataClass;

@end
