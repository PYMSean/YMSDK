//
//  QTOPlayerItem.h
//  QTOpenSDK
//
//  Created by cong on 2018/6/5.
//  Copyright © 2018年 qt. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import "QTOPlayerResourceLoader.h"

/**
 蜻蜓节目，用于播放器播放
 */
@interface QTOPlayerItem : AVPlayerItem
@property (nonatomic,strong) QTOPlayerResourceLoader * qtoResourceLoaderDelegate;

/**
 错误信息
 */
@property (nonatomic,strong)NSError * qtError;

@end

/**
 蜻蜓点播节目
 */
@interface QTOPlayerOndemandItem:QTOPlayerItem

/**
 专辑id
 */
@property (nonatomic,assign,readonly) NSInteger channelId;

/**
 节目id
 */
@property (nonatomic,assign,readonly) NSInteger programId;
-(instancetype)initWithAsset:(AVURLAsset *)asset channelId:(NSInteger)channelId programId:(NSInteger)programId;
-(instancetype)initWithChannelId:(NSInteger)channelId programId:(NSInteger)programId;
@end

/**
 蜻蜓电台节目
 */
@interface QTOPlayerRadioItem:QTOPlayerItem

/**
 专辑id
 */
@property (nonatomic,assign,readonly) NSInteger channelId;

/**
 蜻蜓电台节目

 @param channelId 节目id
 @return 电台节目
 */
-(instancetype)initWithChannelId:(NSInteger)channelId;
-(instancetype)initWithAsset:(AVURLAsset *)asset channelId:(NSInteger)channelId;

@end
