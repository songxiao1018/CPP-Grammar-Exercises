# include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int t_end = c*60+d;
    int t_start = a*60+b;
    int t_total = t_end-t_start;
    cout << t_total/60 << " " << t_total%60;
}
