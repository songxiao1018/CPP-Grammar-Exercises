/**
 * @nc app=nowcoder id=020a0cf673174d5795d97ae79cff59a0 topic=290 question=2177130 lang=C++
 * 2024-12-24 15:49:31
 * https://www.nowcoder.com/practice/020a0cf673174d5795d97ae79cff59a0?tpId=290&tqId=2177130
 * [BC10] 实现四舍五入
 */

/** @nc code=start */

// 描述
// 将浮点数转换为整数类型，要求四舍五入。
// 输入描述：
// 随机输入的浮点数
// 输出描述：
// 四舍五入之后的整数
// 示例1
// 输入：
// 14.99
// 复制
// 输出：
// 15

#include <iostream>
using namespace std;

int main() {
    double a = 0;
    cin >> a;
    if (a >=0)
        cout << (int)(a + 0.5) << endl; // 正数四舍五入
    else
        cout << (int)(a - 0.5) << endl; // 负数四舍五入
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
