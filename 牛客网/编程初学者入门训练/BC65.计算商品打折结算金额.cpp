/**
 * @nc app=nowcoder id=055a92b5c93f497291a58c232f59fae9 topic=290 question=2177544 lang=C++
 * 2025-01-13 20:26:34
 * https://www.nowcoder.com/practice/055a92b5c93f497291a58c232f59fae9?tpId=290&tqId=2177544
 * [BC65] 计算商品打折结算金额
 * 
 * 描述
牛牛商场促销活动：
满100打9折；
满500打8折；

满2000打7折；

满5000打6折
牛阿姨算不清楚自己应该付多少钱，请你帮忙算一下
输入描述：
牛阿姨购买商品打折前的总金额
输出描述：
参加活动后，牛阿姨购买商品应付金额。（保留小数点后1位）
示例1
输入：
654
复制
输出：
523.2

 */

/** @nc code=start */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double price;
    cin >> price;

    double cost = 0.0;

    if (price >= 5000) {
        cost = price * 0.6;
    } else if (price >= 2000) {
        cost = price * 0.7;
    } else if (price >= 500) {
        cost = price * 0.8;
    } else if (price >= 100) {
        cost = price * 0.9;
    } else {
        cost = price;
    }
    

    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;

    return 0;
}

/** @nc code=end */
