/**
 * @nc app=nowcoder id=56513524333148b38945e1989bc7df4e topic=290 question=307546 lang=C++
 * 2025-01-13 20:06:45
 * https://www.nowcoder.com/practice/56513524333148b38945e1989bc7df4e?tpId=290&tqId=307546
 * [BC51] 及格分数
 * 
 * 描述
KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
输入描述：
多组输入，每行输入包括一个整数表示的分数（0~100）。
输出描述：
针对每行输入，输出“Pass”或“Fail”。
示例1
输入：
94
复制
输出：
Pass
复制
示例2
输入：
44
复制
输出：
Fail
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        if (x >= 60) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
