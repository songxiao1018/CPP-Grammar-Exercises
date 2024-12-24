/**
 * @nc app=nowcoder id=11a5040fa894430f9d25fda1be37ddc8 topic=290 question=2367251 lang=C++
 * 2024-12-24 15:41:38
 * https://www.nowcoder.com/practice/11a5040fa894430f9d25fda1be37ddc8?tpId=290&tqId=2367251
 * [BC8] 牛牛的字符菱形
 */

/** @nc code=start */

// 描述
// 牛牛尝试用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
// 输入描述：
// 输入一个char类型字符
// 输出描述：
// 输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形
// 示例1
// 输入：
// #
// 复制
// 输出：
//   #
//  ###
// #####
//  ###
//   #

#include <iostream>
using namespace std;

int main() {
    char a = 0;
    // 方法一
    // cin >> a;
    // cout << "  " << a << endl;
    // cout << " " << a << a << a << endl;
    // cout << a << a << a << a << a << endl;
    // cout << " " << a << a << a << endl;
    // cout << "  " << a << endl;

    // 方法二
    // cin >> a;
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         if (i + j >= 2 && i - j <= 2 && j - i <= 2 && i + j <= 6) {
    //             cout << a;
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 方法三
    cin >> a;
    for (int i = 0; i < 5/2+0.5; i++) {
        for (int j = i; j < 5/2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i*2+1; j++) {
            cout << a;
        }
        cout << endl;
    }
    for (int i = 5/2-1; i >= 0; i--) {
        for (int j = i; j < 5/2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i*2+1; j++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
