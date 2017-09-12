//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol JSEventHandler;

@interface JSEvent : NSObject
{
    NSMutableDictionary *m_params;
    id <JSEventHandler> m_delegate;
    NSString *m_callbackID;
    NSString *m_funcName;
    CDUnknownBlockType m_kvReportBlock;
}

- (void).cxx_destruct;
- (void)endWithError:(id)arg1;
- (void)endWithError:(id)arg1 andDescription:(id)arg2;
- (void)endWithResutl:(id)arg1;
- (id)getCallbackID;
- (id)getFuncName;
- (id)getParams;
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType kvReportBlock; // @synthesize kvReportBlock=m_kvReportBlock;
@property(nonatomic) __weak id <JSEventHandler> m_delegate; // @synthesize m_delegate;
- (void)setCallbackID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFuncName:(id)arg1;
- (id)webviewController;

@end

