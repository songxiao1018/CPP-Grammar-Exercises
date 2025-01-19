// P5708 【深基2.习2】三角形面积

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 在此处输入代码
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    // cout << p * (p - a) * (p - b) * (p - c) << endl;

    return 0;
}
