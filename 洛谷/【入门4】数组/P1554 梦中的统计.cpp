// P1554 梦中的统计

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n,m;
    cin>>n>>m;
    int a[10]= {0};
    for (int i = n ; i <= m ; i++){
        int temp = i;
        while (temp!=0)
        {
            a[temp%10] ++;
            temp /= 10;
        }
    }
    for (int i = 0 ; i < 10 ; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
