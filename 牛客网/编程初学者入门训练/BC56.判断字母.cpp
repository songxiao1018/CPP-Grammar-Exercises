/**
 * @nc app=nowcoder id=44d2d63103664913bc243d3836b4f341 topic=290 question=295416 lang=C++
 * 2025-01-13 20:12:31
 * https://www.nowcoder.com/practice/44d2d63103664913bc243d3836b4f341?tpId=290&tqId=295416
 * [BC56] 判断字母
 * 
 * 描述
从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
输入描述：
输入包括一个字符。
输出描述：
输出该字符是字母（YES）或不是（NO）。
示例1
输入：
H
复制
输出：
YES
复制
示例2
输入：
9
复制
输出：
NO
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    char x;
    while (cin >> x) {
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
