/*
 * YMKMapViewDelegate+Protocol.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class YMKMapView;
@class YMKCalloutView;

/**
 Defines methods which the YMKMapView class uses to inform your application that a
 particular map-related operation is complete.
 @see http://developer.apple.com/library/ios/#documentation/MapKit/Reference/MKMapViewDelegate_Protocol/MKMapViewDelegate/MKMapViewDelegate.html
 */
@protocol YMKMapViewDelegate <NSObject>

@optional

/**
 Returns the view corresponding to the specified annotation object.
 @param mapView the map view which has requested the annotation
 @param annotation the object corresponding to the annotation you want to be displayed
 @return the view corresponding to the specified annotation object
 */
- (YMKAnnotationView *)mapView:(YMKMapView *)mapView viewForAnnotation:(id<YMKAnnotation>)annotation;

/**
 Returns the callout view (baloon) corresponding to the specified annotation object.
 @param mapView the map view which has requested the annotation
 @param annotation the object corresponding to the annotation you want to be displayed
 @return the callout view corresponding to the specified annotation object
 */
- (YMKCalloutView *)mapView:(YMKMapView *)view calloutViewForAnnotation:(id<YMKAnnotation>)annotation;

/**
 Informs the delegate that the user has tapped an accessory control of the annotation view callout.
 @param mapView the map view containing the specified annotation view
 @param view the annotation view containing the callout with the control that was tapped
 @param control the tapped control
 */
- (void)mapView:(YMKMapView *)mapView annotationView:(YMKAnnotationView *)view calloutAccessoryControlTapped:(UIControl *)control;

/**
 Informs the delegate that the user has tapped the annotation view callout.
 @param mapView the map view containing the specified annotation view
 @param view the annotation view containing the callout which has been tapped
 */
- (void)mapView:(YMKMapView *)mapView annotationViewCalloutTapped:(YMKAnnotationView *)view;

/**
 Informs the map view delegate that given annotation views were added to map
 @param mapView mapView the map view containing specified annotation views
 @param views list of annotation views that have been added to the map
 */
- (void)mapView:(YMKMapView *)mapView didAddAnnotationViews:(NSArray *)views;

/**
 Informs the view delegate that the region displayed by the view has been changed.
 @param mapView the map view where the displayed region has changed 
 @param animated indicates whether the view change has been animated
 */
- (void)mapView:(YMKMapView *)mapView regionDidChangeAnimated:(BOOL)animated;

/**
 Informs the view delegate that the region displayed on the map will be changed.
 @param mapView the map view where the displayed region is about to change
 @param animated indicates whether the region change will be animated
 */
- (void)mapView:(YMKMapView *)mapView regionWillChangeAnimated:(BOOL)animated;

/**
 Informs the view delegate that the specified map view has been dragged.
 @param mapView the map view which has been dragged
 */
- (void)mapViewWasDragged:(YMKMapView *)mapView;

/**
 Asks the view delegate if the map view should follow the user location.
 @param mapView specifies the map view
 @return YES - the map view should follow the user location, NO - not
 */
- (BOOL)mapViewShouldFollowUserLocation:(YMKMapView *)mapView;

/**
 Asks the view delegate if the map view should display the heading calibration alert.
 @param mapView specifies the map view
 @return YES - the heading calibration alert should be displayed, NO - not
 */
- (BOOL)mapViewShouldDisplayHeadingCalibration:(YMKMapView *)mapView;

/**
 Informs the view delegate that the location manager failed to retrieve the user's location.
 @param mapView specifies the map view
 @param error the error object containing the error description
 */
- (void)mapView:(YMKMapView *)mapView locationManagerReceivedError:(NSError *)error;

/**
 Informs the view delegate that the user has tapped a point on the screen.
 @param mapView specifies the view which is being tapped
 @param coordinate the geographical coordinates of the point being tapped
 */
- (void)mapView:(YMKMapView *)mapView gotSingleTapAtCoordinate:(CLLocationCoordinate2D)coordinate;

/**
 Informs the view delegate that the user has tapped and held at a point on the screen.
 @param mapView specifies the view which is being tapped and held
 @param coordinate the geographical coordinates of the point being tapped and held
 */
- (void)mapView:(YMKMapView *)mapView gotTapAndHoldAtCoordinate:(CLLocationCoordinate2D)coordinate;

/**
 Informs the map view delegate when map view did reset rotation angle
 @param mapView specifies the map view which has been reset rotation angle
 */
- (void)mapViewDidResetRotationAngle:(YMKMapView *)mapView;

/**
 Asks the map view delegate of visible map view rect in screen coordinates.
 @param mapView specifies the map view which is being evaluated
 @return frame visible rect frame
 */
- (CGRect)mapViewVisibleRect:(YMKMapView *)mapView;

@end
