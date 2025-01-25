// P1423 小玉在游泳

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 在此处输入代码
    double s;
    cin >> s;
    double k = 2;
    int num = 0;
    while(s > 0){
        s -= k;
        num ++;
        k *= 0.98;
    }
    cout << num;

    return 0;
}
