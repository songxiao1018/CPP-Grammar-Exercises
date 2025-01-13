/**
 * @nc app=nowcoder id=7eb4df4d52c44d309081509cf52ecbc4 topic=290 question=307549 lang=C++
 * 2025-01-13 20:11:02
 * https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4?tpId=290&tqId=307549
 * [BC53] 判断是元音还是辅音
 * 
 * 描述
KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
输入描述：
多组输入，每行输入一个字母。
输出描述：
针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。
示例1
输入：
A
b
复制
输出：
Vowel
Consonant
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    char x;
    while (cin >> x) {
        if (x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
