/**
 * @nc app=nowcoder id=ffa94d27c6534396aef38813535c279f topic=290 question=292279 lang=C++
 * 2025-01-12 14:58:30
 * https://www.nowcoder.com/practice/ffa94d27c6534396aef38813535c279f?tpId=290&tqId=292279
 * [BC24] 浮点数的个位数字
 */

/** @nc code=start */

// 描述
// 给定一个浮点数，要求得到该浮点数的个位数。

// 数据范围： 
// 0<n≤200 
// 输入描述：
// 一行，包括一个浮点数。
// 输出描述：
// 一行，包含一个整数，为输入浮点数对应的个位数。
// 示例1
// 输入：
// 13.141
// 复制
// 输出：
// 3

#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << (int)n % 10 << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
