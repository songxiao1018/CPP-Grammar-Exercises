// P5711 【深基3.例3】闰年判断

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int year;
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
