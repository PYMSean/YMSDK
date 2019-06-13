//
//  QTOPlayer.h
//  QTOpenSDK
//
//  Created by cong on 2018/6/7.
//  Copyright © 2018年 qt. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import "QTOPlayerItem.h"
#import "QTOBeanType.h"

/**
 播放节目类型

 - QTOPlayerItemTypeOndemand: 蜻蜓点播节目
 - QTOPlayerItemTypeRadio: 蜻蜓电台节目
 - QTOPlayerItemTypeNotQTItem: 非蜻蜓节目
 */
typedef NS_ENUM(NSInteger,QTOPlayerItemType){
    QTOPlayerItemTypeOndemand,
    QTOPlayerItemTypeRadio,
    QTOPlayerItemTypeNotQTItem
} ;

/**
 蜻蜓内容播放器
 */
@interface QTOPlayer : AVPlayer


/**
 更换点播节目，默认音频格式为m4a

 @param channelId 专辑id
 @param programId 节目id
 @param handler 回调,返回更换后的currtentItem
 */
-(void)replaceCurrentItemWithOndemandChannelId:(NSInteger)channelId
                                     programId:(NSInteger)programId
                               completeHandler:(void(^)(QTOPlayerItem * item))handler;

/**
 指定音频格式，更换点播节目
 
 @param channelId 专辑id
 @param programId 节目id
 @param format 音频格式 mp3/m4a
 @param handler 回调,返回更换后的currtentItem
 */
-(void)replaceCurrentItemWithOndemandChannelId:(NSInteger)channelId
                                     programId:(NSInteger)programId
                                   format:(QTOAudioFormat)format
                               completeHandler:(void(^)(QTOPlayerItem * item))handler;


/**
 更换电台专辑

 @param channelId 电台id
 @param handler 回调,返回更换后的currtentItem
 */
-(void)replaceCurrentItemWithRadioChannelId:(NSInteger)channelId
                            completeHandler:(void(^)(QTOPlayerItem * item))handler;

/**
 指定音频流格式，更换电台专辑
 
 @param channelId 电台id
 @param format 音频格式 hls/mp3
 @param handler 回调,返回更换后的currtentItem
 */
-(void)replaceCurrentItemWithRadioChannelId:(NSInteger)channelId
                                format:(QTOAudioFormat)format
                            completeHandler:(void(^)(QTOPlayerItem * item))handler;


/**
 返回当前节目类型

 @return 节目类型
 */
-(QTOPlayerItemType)typeForCurrentItem;

/**
 专辑id

 @return 播放蜻蜓节目时，返回相应专辑id，播放非蜻蜓节目时返回-1
 */
-(NSInteger)channelId;

/**
 节目id

 @return 当节目类型蜻蜓点播节目时返回相应节目id，其他情况返回-1
 */
-(NSInteger)programId;

@end
