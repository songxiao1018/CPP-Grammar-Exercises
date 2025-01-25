// P1217 [USACO1.5] 回文质数 Prime Palindromes

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true; // 2 是唯一的偶数质数
    if (n % 2 == 0) return false; // 排除其他偶数

    for (int i = 3; i * i <= n; i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int temp = n;
    int reverse = 0;
    while (temp) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return n == reverse;
}

int main() {
    // 在此处输入代码
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        // 回文数必须是奇数，，，，回文数，11的倍数
        // 题目样例代码，判断开头是否为1
        if (i % 2 == 0 && i != 2){
            continue;
        }
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << " " << i % 11 << '\n';
        }
    }

    return 0;
}
