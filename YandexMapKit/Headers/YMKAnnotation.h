/*
 * YMKAnnotation.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>

#import "YMKGeoObject.h"

/**
 Provides information about annotation objects to a map view, including their location and titles.
 @see http://developer.apple.com/library/ios/#documentation/MapKit/Reference/MKAnnotationView_Class/Reference/Reference.html
 */
@protocol YMKAnnotation <YMKGeoObject> 

@optional

/**
 The title text of the annotation.
 */
- (NSString *)title;

/**
 The subtitle text of the annotation.
 */
- (NSString *)subtitle;

@end
