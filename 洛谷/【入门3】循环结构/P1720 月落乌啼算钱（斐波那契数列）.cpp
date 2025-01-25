// P1720 月落乌啼算钱（斐波那契数列）

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;

    cout << fixed << setprecision(2) << 1.0 * (pow((1.0 + sqrt(5))/2, n) - pow((1.0 - sqrt(5))/2, n)) /sqrt(5) << endl;

    return 0;
}
