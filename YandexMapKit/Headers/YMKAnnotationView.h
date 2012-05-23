/*
 * YMKAnnotationView.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <Foundation/Foundation.h>
#import "YMKAnnotation.h"

/**
 Visually presents annotations on the map.
 @see http://developer.apple.com/library/ios/#documentation/MapKit/Reference/MKAnnotationView_Class/Reference/Reference.html
 */

@protocol YMKCalloutContentView;
@class YMKCalloutView;

@interface YMKAnnotationView : UIView {
@private
	id _internal;
	NSString * _reuseIdentifier;
	NSObject <YMKAnnotation> * _annotation;
	BOOL _selected;
	CGPoint _centerOffset;
	UIImage * _image;
	UIImageView * _imageView;
	BOOL _keepsTouches;
	BOOL _alignCenter;
	NSInteger _zIndex;
	BOOL _canShowCallout;
	UIView * _rightCalloutAccessoryView;
	UIView * _leftCalloutAccessoryView;
	CGPoint _calloutOffset;
    UIView<YMKCalloutContentView> * _calloutContentView;
    
    YMKCalloutView *_calloutView;
@protected
	BOOL _calloutVisible;
}

/**
 The string identifier which allows to reuse the annotation view.
 */
@property (nonatomic, readonly) NSString * reuseIdentifier;

/**
 The annotation object associated with the annotation view.
 */
@property (nonatomic, retain) NSObject<YMKAnnotation> * annotation;

/**
 The offset (in points) relative to the coordinate point of the annotation.
 */
@property (nonatomic) CGPoint centerOffset;

/**
 Specifies if the annotation view is currently selected.
 */
@property (nonatomic, getter=isSelected) BOOL selected;

/**
 The image displayed in the annotation view.
 */
@property (nonatomic, retain) UIImage * image;

/**
 Specifies if the content of the annotation view should be centrally aligned.
 */
@property (nonatomic, assign) BOOL alignCenter;

/**
 zIndex of the annotation view. The object with the highest zIndex is displayed
 uppermost on the map.
 */
@property (nonatomic, assign) NSInteger zIndex;

/**
 Specifies if the annotation view is able to display a callout balloon.
 */
@property (nonatomic, assign) BOOL canShowCallout;

/**
 The view which is displayed from the right side of the callout balloon.
 */
@property (nonatomic, retain) UIView * rightCalloutAccessoryView;

/**
 The view which is displayed from the left side of the callout balloon.
 */
@property (nonatomic, retain) UIView * leftCalloutAccessoryView;

/**
 The offset of the callout (in points) relative to the center point of the annotation view.
 */
@property (nonatomic, assign) CGPoint calloutOffset;

/**
 The original size of the frame annotation view (in pixels).
 */
@property (nonatomic, readonly) UIEdgeInsets minimumMargins;

/**
 The container view for the callout. If nil is specified the callout will look like a
 regular title/subtitle callout view.
 You should specify this property if you want to use a custom UIView in the annotation callout.
 Default value is nil.
 */
@property (nonatomic, retain) UIView<YMKCalloutContentView> * calloutContentView;

/**
 Designated initializer. Initializes a new annotation view.
 @param annotation the annotation object associated with the view
 @param reuseIdentifier the identifier you need to reuse the view
 @return a new annotation view
 */
- (id)initWithAnnotation:(NSObject<YMKAnnotation> *)annotation
		 reuseIdentifier:(NSString *)reuseIdentifier;

/**
 Called when the annotation view is removed from the reuse queue.
 */
- (void)prepareForReuse;

/**
 Specifies if the view should be displayed selected.
 @param selected YES - the view is displayed selected, NO - not
 @param animated YES - selecting/deselecting the view should be animated, NO - not
 */
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;

/**
 Sets the accessory view displayed on the left side of the callout.
 @param view the accessory view object
 @param animated YES - selecting/deselecting the accessory view should be animated, NO - not
 */
- (void)setLeftCalloutAccessoryView:(UIView *)view animated:(BOOL)animated;

/**
 Specifies the accessory view displayed on the right side of the callout.
 @param view the accessory view object
 @param animated YES - selecting/deselecting the accessory view should be animated, NO - not
 */
- (void)setRightCalloutAccessoryView:(UIView *)view animated:(BOOL)animated;

@end
