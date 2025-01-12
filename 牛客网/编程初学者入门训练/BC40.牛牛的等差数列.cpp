/**
 * @nc app=nowcoder id=fb9daba67b88437a9e501adf020d425e topic=290 question=2367495 lang=C++
 * 2025-01-12 15:31:51
 * https://www.nowcoder.com/practice/fb9daba67b88437a9e501adf020d425e?tpId=290&tqId=2367495
 * [BC40] 牛牛的等差数列
 */

/** @nc code=start */

// 描述
// 牛牛刚接触等差数列， 他知道等差数列是每项与前一项的差值都相等的数列，已知第一项 a 和第二项 b 的值，他想知道第三项是多少。
// 输入描述：
// 输入等差数列的第一、二项 a ， b    
// 输出描述：
// 输出等差数列第三项的值
// 示例1
// 输入：
// 1 3
// 复制
// 输出：
// 5
// 复制

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << b + (b - a);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
