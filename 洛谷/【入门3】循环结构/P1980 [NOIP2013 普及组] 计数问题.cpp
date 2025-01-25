// P1980 [NOIP2013 普及组] 计数问题

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n, x;
    cin >> n >> x;
    int num = 0;
    for(int i = 1 ; i <= n ; i ++){
        int temp = i;
        while(temp != 0){
            if(temp % 10 == x){
                num ++;
            }
            temp /= 10;
        }
    }
    cout << num << endl;


    return 0;
}
