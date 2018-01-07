# iOS-Commons-ViewFrameGeometry
ViewFrameGeometry

```objc
/* 我们在开发中经常需要获取或者改变控件的位置以及大小
*  这个时候这种类的价值就能体现出来了
*  你可以通过它来轻松方便（真的炒鸡方便呢）地任意改变控件的位置以及大小（动画中也很方便喔
*/

//用法如下（只列举bottom的用法，其他一样的用）：

    UIView *line = [[UIView alloc]initWithFrame:CGRectMake(0, _todayTurnover.TQ_bottom + 20, ScreenW, 1)];


/** UIView的扩展类，参数添加前缀是为了避免与Masonry的同名而发生冲突
 *  如有需要可以改为自己喜欢的前缀
 *  但需.h和.m文件都一起修改~
 *  祝使用愉快~
 */
 
```
