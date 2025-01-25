// P5720 【深基4.例4】一尺之棰

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int a;
    cin >> a;
    int day = 1;
    while (a != 1) {
        a = a / 2;
        day++;
    }
    cout << day << endl;

    return 0;
}
