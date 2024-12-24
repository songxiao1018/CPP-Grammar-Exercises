/**
 * @nc app=nowcoder id=95eb723a3e854376a7eb6d116cc7d875 topic=290 question=275322 lang=C++
 * 2024-12-24 16:01:47
 * https://www.nowcoder.com/practice/95eb723a3e854376a7eb6d116cc7d875?tpId=290&tqId=275322
 * [BC14] 按照格式输入并交换输出
 */

/** @nc code=start */

// 描述

// 输入两个整数，范围-231~231-1，交换两个数并输出。

// 输入描述：
// 输入只有一行，按照格式输入两个整数，范围，中间用“,”分隔。
// 输出描述：
// 把两个整数按格式输出，中间用“,”分隔。
// 示例1
// 输入：
// a=1,b=2
// 复制
// 输出：
// a=2,b=1
// 复制
// 备注：
// 如果格式控制串中有非格式字符则输入时也要输入该非格式字符。


#include <iostream>
using namespace std;

int main() {
    int a, b;
    scanf("a=%d,b=%d", &a, &b);
    printf("a=%d,b=%d", b, a);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
