// P5722 【深基4.例11】数列求和

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n,sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}
