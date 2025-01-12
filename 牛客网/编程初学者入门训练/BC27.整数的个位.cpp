/**
 * @nc app=nowcoder id=1c0ce3c9134f45edbcd4343f9d5e320a topic=290 question=308928 lang=C++
 * 2025-01-12 15:00:17
 * https://www.nowcoder.com/practice/1c0ce3c9134f45edbcd4343f9d5e320a?tpId=290&tqId=308928
 * [BC27] 整数的个位
 */

/** @nc code=start */

// 描述
// 输入一个整数a, 求个位数

// 输入描述：
// 输入一个整数,在int范围内
// 输出描述：
// 输出一个整数
// 示例1
// 输入：
// 102
// 复制
// 输出：
// 2

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a % 10 << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
