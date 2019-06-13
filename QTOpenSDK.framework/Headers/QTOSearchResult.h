//
//  QTOSearchResult.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/29.
//  Copyright © 2018年 qt. All rights reserved.
//

#import "QTOBaseBean.h"
#import "QTOPurchaseItem.h"
#import "QTOPodCaster.h"

@interface QTOSearchResult:QTOBaseBean
/**
 返回类型
 */
@property (nonatomic,assign) QTOSearchContentType contentType;

/**
 名字
 */
@property (nonatomic,strong) NSString * title;


@end

@interface QTOSearchChannelResult:QTOSearchResult

/**
 专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 专辑icon
 */
@property (nonatomic,strong) NSString * thumb;


/**
 专辑描述
 */
@property (nonatomic,strong) NSString * desc;

@end

@interface QTOSearchRadioChannelResult:QTOSearchResult

/**
 专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 专辑icon
 */
@property (nonatomic,strong) NSString * thumb;


/**
 专辑描述
 */
@property (nonatomic,strong) NSString * desc;

@end


@interface QTOSearchProgramResult:QTOSearchResult

/**
 专辑id
 */
@property (nonatomic,assign) NSInteger channelId;

/**
 节目id
 */
@property (nonatomic,assign) NSInteger programId;

@end
