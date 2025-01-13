/**
 * @nc app=nowcoder id=5d7dfd405e5f4e4fbfdff6862c46b751 topic=290 question=295428 lang=C++
 * 2025-01-13 20:17:00
 * https://www.nowcoder.com/practice/5d7dfd405e5f4e4fbfdff6862c46b751?tpId=290&tqId=295428
 * [BC63] 网购
 * 
 * 描述
KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。

数据范围：衣服价格满足 1≤val≤100000 
输入描述：
一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
输出描述：
一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
示例1
输入：
1000.0 11 11 1
复制
输出：
650.00
复制
示例2
输入：
999.8 12 12 0
复制
输出：
799.84
复制
示例3
输入：
66.6 11 11 1
复制
输出：
0.00
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    double price;
    int month, day, coupon;
    cin >> price >> month >> day >> coupon;
    if ((month == 11 && day == 11) || (month == 12 && day == 12)) {
        if (month == 11) {
            price *= 0.7;
        } else {
            price *= 0.8;
        }
        if (coupon == 1) {
            price -= 50;
        }
    }
    if (price < 0) {
        price = 0;
    }
    printf("%.2f\n", price);
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
