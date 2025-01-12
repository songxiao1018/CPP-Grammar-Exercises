/**
 * @nc app=nowcoder id=031db23916904f4fad72198fe491b47b topic=290 question=308929 lang=C++
 * 2025-01-12 15:00:47
 * https://www.nowcoder.com/practice/031db23916904f4fad72198fe491b47b?tpId=290&tqId=308929
 * [BC28] 整数的十位
 */

/** @nc code=start */

// 描述
// 输入一个整数，求其十位数


// 输入描述：
// 输入一个整数，在int范围内
// 输出描述：
// 输出一个整数
// 示例1
// 输入：
// 123
// 复制
// 输出：
// 2

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a / 10 % 10 << endl;
    return 0;

    int a;
    cin >> a;
    a = a / 10;
    a = a % 10;
    cout << a << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
