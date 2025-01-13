/**
 * @nc app=nowcoder id=a7bcbe3cb86f435d9617dfdd20a16714 topic=290 question=309000 lang=C++
 * 2025-01-13 20:12:09
 * https://www.nowcoder.com/practice/a7bcbe3cb86f435d9617dfdd20a16714?tpId=290&tqId=309000
 * [BC55] 判断闰年
 * 
 * 描述
判断一个整数n是否是闰年


输入描述：
输入一个整数n （1≤n≤2018）
输出描述：
是闰年输出"yes" 否则输出"no"
示例1
输入：
2000
复制
输出：
yes
复制
示例2
输入：
1900
复制
输出：
no
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
