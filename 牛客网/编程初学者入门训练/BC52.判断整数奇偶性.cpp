/**
 * @nc app=nowcoder id=a8b018667e274af29b5f76a6673450fc topic=290 question=307547 lang=C++
 * 2025-01-13 20:10:42
 * https://www.nowcoder.com/practice/a8b018667e274af29b5f76a6673450fc?tpId=290&tqId=307547
 * [BC52] 判断整数奇偶性
 * 
 * 描述
KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
输入描述：
多组输入，每行输入包括一个整数。
输出描述：
针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
示例1
输入：
4
7
复制
输出：
Even
Odd

 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        if (x % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
