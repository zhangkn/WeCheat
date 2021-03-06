//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSData, UIImage;

@interface ImageMessageViewModel : CommonMessageViewModel
{
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)getImageIfDownFail;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) _Bool isImageExists;
- (id)maskedThumbImagePath;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIImage *originThumbImage;
- (_Bool)shouldShowSourceViewInContent;
@property(readonly, nonatomic) unsigned int thumbDownloadStatus;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;

@end

