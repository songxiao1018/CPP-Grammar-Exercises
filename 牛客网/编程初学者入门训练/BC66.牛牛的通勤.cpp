/**
 * @nc app=nowcoder id=1fe33d534843473eb086c4b42655e13d topic=290 question=2368397 lang=C++
 * 2025-01-13 20:27:26
 * https://www.nowcoder.com/practice/1fe33d534843473eb086c4b42655e13d?tpId=290&tqId=2368397
 * [BC66] 牛牛的通勤
 * 
 * 描述
牛牛的通勤路上有两种选择，要么走路，要么打车，牛牛走路的速度是 1m/s 。打车的速度的 10m/s ，但是打车需要等出租车 10 s，请你计算牛牛想尽快到公司应该选择打车还是走路。
输入描述：
输入一个正整数，表示牛牛到公司的距离。
输出描述：
输出牛牛想尽可能快到公司应该选择打车还是走路，走路的话输出 w ， 打车的输出 v。保证答案一定不会出现两个方案时间一样的情况。
示例1
输入：
10
复制
输出：
w
复制
示例2
输入：
13
复制
输出：
v
复制
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int distance;
    cin >> distance;
    if (distance <= 10) {
        cout << "w";
    } else {
        cout << "v";
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
