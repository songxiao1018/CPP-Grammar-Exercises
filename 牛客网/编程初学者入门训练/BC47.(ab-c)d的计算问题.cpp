/**
 * @nc app=nowcoder id=9df4b80fc3ab475288e5c26972440e1b topic=290 question=320950 lang=C++
 * 2025-01-13 20:03:44
 * https://www.nowcoder.com/practice/9df4b80fc3ab475288e5c26972440e1b?tpId=290&tqId=320950
 * [BC47] (a+b-c)*d的计算问题
 * 
 * BC47 (a+b-c)*d的计算问题
描述
这是一个非常简单的题目，意在考察你编程的基础能力。千万别想难了哦。输入为一行，包括了用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100,000）。输出为一行，为“(a+b-c)*d”的计算结果。

输入描述：
输入为一行，用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100,000）。
输出描述：
输出为一行，为“(a+b-c)*d”的计算结果。
示例1
输入：
1 3 2 4
复制
输出：
8

 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a + b - c) * d;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
