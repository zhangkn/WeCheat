//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextMessageViewModel.h"

@interface TextMessageSubViewModel : TextMessageViewModel
{
    TextMessageViewModel *_parentModel;
    double _startHeight;
}

- (void).cxx_destruct;
- (id)initWithParentViewModel:(id)arg1;
- (long long)numberOfRowsInSection;
@property(nonatomic) __weak TextMessageViewModel *parentModel; // @synthesize parentModel=_parentModel;
- (struct CGRect)realFrameByCurFrame:(struct CGRect)arg1;
- (void)resetLayoutCache;
- (void)setHighlighted:(_Bool)arg1;
- (void)setLinkHighlighted:(_Bool)arg1 url:(id)arg2;
@property(nonatomic) double startHeight; // @synthesize startHeight=_startHeight;

@end

