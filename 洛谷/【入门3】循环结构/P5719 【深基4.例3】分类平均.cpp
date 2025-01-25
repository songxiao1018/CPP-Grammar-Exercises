// P5719 【深基4.例3】分类平均

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 在此处输入代码
    int n, k;
    cin >> n >> k;
    int sum_ok = 0, sum_no = 0;
    int num_ok = 0, num_no = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sum_ok += i;
            num_ok++;
        } else {
            sum_no += i;
            num_no++;
        }
    }
    cout << fixed << setprecision(1) << (double)sum_ok / num_ok << " " 
    << (double)sum_no / num_no << endl;


    return 0;
}
