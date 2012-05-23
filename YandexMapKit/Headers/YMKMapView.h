/*
 * YMKMapView.h Map View class interface
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>

#import "YMKAnnotation.h"
#import "YMKAnnotationView.h"
#import "YMKMapStructs.h"
#import "YMKMapViewConfiguration.h"
#import "YMKMapViewDelegate+Protocol.h"
#import "YMKUserLocation.h"

/**
 Provides a map interface for displaying and programmatically controlling Yandex Maps.
 @see http://developer.apple.com/library/ios/#documentation/MapKit/Reference/MKMapView_Class/MKMapView/MKMapView.html
 */
@interface YMKMapView : UIView 

/**
 Contains Yandex Map Kit API of your application. Map view won't start load
 map tiles without it.
 */
@property (nonatomic, copy) NSString * apiKey;

/**
 Defines the map view delegate. 
 The delegate receives messages about map loading and updating and also controls annotation views.
 */
@property (nonatomic, assign) IBOutlet id<YMKMapViewDelegate> delegate;

/**
 Contains current map view configuration such as map layers.
 */
@property (nonatomic, readonly) YMKMapViewConfiguration * configuration;

/**
 Identifier of a visible map layer.
 */
@property (nonatomic, assign) uint16_t visibleLayerIdentifier;

/**
 The area which is currently displayed in the map view.
 */
@property (nonatomic, assign) YMKMapRegion region;

/**
 The geographical coordinate of the center of the map view.
 */
@property (nonatomic, assign) CLLocationCoordinate2D centerCoordinate;

/**
 The coordinates of the map center.
 */
@property (nonatomic, assign) YMKMapPoint centerMapPoint;

/**
 The current map zoom level.
 */
@property (nonatomic, readonly) NSUInteger zoomLevel;

/**
 The list of annotations corresponding to the map view.
 */
@property (nonatomic, readonly) NSArray * annotations;

/**
 The current view port is being displayed
 */
@property (nonatomic, readonly) YMKMapViewPort viewPort;

/**
 The current map view scale defined as meters per 100px.
 */
@property (nonatomic, assign, readonly) double scale;

/**
 The annotation which is currently selected.
 */
@property (nonatomic, retain) id<YMKAnnotation> selectedAnnotation;

/**
 The current user location.
 */
@property (nonatomic, readonly) YMKUserLocation * userLocation;

/**
 Specifies if the user location is visible on the map view.
 */
@property (nonatomic, readonly) BOOL userLocationVisible;

/**
 Specifies if the map view is allowed to display the user location.
 */
@property (nonatomic, assign) BOOL showsUserLocation;

/**
 Specifies if the map view is allowed to track the user location.
 */
@property (nonatomic, assign) BOOL tracksUserLocation;

/**
 Specifies if the map view displays traffic congestion.
 */
@property (nonatomic, assign) BOOL showTraffic;

/**
 Specifies if the map view displays "dead" traffic jams.
 */
@property (nonatomic, assign) BOOL showDeadJams;

/**
 The list of traffic informers that is available in current visible region
 */
@property (nonatomic, copy, readonly) NSArray * trafficInformers;

@property (nonatomic, assign, readonly) BOOL fetchingJams;
// routes
@property (nonatomic, assign) BOOL showRoute;
// rotation
@property (nonatomic, assign) CGFloat angle; // map rotation angle from 0 to 2pi
@property (nonatomic, assign) BOOL canUseCompass; // unimplemented yet, compass is always used when available by now

/**
 Toggles night mode of the map
 */
@property (nonatomic, assign) BOOL nightMode;

/**
 Moves the map center to the point with the specified coordinates (with or without animation).
 @param coordinate the screen coordinates of the new map center
 @param animated YES - to use animation while moving to the new center, NO - not 
 */
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;

/**
 Changes the region displayed in the view (with or without animation).
 @param region the new region to be displayed in the view
 @param animated YES - to use animation while moving to the new region, NO - not
 */
- (void)setRegion:(YMKMapRegion)region animated:(BOOL)animated;

