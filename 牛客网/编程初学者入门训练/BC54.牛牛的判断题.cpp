/**
 * @nc app=nowcoder id=51a046c13b3c4b64a07d69903a3cd4cf topic=290 question=2368112 lang=C++
 * 2025-01-13 20:11:18
 * https://www.nowcoder.com/practice/51a046c13b3c4b64a07d69903a3cd4cf?tpId=290&tqId=2368112
 * [BC54] 牛牛的判断题
 * 
 * 描述
牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。请你判断 x 是否在 l 和 r 之间 （即是否存在 l≤x≤r ）
输入描述：
依次输入 x ，l ，r 三个整数。用空格隔开。
输出描述：
如果存在 l≤x≤r  则输出 true ，否则输出 false
示例1
输入：
1 2 3
复制
输出：
false
复制
示例2
输入：
2 1 3
复制
输出：
true
复制
示例3
输入：
2 2 3
复制
输出：
true
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x, l, r;
    while (cin >> x >> l >> r) {
        if (l <= x && x <= r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
