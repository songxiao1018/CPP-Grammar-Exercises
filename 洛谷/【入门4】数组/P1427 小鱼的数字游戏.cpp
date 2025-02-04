// P1427 小鱼的数字游戏

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    unsigned long long n[300];
    int i = 0;
    for (i = 0; i < 300; i++) {
        cin >> n[i];
        if (n[i] == 0) {
            break;
        }
    }
    for (; i >=0; i--) {
        if (n[i] == 0) {
            continue;
        }
        cout << n[i] << " ";
    }

    return 0;
}
