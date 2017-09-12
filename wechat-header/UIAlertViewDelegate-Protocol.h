//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIAlertView;

@protocol UIAlertViewDelegate <NSObject>

@optional
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
@end

