/**
 * @nc app=nowcoder id=34d3911bf2fd48a285f6396e886a1259 topic=290 question=292276 lang=C++
 * 2025-01-12 14:59:53
 * https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259?tpId=290&tqId=292276
 * [BC26] 计算带余除法
 */

/** @nc code=start */

// 描述
// 给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
// 输入描述：
// 一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
// 输出描述：
// 一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
// 示例1
// 输入：
// 15 2
// 复制
// 输出：
// 7 1
// 复制

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << " " << a % b << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
