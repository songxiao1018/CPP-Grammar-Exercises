// P1161 开灯

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int arr[2000001] = {0};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double a, t;
        cin >> a >> t;
        for (int j = 1; j <= t && j * a < 2000001 ; j++) {
            if (arr[int(j * a)] == 0)
                arr[int(j * a)] = 1;
            else if (arr[int(j * a)] == 1)
                arr[int(j * a)] = 0;
        }
    }
    for (int i = 1; i < 2000001; i++) {
        if (arr[i] == 1)
            cout << i << " ";
    }

    return 0;
}
