// P2669 [NOIP2015 普及组] 金币

#include <iostream>
using namespace std;

// int main() {
//     // 在此处输入代码
//     int k,i;
//     cin >> k;
//     int sum = 0,day = 0,num = 1;
//     for (i = 0 ; i < k, day< k ; i ++){
//         // cout << i << " " << sum << " " << num << endl;
//         for(int j = 0 ; j < num && day< k ; j ++){
//             // cout << "  " << sum << " " << num << endl;
//             sum += num;
//             day ++;
//         }
//         num ++;
//     }

//     cout << sum << endl;
//     return 0;
// }

int main() {
    int k;
    cin >> k;

    int sum = 0;  // 总金币数
    int day = 0;  // 当前天数
    int num = 1;  // 当前金币数

    while (day < k) {
        for (int j = 0; j < num && day < k; ++j) {
            sum += num;
            ++day;
        }
        ++num;
    }

    cout << sum << endl;
    return 0;
}