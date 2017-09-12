//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor, UIFont;

@interface MMStringStyle : NSObject
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    long long _underlineStyle;
    UIColor *_underlineColor;
    long long _strikethroughStyle;
    UIColor *_strikethroughColor;
    NSMutableDictionary *_attributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
- (id)attributesDic;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)init;
@property(retain, nonatomic) UIColor *strikethroughColor; // @synthesize strikethroughColor=_strikethroughColor;
@property(nonatomic) long long strikethroughStyle; // @synthesize strikethroughStyle=_strikethroughStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(nonatomic) long long underlineStyle; // @synthesize underlineStyle=_underlineStyle;

@end