/**
 Moves the map center to the point with the specified coordinates at the specified zoom level (with or without animation).  
 @param coordinate the screen coordinates of the new map center
 @param zoomLevel specifies a new zoom level
 @param animated YES - to use animation while moving to the new center, NO - not 
 */
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate atZoomLevel:(NSUInteger)zoomLevel animated:(BOOL)animated;

/**
 Returns a reusable annotation view located by its identifier.
 @param identifier the id of the reusable annotation view
 @return the specified reusable annotation view
 */
- (id)dequeueReusableAnnotationViewWithIdentifier:(NSString *)identifier;

/**
 Returns a reusable callout view located by its identifier.
 @param identifier the id of the reusable callout view
 @return the specified reusable callout view
 */
- (id)dequeueReusableCalloutViewWithIdentifier:(NSString *)identifier;

/**
 Adds the specified annotation to the map view.
 @param annotation specifies the annotation object
 */
- (void)addAnnotation:(id<YMKAnnotation>)annotation;

/**
 Adds the list of annotations to the map view.
 @param annotations specifies the list of annotation objects
 */
- (void)addAnnotations:(NSArray *)annotations;

/**
 Removes the specified annotation from the map view.
 @param annotation specifies the annotation object
 */
- (void)removeAnnotation:(id<YMKAnnotation>)annotation;

/**
 Removes the specified annotations from the map view.
 @param annotations the list of annotations to be removed
 */
- (void)removeAnnotations:(NSArray*)annotations;

/**
 Scrolls Map so specified annotation view becomes visible.
 @param annotationView Specifies the annotation object
 @param animated Indicates whether mapview should animate scrolling or not.
 */
- (void)scrollToAnnotationView:(YMKAnnotationView *)annotationView animated:(BOOL)animated;

/**
 Returns the annotation view corresponding to the specified annotation object.
 @param annotation specifies the annotation object
 @return the annotation view corresponding to the specified annotation object
 */
- (YMKAnnotationView *)viewForAnnotation:(id<YMKAnnotation>)annotation;

/**
 Converts a point with geographical coordinates to a point with screen coordinates.
 @param coord the point with geographical coordinates (latitude, longitude)
 @return the point with screen coordinates
 */
- (CGPoint)convertLLToMapView:(CLLocationCoordinate2D)coord;

/**
 Converts a point with screen coordinates to a point with geographical coordinates.
 @param point the point with screen coordinates (in pixels)
 @return the point with geographical coordinates (latitude, longitude)
 */
- (CLLocationCoordinate2D)convertMapViewPointToLL:(CGPoint)point;

/**
 Converts geographical coordinates into screen coordinates
 @param point the point with geographical coordinates
 @return the point with screen coordinates
 */
- (CGPoint)convertMapPointToMapView:(YMKMapPoint)point;

/**
 Converts screen coordinates to geographical coordinates
 @param point the point with screen coordinates
 @return the point with geographical coordinates
 */
- (YMKMapPoint)convertMapViewPointToMapPoint:(CGPoint)point;

/**
 Returns a region which preserves the aspect ratio of the map view and its center point and contains the specified region. 
 @param region specifies the region
 @return a region which preserves the aspect ratio of the map view and its center point and contains the specified region
 */
- (YMKMapRegion)fitRegion:(YMKMapRegion)region;

/**
 Sets map rotation angle
 */
- (void)setAngle:(CGFloat)angle animated:(BOOL)animated;

/**
 Dismisses location heading calibration UI
 */
- (void)dismissHeadingCalibrationDisplay;

/**
 Calculates cache size of map view
 */
+ (unsigned long long)calculateCacheSize:(NSError**)error; // blocks until calculated

/**
 Clears map cache
 */
+ (void)clearCache; // blocks until cleared

/**
 Zoom In.
 If user location is available, zooms in over the location. Otherwise, zooms in on the center of the map view.
 */
- (void)zoomIn;

/**
 Zoom Out.
 If user location is available, zooms out over the location. Otherwise, zooms out on the center of the map view.
 */
- (void)zoomOut;

@end
