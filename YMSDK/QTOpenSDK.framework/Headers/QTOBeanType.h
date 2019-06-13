//
//  QTOBeanType.h
//  QTOpenSDK
//
//  Created by cong on 2018/5/15.
//  Copyright © 2018年 qt. All rights reserved.
//

#ifndef QTOBeanType_h
#define QTOBeanType_h


/**
 搜索内容类型

 - QTOSearchContentTypeRadioChannel: 电台专辑
 - QTOSearchContentTypeOndemandChannel: 点播专辑
 - QTOSearchContentTypeProgram: 点播专辑节目
 - QTOSearchContentTypeUndefined: 未定义
 */
typedef NS_ENUM(NSInteger,QTOSearchContentType) {
    QTOSearchContentTypeRadioChannel,
    QTOSearchContentTypeOndemandChannel,
    QTOSearchContentTypeProgram,
    QTOSearchContentTypeUndefined = 99
};

/**
 音频流类型

 - QTOAudioFormatMP3: mp3格式
 - QTOAudioFormatM4A: m4a格式
 - QTOAudioFormatHLS: hls格式，广播流
 - QTOAudioFormatUndefined: 未定义
 */
typedef NS_ENUM (NSInteger,QTOAudioFormat){
    QTOAudioFormatMP3,
    QTOAudioFormatM4A,
    QTOAudioFormatHLS,
    QTOAudioFormatUndefined = 99,
};

/**
 专辑列表排序

 - QTOChannelListOrderByTrend: 按照热度排序降序
 - QTOChannelListOrderByUpdate: 按照更新时间降序
 - QTOChannelListOrderByDefault: 默认编辑排序
 */
typedef NS_ENUM(NSInteger,QTOChannelListOrderBy){
    QTOChannelListOrderByTrend,
    QTOChannelListOrderByUpdate,
    QTOChannelListOrderByDefault,
};

/**
 专辑节目列表排序

 - QTOChannelProgramListOrderByAsc: 正序
 - QTOChannelProgramListOrderByDesc: 倒序
 - QTOChannelProgramListOrderByDefault: 默认，默认正序
 */
typedef NS_ENUM(NSInteger,QTOChannelProgramListOrderBy) {
    QTOChannelProgramListOrderByAsc,
    QTOChannelProgramListOrderByDesc,
    QTOChannelProgramListOrderByDefault,
};

/**
 信息的模式

 - QTOBeanInfoFormatNormal: 精简模式
 - QTOBeanInfoFormatFullSize: 详细模式
 */
typedef NS_ENUM(NSInteger,QTOBeanInfoFormat) {
    QTOBeanInfoFormatNormal,
    QTOBeanInfoFormatFullSize,
};


#endif /* QTOBeanType_h */
