/*
 * YMKUserLocation.h
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
#import "YMKAnnotation.h"

extern NSString * const YMKUserLocationNeedsSubtitleNotification;

/**
 Defines an annotation which represents the user's location on the map.
 @see http://developer.apple.com/library/ios/#documentation/MapKit/Reference/MKUserLocation_Class/Reference/Reference.html
 */
@interface YMKUserLocation : NSObject <YMKAnnotation> {
@private
	CLLocation * _location;
	BOOL _updating;
	
	NSString * _subtitle;
	CLLocation * _subtitleLocation;
}

/**
 The current location of the device.
 */
@property (nonatomic, readonly) CLLocation * location;

/**
 The title displayed for the annotation representing the user's location.
 */
@property (nonatomic, readonly) NSString * title;

/**
 The subtitle displayed for the annotation representing the user's location.
 */
@property (nonatomic, copy) NSString * subtitle;

/**
 Indicates whether the user's location is currently being updated.
 */
@property (nonatomic, readonly, getter = isUpdating) BOOL updating;

@end
