# include<iostream>
using namespace std;

int main(){
    int h,r;
    cin>>h>>r;

    double V = 3.14*r*r*h;

    int n = 20000/V;
    cout<<n+1;
}