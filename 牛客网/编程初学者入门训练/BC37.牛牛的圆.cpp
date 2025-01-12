/**
 * @nc app=nowcoder id=75a202e826d048a39824ec694b5ce7e3 topic=290 question=2367298 lang=C++
 * 2025-01-12 15:25:16
 * https://www.nowcoder.com/practice/75a202e826d048a39824ec694b5ce7e3?tpId=290&tqId=2367298
 * [BC37] 牛牛的圆
 */

/** @nc code=start */

// 描述
// 牛牛有一个半径为 r 的圆，请你计算这个圆的面积。

// 圆的面积公式是 π×r 2  ，其中 π  取 3.14
// 输入描述：
// 输入一个半径 r
// 输出描述：
// 输出圆的面积
// 示例1
// 输入：
// 1
// 复制
// 输出：
// 3.14

#include <iostream>
using namespace std;

int main() {
    double r;
    cin >> r;
    printf("%.2f", 3.14 * r * r);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
