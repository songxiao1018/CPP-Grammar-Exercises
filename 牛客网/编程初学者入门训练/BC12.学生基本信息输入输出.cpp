/**
 * @nc app=nowcoder id=58b6a69b4bf943b49d2cd3c15770b9fd topic=290 question=274662 lang=C++
 * 2024-12-24 15:53:05
 * https://www.nowcoder.com/practice/58b6a69b4bf943b49d2cd3c15770b9fd?tpId=290&tqId=274662
 * [BC12] 学生基本信息输入输出
 */

/** @nc code=start */

// 描述
// 依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。

// 数据范围：学号满足 
// 1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
// 输入描述：
// 学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
// 输出描述：
// 学号，3科成绩，输出格式详见输出样例。
// 示例1
// 输入：
// 17140216;80.845,90.55,100.00
// 复制
// 输出：
// The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
// 复制
// 示例2
// 输入：
// 123456;93.33,99.99,81.20
// 复制
// 输出：
// The each subject score of No. 123456 is 93.33, 99.99, 81.20.

#include <iostream>
using namespace std;

int main() {
    int a;
    float b,c,d;
     
    scanf ("%d;%f,%f,%f",&a,&b,&c,&d);
    printf ("The each subject score of No. %d is %.2f, %.2f, %.2f.",a,b,c,d);
    
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
