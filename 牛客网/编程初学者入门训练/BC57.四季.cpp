/**
 * @nc app=nowcoder id=eaf21203b61b4a689987fdc165d00dfc topic=290 question=1189147 lang=C++
 * 2025-01-13 20:12:51
 * https://www.nowcoder.com/practice/eaf21203b61b4a689987fdc165d00dfc?tpId=290&tqId=1189147
 * [BC57] 四季
 * 
 * 描述
气象意义上，通常以3～5月为春季(spring)，6～8月为夏季(summer)，9～11月为秋季(autumn)，12月～来年2月为冬季(winter)。请根据输入的年份以及月份，输出对应的季节。

输入描述：
输入的数据格式是固定的YYYYMM的形式，即：年份占4个数位，月份占2个数位。
输出描述：
输出月份对应的季节（用英文单词表示，全部用小写字母）。
示例1
输入：
201901
复制
输出：
winter
复制
备注：
输入的年份应该是4位数，输入的月份应该为1~12。
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int n, y, m;
    while (cin >> n) {
        y = n / 100;
        m = n % 100;
        if (m >= 3 && m <= 5) {
            cout << "spring" << endl;
        } else if (m >= 6 && m <= 8) {
            cout << "summer" << endl;
        } else if (m >= 9 && m <= 11) {
            cout << "autumn" << endl;
        } else {
            cout << "winter" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
