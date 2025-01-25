// P1307 [NOIP2011 普及组] 数字反转

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    long long n;
    cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    if (n < 0){
        cout << "-";
        n = -n;
    }
    while (n % 10 == 0){
        n /= 10;
    }
    while (n != 0){
        cout << n % 10;
        n /= 10;
    }
    

    return 0;
}
