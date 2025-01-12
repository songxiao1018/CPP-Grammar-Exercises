/**
 * @nc app=nowcoder id=c4ae7bcac7f9491b8be82ee516a94899 topic=290 question=292281 lang=C++
 * 2025-01-12 15:14:50
 * https://www.nowcoder.com/practice/c4ae7bcac7f9491b8be82ee516a94899?tpId=290&tqId=292281
 * [BC30] 时间转换
 */

/** @nc code=start */

// 描述
// 给定秒数 seconds ，把秒转化成小时、分钟和秒。

// 数据范围： 
// 0<seconds<100000000 
// 输入描述：
// 一行，包括一个整数，即给定的秒数。
// 输出描述：
// 一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
// 示例1
// 输入：
// 3661
// 复制
// 输出：
// 1 1 1

#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;
    cout << hours << " " << minutes << " " << sec << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
