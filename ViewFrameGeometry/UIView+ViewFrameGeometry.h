/** UIView的扩展类，参数添加前缀是为了避免与Masonry的同名而发生冲突
 *  如有需要可以改为自己喜欢的前缀
 *  但需.h和.m文件都一起修改~
 *  祝使用愉快~
 */


#import <UIKit/UIKit.h>

CGPoint CGRectGetCenter(CGRect rect);
CGRect  CGRectMoveToCenter(CGRect rect, CGPoint center);
CGRect  CGRectCenteredInRect(CGRect rect, CGRect mainRect);

@interface UIView (ViewFrameGeometry)
/** 从xib中创建一个控件 */
+ (instancetype)viewFromXib;

@property CGPoint TQ_origin;
@property CGSize TQ_size;

@property (readonly) CGPoint TQ_midpoint;

@property (readonly) CGPoint TQ_bottomLeft;
@property (readonly) CGPoint TQ_bottomRight;
@property (readonly) CGPoint TQ_topRight;
@property (nonatomic, assign) CGFloat TQ_x;
@property (nonatomic, assign) CGFloat TQ_y;
@property (nonatomic, assign) CGFloat TQ_centerX;
@property (nonatomic, assign) CGFloat TQ_centerY;
@property CGFloat TQ_height;
@property CGFloat TQ_width;

//最常用的4个
@property CGFloat TQ_top;
@property CGFloat TQ_left;
@property CGFloat TQ_bottom;
@property CGFloat TQ_right;

- (void) moveBy: (CGPoint) delta;
- (void) scaleBy: (CGFloat) scaleFactor;
- (void) fitInSize: (CGSize) aSize;

- (UIView *)topView;

/**
 *  计算一个view相对于屏幕(去除顶部statusbar的20像素)的坐标
 *  iOS7下UIViewController.view是默认全屏的，要把这20像素考虑进去
 */
- (CGRect)relativeFrameForScreenWithView:(UIView *)v;
@end
