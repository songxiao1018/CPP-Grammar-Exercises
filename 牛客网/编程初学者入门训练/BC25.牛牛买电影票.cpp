/**
 * @nc app=nowcoder id=0ad8f1c0d7b84c6d8c560298f91d5e66 topic=290 question=2367255 lang=C++
 * 2025-01-12 14:59:26
 * https://www.nowcoder.com/practice/0ad8f1c0d7b84c6d8c560298f91d5e66?tpId=290&tqId=2367255
 * [BC25] 牛牛买电影票
 */

/** @nc code=start */

// 描述
// 牛牛正在给他的朋友们买电影票，已知一张电影票价是100元，计算 x 位朋友的总票价是多少？
// 输入描述：
// 输入一个正整数 x ，表示牛牛的朋友个数
// 输出描述：
// 输出总票价 （牛牛不需要给自己买票）
// 示例1
// 输入：
// 1
// 复制
// 输出：
// 100

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x * 100 << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
