// P5721 【深基4.例6】数字直角三角形

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    int now = 1;
    for (int i = n; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%02d", now++);
        }
        cout << endl;
    }

    return 0;
}
