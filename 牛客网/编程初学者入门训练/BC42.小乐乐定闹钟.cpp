/**
 * @nc app=nowcoder id=0f7e422e12be4a7f9958ca2a82abc775 topic=290 question=632014 lang=C++
 * 2025-01-12 15:33:35
 * https://www.nowcoder.com/practice/0f7e422e12be4a7f9958ca2a82abc775?tpId=290&tqId=632014
 * [BC42] 小乐乐定闹钟
 */

/** @nc code=start */

// 描述
// 小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)

// 输入描述：
// 输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。

// 输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)

// (0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)

// 输出描述：
// 对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。
// 示例1
// 输入：
// 0:0 100
// 复制
// 输出：
// 01:40
// 复制
// 示例2
// 输入：
// 1:0 200
// 复制
// 输出：
// 04:20

#include <iostream>
using namespace std;

int main() {
    int hour, minute, k;
    scanf("%d:%d %d", &hour, &minute, &k);
    int total = hour * 60 + minute + k;
    printf("%02d:%02d", total / 60 % 24, total % 60);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
