// P1428 小鱼比可爱

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
        cout << count << " ";
    }

    return 0;
}
