//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKProduct;

@interface WCOutProductInfo : NSObject
{
    unsigned int _minutes;
    NSString *_pId;
    NSString *_price;
    NSString *_priceExtra;
    NSString *_discountWording;
    SKProduct *_appSKProduct;
    long long _buttonTagID;
    NSString *_discountMD5;
    NSString *_webPayListUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKProduct *appSKProduct; // @synthesize appSKProduct=_appSKProduct;
@property(nonatomic) long long buttonTagID; // @synthesize buttonTagID=_buttonTagID;
@property(retain, nonatomic) NSString *discountMD5; // @synthesize discountMD5=_discountMD5;
@property(retain, nonatomic) NSString *discountWording; // @synthesize discountWording=_discountWording;
@property(nonatomic) unsigned int minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *priceExtra; // @synthesize priceExtra=_priceExtra;
@property(retain, nonatomic) NSString *webPayListUrl; // @synthesize webPayListUrl=_webPayListUrl;

@end

