// P5726 【深基4.习9】打分

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n,max=-1,min =-1,sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x > max || max == -1) max = x;
        if (x < min || min == -1) min = x;
    }
    printf("%.2f",1.0*(sum - max - min)/(n-2));

    return 0;
}
