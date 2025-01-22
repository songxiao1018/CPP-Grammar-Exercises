// P1888 三角函数

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3] = {a,b,c};
    int max,min;
    max = min = arr[0];
    for (int i = 0; i < 3; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
        if (arr[i] <= min) {
            min = arr[i];
        }
    }
    for (int i = 1; i <= min; i++) {
        if (max % i == 0 && min % i == 0) {
            max /= i;
            min /= i;
        }
    }
    cout << min << "/" << max << endl;

    return 0;
}
