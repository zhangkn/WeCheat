//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface FaceRecogGuideInfo : MMObject
{
    NSString *_guideTitle;
    NSString *_firstStepNumberIconName;
    NSString *_firstStepContent;
    NSString *_firstStepIconName;
    NSString *_secondStepNumberIconName;
    NSString *_secondStepContent;
    NSString *_secondStepIconName;
}

+ (id)genDefaultInfo;
- (void).cxx_destruct;
- (void)dealloc;
@property(copy, nonatomic) NSString *firstStepContent; // @synthesize firstStepContent=_firstStepContent;
@property(copy, nonatomic) NSString *firstStepIconName; // @synthesize firstStepIconName=_firstStepIconName;
@property(copy, nonatomic) NSString *firstStepNumberIconName; // @synthesize firstStepNumberIconName=_firstStepNumberIconName;
@property(copy, nonatomic) NSString *guideTitle; // @synthesize guideTitle=_guideTitle;
- (id)init;
@property(copy, nonatomic) NSString *secondStepContent; // @synthesize secondStepContent=_secondStepContent;
@property(copy, nonatomic) NSString *secondStepIconName; // @synthesize secondStepIconName=_secondStepIconName;
@property(copy, nonatomic) NSString *secondStepNumberIconName; // @synthesize secondStepNumberIconName=_secondStepNumberIconName;

@end

