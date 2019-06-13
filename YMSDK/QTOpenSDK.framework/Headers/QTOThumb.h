//
//  QTOThumb.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/12.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"

@interface QTOThumb : QTOBaseBean

/**
 800*800 缩略图
 */
@property (nonatomic,strong) NSString * largeThumb;

/**
 400*400 缩略图
 */
@property (nonatomic,strong) NSString * mediumThumb;

/**
 200*200 缩略图
 */
@property (nonatomic,strong) NSString * small_thumb;

@end
