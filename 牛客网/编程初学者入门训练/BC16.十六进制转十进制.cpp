/**
 * @nc app=nowcoder id=33e148570d5c4e728116e2f861638c9c topic=290 question=274329 lang=C++
 * 2024-12-24 16:06:48
 * https://www.nowcoder.com/practice/33e148570d5c4e728116e2f861638c9c?tpId=290&tqId=274329
 * [BC16] 十六进制转十进制
 */

/** @nc code=start */

// 描述
// BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。

// 输入描述：
// 无
// 输出描述：
// 十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
// 备注：
// printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。

#include <iostream>
using namespace std;

int int16to10(string a) {
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        res = res * 16 + (a[i] >= 'A' ? a[i] - 'A' + 10 : a[i] - '0');
    }
    return res;
}

int main() {
    // 方法一
    // int a = 0xABCDEF;
    // printf("%15d\n", a);

    // 方法二
    printf("%15d\n", int16to10("ABCDEF"));
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
