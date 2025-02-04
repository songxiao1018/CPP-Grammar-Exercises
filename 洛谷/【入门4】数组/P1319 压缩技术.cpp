// P1319 压缩技术

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    int num,now=0,k=0;
    while (cin >> num){
        for(int i=0;i<num;i++){
            cout << now;
            k ++;
            if(k%n ==0){
                cout << endl;
            }
        }
        if(now == 0){
            now = 1;
        }else{
            now = 0;
        }
    }

    return 0;
}
