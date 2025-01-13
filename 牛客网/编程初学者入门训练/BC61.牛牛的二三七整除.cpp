/**
 * @nc app=nowcoder id=b2cf0b791245436f8f0591ae9f4c664f topic=290 question=2368199 lang=C++
 * 2025-01-13 20:15:12
 * https://www.nowcoder.com/practice/b2cf0b791245436f8f0591ae9f4c664f?tpId=290&tqId=2368199
 * [BC61] 牛牛的二三七整除
 * 
 * 描述
牛牛从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。如果不能被 2 3 7 任意一个数整除则输出 n。
输入描述：
输入一个整数
输出描述：
输出能被 2 3 7 哪几个数整除，并按升序输出。
示例1
输入：
6
复制
输出：
2 3
复制
示例2
输入：
3
复制
输出：
3
复制
示例3
输入：
14
复制
输出：
2 7
复制
示例4
输入：
11
复制
输出：
n
复制
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "2 ";
    }
    if (n % 3 == 0) {
        cout << "3 ";
    }
    if (n % 7 == 0) {
        cout << "7 ";
    }
    if (n % 2 != 0 && n % 3 != 0 && n % 7 != 0) {
        cout << "n";
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
