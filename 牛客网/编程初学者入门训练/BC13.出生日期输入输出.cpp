/**
 * @nc app=nowcoder id=4a4a9dd1edb6453ba4a0432319200743 topic=290 question=275034 lang=C++
 * 2024-12-24 16:00:30
 * https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743?tpId=290&tqId=275034
 * [BC13] 出生日期输入输出
 */

/** @nc code=start */

// 描述
// 输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。

// 数据范围：年份满足 1990≤y≤2015 ，月份满足  1≤m≤12  ，日满足  1≤d≤30 
// 输入描述：
// 输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
// 输出描述：
// 三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
// 示例1
// 输入：
// 20130225 
// 输出：
// year=2013
// month=02
// date=25
// 备注：
// 通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。

#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    scanf("%4d%2d%2d", &y, &m, &d);
    printf("year=%04d\n", y);
    printf("month=%02d\n", m);
    printf("date=%02d\n", d);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
