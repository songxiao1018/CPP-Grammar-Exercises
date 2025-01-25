// P5725 【深基4.习8】求三角形

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    int now = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%02d", now);
            now++;
        }
        cout << endl;
    }
    cout << endl;
    now = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            printf("  ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%02d", now);
            now++;
        }
        cout << endl;
    }

    return 0;
}
