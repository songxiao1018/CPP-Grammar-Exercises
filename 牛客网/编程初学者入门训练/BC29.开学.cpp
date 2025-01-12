/**
 * @nc app=nowcoder id=9cc35bd0754f4feca18e10e57c672467 topic=290 question=967208 lang=C++
 * 2025-01-12 15:04:06
 * https://www.nowcoder.com/practice/9cc35bd0754f4feca18e10e57c672467?tpId=290&tqId=967208
 * [BC29] 开学？
 */

/** @nc code=start */

/*
描述
小S：终于可以开学啦！好开心啊！
小Y：你没看新闻吗，开学日期又延后了。
小S：NOOOOOOOOOOOOOOOO！
小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？
输入描述：
输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
输出描述：
输出一个数字，表示开学日期是星期几。
示例1
输入：
1 2
复制
输出：
3
复制
示例2
输入：
5 9
复制
输出：
7
*/

#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    cout << (x + n - 1) % 7 + 1 << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
