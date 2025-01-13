/**
 * @nc app=nowcoder id=bcaf710fb58a44e1b678a890e6e90d7c topic=290 question=292278 lang=C++
 * 2025-01-13 20:05:39
 * https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c?tpId=290&tqId=292278
 * [BC49] kiki算数
 * 
 * 描述

问题：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够进行 100 以内的非负整数的加法计算。不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，规则如下：

1.       只保留该数的最后两位，例如：对KiKi来说1234等价于34；

2.       如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。

例如：45+80 = 25

要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a+b 的值。


数据范围： 0≤a,b≤2 31 −1 
输入描述：
一行，输入两个非负整数a和b，用一个空格分隔。（0 <= a,b<= 231-1）。
输出描述：
针对每组输入，输出按照KiKi的运算规则计算出 a+b 的值。
示例1
输入：
45 80
复制
输出：
25
复制

 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a % 100 + b % 100) % 100;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
