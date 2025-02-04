// P5728 【深基5.例5】旗鼓相当的对手

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr[i][3] = sum;
    }
    int num = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(abs(arr[i][0] - arr[j][0]) <= 5)
            if(abs(arr[i][1] - arr[j][1]) <= 5)
            if(abs(arr[i][2] - arr[j][2]) <= 5)
            if(abs(arr[i][3] - arr[j][3]) <= 10)
            num ++;
        }
    }
    cout << num << endl;


    return 0;
}
