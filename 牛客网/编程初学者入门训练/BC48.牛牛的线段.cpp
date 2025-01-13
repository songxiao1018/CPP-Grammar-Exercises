/**
 * @nc app=nowcoder id=f72c56ed71664af082c921bf79861c85 topic=290 question=2367473 lang=C++
 * 2025-01-13 20:04:04
 * https://www.nowcoder.com/practice/f72c56ed71664af082c921bf79861c85?tpId=290&tqId=2367473
 * [BC48] 牛牛的线段
 * 
 * 描述
牛牛有一个线段放在二维坐标系中，已知线段两个点的坐标 (x1,y1)，(x2,y2) 。牛牛想知道这个线段的长度的平方
两点之间距离公式是√(（x2-x1）2+（y2-y1）2)，因为本题求距离的平方，因此只需计算 (（x2-x1）2+（y2-y1）2)
输入描述：
第一行输入 x1 和 y1，用空格隔开。
第二行输入 x2 和 y2，用空格隔开。
其中 x1 ， y1 ，x2 ，y2 都是整数
输出描述：
输出线段的长度的平方
示例1
输入：
1 1
2 2
复制
输出：
2
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
