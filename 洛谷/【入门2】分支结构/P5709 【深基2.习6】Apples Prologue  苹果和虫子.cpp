// P5709 【深基2.习6】Apples Prologue  苹果和虫子

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int m,t,s;
    cin >> m >> t >> s;
    if(t == 0){
        cout << "0";
        return 0;
    }
    if (m > s/t) {
        if (s%t == 0)
        cout << m - int(s/t);
        else
        cout << m - int(s/t) - 1;
    } else {
        cout << "0";
    }

    return 0;
}
