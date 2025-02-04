// P1614 爱与愁的心痛

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n, m;
    cin >> n >> m;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    int arr[n] = {0};
    int min = 1e9;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }
    
    for (int i = 0 ; i <= n - m ; i ++){
        int sum = 0;
        for (int j = 0 ; j < m ; j ++){
            sum += arr[i + j];
        }
        if (sum < min){
            min = sum;
        }
    }
    cout << min << endl;


    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     if (n == 0) {
//         cout << 0 << endl;
//         return 0;
//     }

//     vector<int> a(n);
//     vector<int> Sum(n + 1, 0); // 前缀和数组
//     int Ans = 1e9; // 初始化为一个较大的值

//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//         Sum[i + 1] = Sum[i] + a[i]; // 计算前缀和
//     }

//     if (n < m) {
//         int sum = 0;
//         for (int i = 0; i < n; ++i) {
//             sum += a[i];
//         }
//         cout << sum << endl;
//         return 0;
//     }

//     // 使用前缀和计算每个长度为 m 的子数组的和
//     for (int i = m; i <= n; ++i) {
//         int sum = Sum[i] - Sum[i - m];
//         Ans = min(Ans, sum);
//     }

//     cout << Ans << endl;
//     return 0;
// }