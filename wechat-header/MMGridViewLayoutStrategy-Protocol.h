//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MMGridViewLayoutStrategy <NSObject>
+ (_Bool)requiresEnablingPaging;
- (struct CGSize)contentSize;
- (long long)itemPositionFromLocation:(struct CGPoint)arg1;
- (struct CGPoint)originForItemAtPosition:(long long)arg1;
- (struct _NSRange)rangeOfPositionsInBoundsFromOffset:(struct CGPoint)arg1;
- (void)rebaseWithItemCount:(long long)arg1 insideOfBounds:(struct CGRect)arg2;
- (void)setupItemSize:(struct CGSize)arg1 andItemSpacingH:(long long)arg2 andItemSpacingV:(long long)arg3 withMinEdgeInsets:(struct UIEdgeInsets)arg4 andCenteredGrid:(_Bool)arg5;
- (int)type;
@end

