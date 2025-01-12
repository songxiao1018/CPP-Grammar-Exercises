/**
 * @nc app=nowcoder id=c196c47c23394bf3bdd4f82a838df6bf topic=290 question=2367414 lang=C++
 * 2025-01-12 15:30:03
 * https://www.nowcoder.com/practice/c196c47c23394bf3bdd4f82a838df6bf?tpId=290&tqId=2367414
 * [BC39] 牛牛的水杯
 */

/** @nc code=start */

// 描述
// 牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。

// 水杯的体积公式是 
// π×h×r 2，其中 π取 3.14 ， h 和 r 是整数。 
// 输入描述：
// 输入杯子的高度 h ，底面半径 r 。
// 输出描述：
// 输出牛牛最少要喝多少杯水
// 示例1
// 输入：
// 2 6
// 复制
// 输出：
// 45

#include <iostream>
using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    cout << int(10000 / (3.14 * h * r * r) + 1);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
