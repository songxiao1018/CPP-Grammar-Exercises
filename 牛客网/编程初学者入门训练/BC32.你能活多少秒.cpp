/**
 * @nc app=nowcoder id=e1d1bd99fee34b66ae3c777b74d555c8 topic=290 question=292280 lang=C++
 * 2025-01-12 15:16:58
 * https://www.nowcoder.com/practice/e1d1bd99fee34b66ae3c777b74d555c8?tpId=290&tqId=292280
 * [BC32] 你能活多少秒
 */

/** @nc code=start */

// 描述
// 问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。

// 数据范围： 
// 0<age≤200 

// 输入描述：
// 一行，包括一个整数age。
// 输出描述：
// 一行，包含一个整数，输出年龄对应的秒数。
// 示例1
// 输入：
// 20
// 复制
// 输出：
// 631200000

#include <iostream>
using namespace std;

int main() {
    long long age;
    cin >> age;
    printf("%lld", age*31560000);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
