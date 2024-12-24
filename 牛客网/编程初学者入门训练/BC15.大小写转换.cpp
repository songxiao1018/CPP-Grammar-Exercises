/**
 * @nc app=nowcoder id=4e089ee8966a4ed4b306f64e68d45264 topic=290 question=292286 lang=C++
 * 2024-12-24 16:02:47
 * https://www.nowcoder.com/practice/4e089ee8966a4ed4b306f64e68d45264?tpId=290&tqId=292286
 * [BC15] 大小写转换
 */

/** @nc code=start */

// 描述
// 实现字母的大小写转换。多组输入输出。
// 输入描述：
// 多组输入，每一行输入大写字母。
// 输出描述：
// 针对每组输入输出对应的小写字母。

#include <iostream>
using namespace std;

int main() {
    char c;
    while (cin >> c) {
        cout << (char)(c + 32) << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
