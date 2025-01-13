/**
 * @nc app=nowcoder id=3f33889582934a09b4e3ddd3cc976226 topic=290 question=352866 lang=C++
 * 2025-01-13 20:16:39
 * https://www.nowcoder.com/practice/3f33889582934a09b4e3ddd3cc976226?tpId=290&tqId=352866
 * [BC62] 统计数据正负个数
 * 
 * 描述
输入10个整数，分别统计输出正数、负数的个数。
输入描述：
输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
两行，第一行正数个数，第二行负数个数，具体格式见样例。
示例1
输入：
-1 2 3 -6 7 8 -1 6 8 10
复制
输出：
positive:7
negative:3
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x, pos = 0, neg = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        }
    }
    cout << "positive:" << pos << endl;
    cout << "negative:" << neg << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
