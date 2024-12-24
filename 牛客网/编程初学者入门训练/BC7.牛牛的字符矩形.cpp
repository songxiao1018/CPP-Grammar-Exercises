/**
 * @nc app=nowcoder id=2dbf0151eb71402e968a2a8e59092568 topic=290 question=2367010 lang=C++
 * 2024-12-24 15:40:41
 * https://www.nowcoder.com/practice/2dbf0151eb71402e968a2a8e59092568?tpId=290&tqId=2367010
 * [BC7] 牛牛的字符矩形
 */

/** @nc code=start */

// 描述
// 牛牛尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。
// 输入描述：
// 一行读入一个 char 类型的字符。
// 输出描述：
// 输出这个字符组成的 3*3 矩形。
// 示例1
// 输入：
// #
// 复制
// 输出：
// ###
// ###
// ###

#include <iostream>
using namespace std;

int main() {
    char a = 0;
    // 方法一
    // cin >> a;
    // cout << a << a << a << endl;
    // cout << a << a << a << endl;
    // cout << a << a << a << endl;

    // 方法二
    cin >> a;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
