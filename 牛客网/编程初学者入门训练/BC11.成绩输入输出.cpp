/**
 * @nc app=nowcoder id=eb49750ef0de47168c21761de086d97c topic=290 question=274657 lang=C++
 * 2024-12-24 15:52:13
 * https://www.nowcoder.com/practice/eb49750ef0de47168c21761de086d97c?tpId=290&tqId=274657
 * [BC11] 成绩输入输出
 */

/** @nc code=start */

// 描述
// 输入3科成绩，然后把三科成绩输出，成绩为整数形式。

// 数据范围： 
// 0 ≤ n ≤ 100 
// 输入描述：
// 一行，3科成绩，用空格分隔，范围（0~100）。
// 输出描述：
// 一行，把3科成绩显示出来，输出格式详见输出样例。
// 示例1
// 输入：
// 60 80 90
// 复制
// 输出：
// score1=60,score2=80,score3=90

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << "score1=" << a << ",score2=" << b << ",score3=" << c << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
