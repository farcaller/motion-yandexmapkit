/*
 * YMKMapViewConfig.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

#import "YMKHostsConfiguration.h"
#import "YMKMapLayersConfiguration.h"


@interface YMKMapViewConfiguration : NSObject {
@private
    NSString * uuid_;
    YMKHostsConfiguration * hosts_;
    YMKMapLayersConfiguration * mapLayers_;
}

@property (nonatomic, copy, readonly) NSString * uuid;
@property (nonatomic, retain, readonly) YMKHostsConfiguration * hosts;
@property (nonatomic, retain, readonly) YMKMapLayersConfiguration * mapLayers;

- (void)setContentsFrom:(YMKMapViewConfiguration *)configuration;

@end
