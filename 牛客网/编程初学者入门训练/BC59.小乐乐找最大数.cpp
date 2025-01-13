/**
 * @nc app=nowcoder id=ae6a21920cac4f9184c8ecfcc87f89b9 topic=290 question=634143 lang=C++
 * 2025-01-13 20:13:58
 * https://www.nowcoder.com/practice/ae6a21920cac4f9184c8ecfcc87f89b9?tpId=290&tqId=634143
 * [BC59] 小乐乐找最大数
 * 
 * 描述
小乐乐获得4个最大数，请帮他编程找到最大的数。
输入描述：
一行，4个整数，用空格分开。
输出描述：
一行，一个整数，为输入的4个整数中最大的整数。
示例1
输入：
5 8 2 5
复制
输出：
8
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        int max = a;
        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }
        if (d > max) {
            max = d;
        }
        cout << max << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
