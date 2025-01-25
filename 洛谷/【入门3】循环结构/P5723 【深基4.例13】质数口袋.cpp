// P5723 【深基4.例13】质数口袋

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // 在此处输入代码
    int all;
    cin >> all;
    int now = 0, num = 0;
    for(int i = 1; now <= all; i++){
        if(now + i > all) break;;
        if(isPrime(i)){
            now += i;
            num++; 
            cout << i << endl;
        }
    }
    cout << num << endl;

    return 0;
}
