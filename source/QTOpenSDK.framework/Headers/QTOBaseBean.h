//
//  QTOBaseBean.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/7.
//  Copyright © 2018年 qt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QTOBeanType.h"

@protocol QTOBaseBeanProtocol<NSObject>

-(instancetype)initWithDict:(NSDictionary *)dict;

@end

@interface QTOBaseBean : NSObject<NSCoding,QTOBaseBeanProtocol>
+(NSArray *) beanArrayForClass:(Class<QTOBaseBeanProtocol>)beanClass
                     withInfos:(NSArray<NSDictionary *>*) infos;
@end
