/**
 * @nc app=nowcoder id=4ef07b4f80fc4027a4b90e2245f8f637 topic=290 question=828859 lang=C++
 * 2025-01-13 20:03:06
 * https://www.nowcoder.com/practice/4ef07b4f80fc4027a4b90e2245f8f637?tpId=290&tqId=828859
 * [BC46] KiKi算期末成绩
 * 
 * 描述
KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
输入描述：
一行，包括四个整数（百分制），用空格分隔，分别表示实验成绩，课堂表现成绩，过程考核成绩，期末上机考试成绩。
输出描述：
一行，总成绩，保留小数点一位。
示例1
输入：
100 100 90 80
复制
输出：
88.0

 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double res = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
    printf("%.1f", res);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
