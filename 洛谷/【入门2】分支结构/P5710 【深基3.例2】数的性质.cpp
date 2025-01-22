// P5710 【深基3.例2】数的性质
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // 判断条件并输出结果
    if (x % 2 == 0 && x > 4 && x <= 12) {
        cout << "1 ";
    } else {
        cout << "0 ";
    }

    if (x % 2 == 0 || x > 4 && x <= 12) {
        cout << "1 ";
    } else {
        cout << "0 ";
    }

    if ((x % 2 != 0 && x > 4 && x <= 12) || (x % 2 == 0 && (x <= 4 || x > 12))) {
        cout << "1 ";
    } else {
        cout << "0 ";
    }

    if (x % 2 != 0 && (x <= 4 || x > 12)) {
        cout << "1 ";
    } else {
        cout << "0 ";
    }

    return 0;
}