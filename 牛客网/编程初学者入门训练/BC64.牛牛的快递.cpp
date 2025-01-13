/**
 * @nc app=nowcoder id=41b42e7b3c3547e3acf8e90c41d98270 topic=290 question=2368469 lang=C++
 * 2025-01-13 20:19:18
 * https://www.nowcoder.com/practice/41b42e7b3c3547e3acf8e90c41d98270?tpId=290&tqId=2368469
 * [BC64] 牛牛的快递
 * 
 * 描述
牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，不足 1kg 部分按 1kg计算。如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
输入描述：
第一行输入一个单精度浮点数 a 和一个字符 b ，a 表示牛牛要寄的快递的重量，b表示牛牛是否选择加急，'y' 表示加急 ，'n' 表示不加急。
输出描述：
输出牛牛总共要支付的快递费用
示例1
输入：
1.5 y
复制
输出：
26
复制
示例2
输入：
0.7 n
复制
输出：
20
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    double a;
    char b;
    cin >> a >> b;
    int res = 20;
    if (a > 1) {
        if (a - (int)a > 0) {
            res += 1;
        }
        res += (int)(a - 1) * 1;
    }
    if (b == 'y') {
        res += 5;
    }
    cout << int(res) << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
