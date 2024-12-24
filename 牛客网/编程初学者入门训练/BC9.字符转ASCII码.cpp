/**
 * @nc app=nowcoder id=93f4d05a02d9468db424ed4316bfc8fd topic=290 question=292273 lang=C++
 * 2024-12-24 15:49:00
 * https://www.nowcoder.com/practice/93f4d05a02d9468db424ed4316bfc8fd?tpId=290&tqId=292273
 * [BC9] 字符转ASCII码
 */

/** @nc code=start */

// 描述
// BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
// 输入描述：
// 一行，一个字符。
// 输出描述：
// 一行，输出输入字符对应的ASCII码。
// 示例1
// 输入：
// c
// 复制
// 输出：
// 99

#include <iostream>
using namespace std;

int main() {
    char a = 0;
    cin >> a;
    cout << (int)a << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
