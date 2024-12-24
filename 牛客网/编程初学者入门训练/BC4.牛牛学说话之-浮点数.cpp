/**
 * @nc app=nowcoder id=7c3bf58fac1a4eb69fa32c2d2c379bac topic=290 question=308924 lang=C++
 * 2024-12-24 15:39:07
 * https://www.nowcoder.com/practice/7c3bf58fac1a4eb69fa32c2d2c379bac?tpId=290&tqId=308924
 * [BC4] 牛牛学说话之-浮点数
 */

/** @nc code=start */

// 描述
// 会说整数之后，牛牛开始尝试浮点数（小数）

// 输入一个浮点数，输出这个浮点数。
// 输入描述：
// 输入一个浮点数
// 输出描述：
// 输出一个浮点数，保留三位小数
// 示例1
// 输入：
// 1.359578
// 复制
// 输出：
// 1.360

#include <iostream>
using namespace std;

int main() {
    double a = 0;
    cin >> a;
    printf("%.3f\n", a);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
