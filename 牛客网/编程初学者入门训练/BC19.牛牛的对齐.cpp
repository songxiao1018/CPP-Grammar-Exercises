/**
 * @nc app=nowcoder id=a1c18a8b533045ebbbbd9c11f9e857ac topic=290 question=2367148 lang=C++
 * 2025-01-04 21:22:13
 * https://www.nowcoder.com/practice/a1c18a8b533045ebbbbd9c11f9e857ac?tpId=290&tqId=2367148
 * [BC19] 牛牛的对齐
 */

/** @nc code=start */

#include <iostream>
using namespace std;

// 描述
// 读入 3 个整数，牛牛尝试以后两个数字占 8 个空格的宽度靠右对齐输出。
// 输入描述：
// 输入三个整数，用空格隔开。
// 输出描述：
// 输出 3 个整数以第二三个数字占 8 个空格靠右对齐输出
// 示例1
// 输入：
// 2 7 5
// 复制
// 输出：
// 2       7       5
// 复制

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << "       " << b << "       " << c << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
