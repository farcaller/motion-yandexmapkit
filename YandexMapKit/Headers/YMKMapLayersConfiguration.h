/*
 * YMKMapLayersConfig.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>
#import "YMKMapLayerInfo.h"

/**
 Provides information about map layers supported by map view
 */
@interface YMKMapLayersConfiguration : NSObject {
@private
    NSArray * _infos;
    BOOL _hasServiceLayer;
    YMKMapLayerInfo * _serviceLayerInfo;
}

/**
 Contains instances of YMKMapLayerInfo supported by map view. You should query
 this array manually.
 @see infoForLayerWithIdentifier:
 */
@property (nonatomic, readonly) NSArray * infos;

/**
 Indicates whether current configuration contains auxillary map layer
 */
@property (nonatomic, readonly) BOOL hasServiceLayer;

/**
 If hasServiceLayer property is set to YES then serviceLayerInfo
 points to auxillary map layer info
 */
@property (nonatomic, readonly) YMKMapLayerInfo * serviceLayerInfo;

/**
 Returns instance of YMKMapLayerInfo whose identifier is equal to parameter passed
 @param identifier identifier of a requested map layer info
 @return instance of YMKMapLayerInfo or nil
 */
- (YMKMapLayerInfo *)infoForLayerWithIdentifier:(uint16_t)identifier;

@end
