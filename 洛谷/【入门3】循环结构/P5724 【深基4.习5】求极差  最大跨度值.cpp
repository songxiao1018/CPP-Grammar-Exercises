// P5724 【深基4.习5】求极差  最大跨度值

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n, max= -1,min =-1;
    cin >> n;
    for  (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max || max == -1) max = x;
        if (x < min || min == -1) min = x;
    }
    cout << max - min << endl;

    return 0;
}
