//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WCForceTouchPopProtocol-Protocol.h"

@class NSString, UIImage, UIImageView, UIView;

@interface MMBasePeekImageViewController : UIViewController <WCForceTouchPopProtocol>
{
    UIImage *_image;
    id _delegate;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (_Bool)canPop;
- (void)commitViewController;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;
- (void)reloadImage:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *previewFromController;
@property(nonatomic) __weak UIView *previewSourceView;
@property(readonly) Class superclass;

@end

