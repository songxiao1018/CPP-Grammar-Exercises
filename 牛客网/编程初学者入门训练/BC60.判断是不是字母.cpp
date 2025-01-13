/**
 * @nc app=nowcoder id=91a588dd4cd244bfa616f17603ec123c topic=290 question=307550 lang=C++
 * 2025-01-13 20:14:51
 * https://www.nowcoder.com/practice/91a588dd4cd244bfa616f17603ec123c?tpId=290&tqId=307550
 * [BC60] 判断是不是字母
 * 
 * 描述
KiKi想判断输入的字符是不是字母，请帮他编程实现。

输入描述：
多组输入，每一行输入一个字符。
输出描述：
针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
示例1
输入：
A
6
复制
输出：
A is an alphabet.
6 is not an alphabet.
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    char x;
    while (cin >> x) {
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
            cout << x << " is an alphabet." << endl;
        } else {
            cout << x << " is not an alphabet." << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
