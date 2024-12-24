/**
 * @nc app=nowcoder id=6f3e10bcf63240a6b7bde95a22cb4cc4 topic=290 question=2367009 lang=C++
 * 2024-12-24 15:40:09
 * https://www.nowcoder.com/practice/6f3e10bcf63240a6b7bde95a22cb4cc4?tpId=290&tqId=2367009
 * [BC6] 牛牛的第二个整数
 */

/** @nc code=start */

// 描述
// 牛牛从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
// 输入描述：
// 一行输入 3 个整数，用空格隔开。
// 输出描述：
// 请输出第二个整数的值。
// 示例1
// 输入：
// 1 2 3
// 复制
// 输出：
// 2

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << b << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
