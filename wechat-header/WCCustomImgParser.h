//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageParser.h"

@class UIFont;

@interface WCCustomImgParser : ImageParser
{
}

+ (id)newInstance;
- (id)getImage;
- (id)getImageForText:(id)arg1;
- (id)getImageStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (_Bool)isNetworkImage;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)setImageSrc:(id)arg1;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;

// Remaining properties
@property(retain, nonatomic) UIFont *font;

@end

