// P1055 [NOIP2008 普及组] ISBN 号码

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++) {
        char c = ' ';
        while (c < '0' || c > '9' && c != 'X') {
            cin >> c;
        }
        if (c != '-') {
            arr[i] = c - '0';
            sum++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 9; i++) {
        ans += arr[i] * (i + 1);
    }
    ans %= 11;
    if (ans == 10) {
        if (arr[9] == 'X' - '0') {
            cout << "Right";
        } else {
            for (int i = 0; i < 9; i++) {
                if (i == 1 || i == 4) {
                    cout << "-";
                }
                cout << arr[i];
            }
            cout << "-X";
        }
    } else {
        if (ans == arr[9]) {
            cout << "Right";
        } else {
            for (int i = 0; i < 9; i++) {
                if (i == 1 || i == 4) {
                    cout << "-";
                }
                cout << arr[i];
            }
            cout << "-" << ans;
        }
    }

    return 0;
}
