// P1035 [NOIP2002 普及组] 级数求和

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int k,n = 0;
    cin >> k;
    double sum = 0;
    while(sum <= k){
        sum += 1.0/(++n);
    }
    cout << n << endl;

    return 0;
}
