//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIImage, UIImageView;

@interface SightThumbImageCollectionViewCell : UICollectionViewCell
{
    UIImage *_image;
    UIImageView *_imageView;
    NSIndexPath *_currentIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;

@end

