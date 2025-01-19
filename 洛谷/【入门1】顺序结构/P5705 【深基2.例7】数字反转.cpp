// P5705 【深基2.例7】数字反转

#include <iostream>
#include <string>
using namespace std;

int main() {
    // 在此处输入代码
    string str;
    cin >> str;
    for (int i = str.size() - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}
