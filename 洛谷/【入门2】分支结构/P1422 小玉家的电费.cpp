#include <iostream>
#include <iomanip>  // 添加这一行以包含iomanip库
using namespace std;

int main() {
    float dian;
    cin >> dian;

    if (dian <= 150) {
        cout << fixed << setprecision(1) << dian * 0.4463 << endl;
    } else if (dian <= 400) {
        cout << fixed << setprecision(1) << 150 * 0.4463 + (dian - 150) * 0.4663 << endl;
    } else {
        cout << fixed << setprecision(1) << 150 * 0.4463 + 250 * 0.4663 + (dian - 400) * 0.5663 << endl;
    }

    return 0;
}