// P5713 【深基3.例5】洛谷团队系统

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int num;
    cin >> num;

    if (5 * num > (3 * num + 11)){
        cout << "Luogu" << endl;
    }else{
        cout << "Local" << endl;
    }

    return 0;
}
