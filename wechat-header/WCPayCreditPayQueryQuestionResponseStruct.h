//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayCreditPayQueryQuestionResponseStruct : NSObject
{
    unsigned int m_uiQuestionNum;
    NSString *m_nsSessionKey;
    NSArray *m_arrQuestion;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSArray *m_arrQuestion; // @synthesize m_arrQuestion;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
@property(nonatomic) unsigned int m_uiQuestionNum; // @synthesize m_uiQuestionNum;

@end

