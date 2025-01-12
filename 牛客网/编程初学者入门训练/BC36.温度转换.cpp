/**
 * @nc app=nowcoder id=ba83647087b7447783fa2384da6b3d44 topic=290 question=308992 lang=C++
 * 2025-01-12 15:24:47
 * https://www.nowcoder.com/practice/ba83647087b7447783fa2384da6b3d44?tpId=290&tqId=308992
 * [BC36] 温度转换
 */

/** @nc code=start */

// 描述
// 输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)
// 输入描述：
// 输入一个浮点数f(1 <= f<= 100000)
// 输出描述：
// 输出浮点数,保留3位小数
// 示例1
// 输入：
// 100
// 复制
// 输出：
// 37.778

#include <iostream>
using namespace std;

int main() {
    double f;
    cin >> f;
    printf("%.3f", 5.0 / 9 * (f - 32));
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
