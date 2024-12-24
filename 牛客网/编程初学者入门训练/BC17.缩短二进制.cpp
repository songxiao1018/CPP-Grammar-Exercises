/**
 * @nc app=nowcoder id=4ffcc9f206b949ddb057ee0099b34d51 topic=290 question=274326 lang=C++
 * 2024-12-24 16:12:24
 * https://www.nowcoder.com/practice/4ffcc9f206b949ddb057ee0099b34d51?tpId=290&tqId=274326
 * [BC17] 缩短二进制
 */

/** @nc code=start */

// 描述
// 我们处理的整数通常用十进制表示，在计算机内存中是以二进制补码形式存储，但通常二进制表示的整数比较长，为了便于在程序设计过程中理解和处理数据，通常采用八进制和十六进制，缩短了二进制补码表示的整数，但保持了二进制数的表达特点。请输出十进制整数1234对应的八进制和十六进制。

// 输入描述：
// 无
// 输出描述：
// 十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。
// 备注：
// printf可以使用使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示

#include <iostream>
#include <string>
using namespace std;

string int10to8(int a) {
    string res = "";
    while (a) {
        res = to_string(a % 8) + res;
        a /= 8;
    }
    return res;
}

string int10to16(int a) {
    string res = "";
    while (a) {
        if (a % 16 < 10) 
            res = to_string(a % 16) + res;
        else
            res = (char)(a % 16 - 10 + 'A') + res;
        a /= 16;
    }
    return res;
}

int main() {
    int a = 1234;
    // printf("%#o %#X\n", a, a);

    // 方法二
    cout << "0" << int10to8(a) << " 0X" << int10to16(a) << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
