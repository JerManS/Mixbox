#import <UIKit/UIKit.h>

@interface UICollectionViewCell (ObjCInterfacesForFakeCells)

- (BOOL)_isHiddenForReuse;
- (BOOL)_setHiddenForReuse:(BOOL)isHiddenForReuse;

@end

@interface UICollectionView (ObjCInterfacesForFakeCells)

- (void)_reuseCell:(UICollectionViewCell *)cell;

@end
