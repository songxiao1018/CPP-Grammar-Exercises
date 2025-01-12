/**
 * @nc app=nowcoder id=35a1e8b18658411388bc1672439de1d9 topic=290 question=292287 lang=C++
 * 2025-01-12 15:15:29
 * https://www.nowcoder.com/practice/35a1e8b18658411388bc1672439de1d9?tpId=290&tqId=292287
 * [BC31] 2的n次方计算
 */

/** @nc code=start */

// 描述
// 不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。

// 数据范围：
// 0≤n≤31 
// 输入描述：
// 一行输入整数n（0 <= n < 31）。
// 输出描述：
// 输出对应的2的n次方的结果。
// 示例1
// 输入：
// 2
// 复制
// 输出：
// 4
// 复制
// 示例2
// 输入：
// 10
// 复制
// 输出：
// 1024
// 复制

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (1 << n) << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
