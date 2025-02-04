// P5732 【深基5.习7】杨辉三角

#include <iostream>
#include <vector>
using namespace std;


int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = dp[i][i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}