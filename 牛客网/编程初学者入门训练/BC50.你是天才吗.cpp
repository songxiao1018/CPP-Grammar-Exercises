/**
 * @nc app=nowcoder id=557cc54704bb4d56b73b62d1a5455331 topic=290 question=307544 lang=C++
 * 2025-01-13 20:06:26
 * https://www.nowcoder.com/practice/557cc54704bb4d56b73b62d1a5455331?tpId=290&tqId=307544
 * [BC50] 你是天才吗？
 * 
 * 描述
据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
输入描述：
多组输入，每行输入包括一个整数表示的智商。
输出描述：
针对每行输入，输出“Genius”。
示例1
输入：
160
复制
输出：
Genius

 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        if (x >= 140) {
            cout << "Genius" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
