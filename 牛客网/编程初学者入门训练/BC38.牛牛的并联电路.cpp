/**
 * @nc app=nowcoder id=6e13936b6fc54f52ac22efd6c8e7fef3 topic=290 question=2367375 lang=C++
 * 2025-01-12 15:25:56
 * https://www.nowcoder.com/practice/6e13936b6fc54f52ac22efd6c8e7fef3?tpId=290&tqId=2367375
 * [BC38] 牛牛的并联电路
 */

/** @nc code=start */

// 描述
// 牛牛有一个阻值是 r1 和一个阻值 r2 的电阻，牛牛想知道这两个电阻并联后等效电阻是多少

// 并联电路的等效电阻公式是：
// 1 / zhi = 1 / r1 + 1 / r2
// 输入描述：
// 输入 r1 和 r2 两个电阻的阻值
// 输出描述：
// 输出两个电阻并联后的等效电阻zhi
// 示例1
// 输入：
// 1 1
// 复制
// 输出：
// 0.5

#include <iostream>
using namespace std;

int main() {
    double r1, r2;
    cin >> r1 >> r2;
    printf("%.1f", 1 / (1 / r1 + 1 / r2));
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
