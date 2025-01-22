// P1046 [NOIP2005 普及组] 陶陶摘苹果

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    cout << "Hello World!" << endl;

    int num , hs[10], w;
    for (int i = 0; i < 10; i++) {
        cin >> hs[i];
    }
    cin >> w;
    for (int i = 0; i < 10; i++) {
        if (hs[i] <= w +30) {
            num++;
        }
    }
    printf("%d", num);

    return 0;
}
