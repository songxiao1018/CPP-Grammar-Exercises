/**
 * @nc app=nowcoder id=b2203c4a5c304536a7f577bc885de511 topic=290 question=2367246 lang=C++
 * 2024-12-24 16:16:58
 * https://www.nowcoder.com/practice/b2203c4a5c304536a7f577bc885de511?tpId=290&tqId=2367246
 * [BC18] 牛牛的空格分隔
 */

/** @nc code=start */

// 描述
// 牛牛从键盘读入一个字符，一个整数，一个单精度浮点数，按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
// 输入描述：
// 读入一个字符，一个整数，一个单精度浮点数用换行符隔开，
// 输出描述：
// 按顺序输出字符、整数、单精度浮点数，用空格分隔，浮点数保留 6 位小数
// 示例1
// 输入：
// a
// 1
// 1.23
// 复制
// 输出：
// a 1 1.230000

#include <iostream>
using namespace std;

int main() {
    char c;
    int a;
    float b;
    cin >> c >> a >> b;
    printf("%c %d %.6f\n", c, a, b);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
