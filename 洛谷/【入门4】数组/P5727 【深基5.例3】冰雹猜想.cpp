// P5727 【深基5.例3】冰雹猜想

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    stack<int> s;
    s.push(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        // cout << n << " ";
        s.push(n);
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
