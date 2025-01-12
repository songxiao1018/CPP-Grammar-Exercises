/**
 * @nc app=nowcoder id=87d9a743deec433cb307ccfa43a763f7 topic=290 question=308926 lang=C++
 * 2025-01-12 14:57:41
 * https://www.nowcoder.com/practice/87d9a743deec433cb307ccfa43a763f7?tpId=290&tqId=308926
 * [BC22] 牛牛学除法
 */

/** @nc code=start */

// 描述
// 输入两个整数a, b, 输出a/b的值，只保留整数部分
// 输入描述：
// 输入两个整数,在int范围内
// 输出描述：
// 输出一个整数
// 示例1
// 输入：
// 5 2
// 复制
// 输出：
// 2

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
