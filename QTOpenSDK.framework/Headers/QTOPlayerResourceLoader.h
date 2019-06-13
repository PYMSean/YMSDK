//
//  QTOPlayerResourceLoader.h
//  QTOpenSDK
//
//  Created by cong on 2018/6/5.
//  Copyright © 2018年 qt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "QTOBeanType.h"

@interface QTOPlayerResourceLoader : NSObject<AVAssetResourceLoaderDelegate>{
    AVAssetResourceLoadingRequest * _loadingRequest;
    NSURLConnection * _connection;
    NSURLRequest * _streamRequest;
}
@property (nonatomic,strong)NSError * qtError;

@end


@interface QTOPlayerOndemandResourceLoader:QTOPlayerResourceLoader{
    
}
@property (nonatomic,assign) NSInteger channelId;
@property (nonatomic,assign) NSInteger programId;
@property (nonatomic,assign) QTOAudioFormat format;

@end

@interface QTOPlayerRadioResourceLoader:QTOPlayerResourceLoader{
    
}
@property (nonatomic,assign) NSInteger channelId;
@property (nonatomic,assign) QTOAudioFormat format;
@end
