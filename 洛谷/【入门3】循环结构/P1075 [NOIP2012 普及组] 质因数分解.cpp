// P1075 [NOIP2012 普及组] 质因数分解

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    
    // for (int i = n-1 ; i >= 2; i--) {
    //     if(n % i == 0){
    //         int tmp = 1;
    //         for(int j = 2; j < sqrt(i); j++){
    //             if(i % j == 0){
    //                 tmp = 0;
    //                 break;
    //             }
    //         }
    //         if(tmp == 1){
    //             cout << i << endl;
    //             return 0;
    //         }
    //     }
    // }


    // for (int i = 2 ; i < n ; i++) {
    //     if(n % i == 0){
    //         int tmp = 1;
    //         for(int j = 2; j < sqrt(n/i); j++){
    //             if(n/i % j == 0){
    //                 tmp = 0;
    //                 break;
    //             }
    //         }
    //         if(tmp == 1){
    //             cout << n/i << endl;
    //             return 0;
    //         }
    //     }
    // }


    // 特殊情况处理
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }

    // 从小到大查找质因数
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            // cout << i << endl;
            n /= i;
        }
    }

    // 如果 n 还大于 1，说明 n 是一个质数
    if (n > 1) {
        cout << n << endl;
    }


    return 0;
}
