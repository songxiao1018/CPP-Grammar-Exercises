/**
 * @nc app=nowcoder id=109a44d649a142d483314e8a57e2c710 topic=290 question=292284 lang=C++
 * 2025-01-12 15:20:46
 * https://www.nowcoder.com/practice/109a44d649a142d483314e8a57e2c710?tpId=290&tqId=292284
 * [BC34] 计算三角形的周长和面积
 */

/** @nc code=start */

// 描述
// 根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

// 数据范围： 
// 0<a,b,c≤100000 
// 输入描述：
// 一行，三角形3条边（能构成三角形），中间用一个空格隔开。
// 输出描述：
// 一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
// 示例1
// 输入：
// 3 3 3
// 复制
// 输出：
// circumference=9.00 area=3.90

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double perimeter = a + b + c;
    double area = sqrt((perimeter / 2) * ((perimeter / 2) - a) * ((perimeter / 2) - b) * ((perimeter / 2) - c));
    printf("circumference=%.2f area=%.2f", perimeter, area);
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
