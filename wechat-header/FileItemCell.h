//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface FileItemCell : MMTableViewCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceImage;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UIButton *_detailButton;
    shared_ptr_f9ca816a _dataItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateDataItem:(const shared_ptr_f9ca816a *)arg1 selected:(_Bool)arg2;

@end
