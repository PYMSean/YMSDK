//
//  QTOItemDictionary.h
//  QTOpenSDK
//
//  Created by Chicago on 2018/10/11.
//  Copyright © 2018 qt. All rights reserved.
//

#import "QTOBaseBean.h"

@interface QTOItemDictionary<T:QTOBaseBean *>: QTOBaseBean

-(instancetype)initWithDict:(NSDictionary *)dict type:(Class)className;

/**
 数据
 */
@property (nonatomic,strong) NSDictionary<NSString *, T> * dict;
@property (nonatomic,assign) Class dataClass;

@end

