/**
 * @nc app=nowcoder id=da13e0cf321e4df9acd0fdf0a433cbb0 topic=290 question=632016 lang=C++
 * 2025-01-12 15:38:29
 * https://www.nowcoder.com/practice/da13e0cf321e4df9acd0fdf0a433cbb0?tpId=290&tqId=632016
 * [BC44] 小乐乐与欧几里得
 */

/** @nc code=start */

// 描述
// 小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。

// 输入描述：
// 每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)

// 输出描述：
// 对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
// 示例1
// 输入：
// 10 20
// 复制
// 输出：
// 30
// 复制
// 示例2
// 输入：
// 15 20
// 复制
// 输出：
// 65

#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a = n, b = m;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    cout << a + n * m / a;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
