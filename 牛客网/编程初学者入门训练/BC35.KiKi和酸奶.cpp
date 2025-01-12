/**
 * @nc app=nowcoder id=c7721f3a1b1a47a783974453e82cadbb topic=290 question=292288 lang=C++
 * 2025-01-12 15:23:30
 * https://www.nowcoder.com/practice/c7721f3a1b1a47a783974453e82cadbb?tpId=290&tqId=292288
 * [BC35] KiKi和酸奶
 */

/** @nc code=start */

// 描述
// BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

// 输入描述：
// 多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
// 输出描述：
// 针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
// 示例1
// 输入：
// 8 5 16
// 复制
// 输出：
// 4

#include <iostream>
using namespace std;

int main() {
    int n, h, m;
    while (cin >> n >> h >> m) {
        cout << n - m / h - (m % h == 0 ? 0 : 1) << endl;
    }
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
