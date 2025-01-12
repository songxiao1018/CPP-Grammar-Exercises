/**
 * @nc app=nowcoder id=6187581174ac48278ca3bccf8d534897 topic=290 question=295415 lang=C++
 * 2025-01-04 21:23:23
 * https://www.nowcoder.com/practice/6187581174ac48278ca3bccf8d534897?tpId=290&tqId=295415
 * [BC20] 进制A+B
 */

/** @nc code=start */

#include <iostream>
using namespace std;

// 描述
// 输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）。
// 输入描述：
// 一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
// 输出描述：
// 一行，a+b的十进制结果。
// 示例1
// 输入：
// 0x12 05
// 复制
// 输出：
// 23
// 复制
// 备注：
// 十六进制Hexadecimal一般以0x开头，例如0xFF。八进制Octal，一般以0开头，例如07。

int main() {
    string a, b;
    cin >> a >> b;
    int a_dec = stoi(a, nullptr, 16);
    int b_dec = stoi(b, nullptr, 8);
    cout << a_dec + b_dec << endl;
    return 0;
    
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
