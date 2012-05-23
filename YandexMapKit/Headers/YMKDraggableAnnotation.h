/*
 * YMKDraggableAnnotation.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/**
 Provides information about draggable annotation objects to a map view.
 */
@protocol YMKDraggableAnnotation <YMKAnnotation> 

/**
 The map coordinates of the center point of a draggable annotation.
 */
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@end
