// P4414 [COCI2006-2007#2] ABC

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }

    char ch;
    for (int i = 0; i < 3; ++i){
        cin >> ch;
        if (ch == 'A'){
            cout << a << " ";
        } else if (ch == 'B'){
            cout << b << " ";
        } else if (ch == 'C'){
            cout << c << " ";
        }
    }

    return 0;
}
