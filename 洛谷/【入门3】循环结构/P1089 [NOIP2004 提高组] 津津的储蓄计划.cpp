// P1089 [NOIP2004 提高组] 津津的储蓄计划

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int mamacun = 0;
    int zijishoushang = 0;

    for (int i = 1 ; i <= 12 ; i++){
        int yusuan;
        cin >> yusuan;

        zijishoushang += (300 - yusuan);

        // 判断结束
        if(zijishoushang < 0){
            cout << "-" << i << endl;
            return 0;
        }

        // 判断是否存储
        while (zijishoushang >= 100){
            zijishoushang -= 100;
            mamacun += 100;
        }        
    }
    cout << mamacun * 1.2 + zijishoushang << endl;

    return 0;
}
