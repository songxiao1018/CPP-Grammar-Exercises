/**
 * @nc app=nowcoder id=933a60dcf63e403d901c75f82e3154db topic=290 question=308927 lang=C++
 * 2025-01-12 14:58:07
 * https://www.nowcoder.com/practice/933a60dcf63e403d901c75f82e3154db?tpId=290&tqId=308927
 * [BC23] 牛牛学取余
 */

/** @nc code=start */

// 描述
// 输入两个整数a, b, 输出a 除以b的余数，5除以2的余数为1，10除以4的余数为2

// 输入描述：
// 输入两个整数，在int范围内
// 输出描述：
// 输出一个整数
// 示例1
// 输入：
// 5 2
// 复制
// 输出：
// 1

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a % b << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
