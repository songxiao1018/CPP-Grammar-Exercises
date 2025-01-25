// P5718 【深基4.例2】找最小值

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int i,k,min = -1;
    cin >> i;
    while (i--) {
        cin >> k;
        if (k < min || min == -1) {
            min = k;
        }
    }
    cout << min;

    return 0;
}
