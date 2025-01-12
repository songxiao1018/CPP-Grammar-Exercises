# include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int price = 19;
    int total = a*10+b;
    cout << int(total/price);
}