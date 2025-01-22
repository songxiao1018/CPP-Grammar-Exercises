// P5715 【深基3.例8】三位数排序

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    // 在此处输入代码
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << ' ' << b << ' ' << c << endl;

    return 0;
}
