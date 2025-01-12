/**
 * @nc app=nowcoder id=cad8d946adf64ab3b17a555d68dc0bba topic=290 question=320955 lang=C++
 * 2025-01-12 15:20:00
 * https://www.nowcoder.com/practice/cad8d946adf64ab3b17a555d68dc0bba?tpId=290&tqId=320955
 * [BC33] 统计成绩
 */

/** @nc code=start */

// 描述
// 输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

// 数据范围：
// 1≤n≤100  ， 成绩使用百分制且不可能出现负数
// 输入描述：
// 两行，

// 第1行，正整数n（1≤n≤100）

// 第2行，n科成绩（范围0.0~100.0），用空格分隔。
// 输出描述：
// 输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
// 示例1
// 输入：
// 5
// 99.5 100.0 22.0 60.0 88.5
// 复制
// 输出：
// 100.00 22.00 74.00
// 复制

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double max = 0, min = 100, sum = 0;
    for (int i = 0; i < n; i++) {
        double score;
        cin >> score;
        if (score > max) max = score;
        if (score < min) min = score;
        sum += score;
    }
    printf("%.2f %.2f %.2f\n", max, min, sum / n);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
