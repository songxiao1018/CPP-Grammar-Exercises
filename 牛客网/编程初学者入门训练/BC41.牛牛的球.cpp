/**
 * @nc app=nowcoder id=203ca3114f8845a9bbd673bae6c5dd2b topic=290 question=2367592 lang=C++
 * 2025-01-12 15:32:16
 * https://www.nowcoder.com/practice/203ca3114f8845a9bbd673bae6c5dd2b?tpId=290&tqId=2367592
 * [BC41] 牛牛的球
 */

/** @nc code=start */

// 描述
// 牛牛有一个半径为 r 的球，他想知道这个球的体积。

// 球的体积公式是 3/4 πr2 其中π  取3.14 ， r 是一个整数
// 输入描述：
// 输入球的半径
// 输出描述：
// 输出球的体积
// 示例1
// 输入：
// 3
// 复制
// 输出：
// 113.04

#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    printf("%.2f", 3.14 * r * r * r * 4 / 3);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
