// P5729 【深基5.例7】工艺品制作

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 在此处输入代码
    int w,x,h;
    cin >> w >> x >> h;
    int q;
    cin >> q;

    vector<vector<vector<int>>> dp(w+1, vector<vector<int>>(x+1, vector<int>(h+1, 1)));

    for (int i = 0; i < q; i++) {
        int a1 ,b1 ,c1 ;
        int a2 ,b2 ,c2 ;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        for (int a = a1; a <= a2; a++){
            for (int b = b1; b <= b2; b++){
                for (int c = c1; c <= c2; c++){
                    dp[a][b][c] = 0;
                }
            }
        }
    }
    int sum = 0;
    for (int a = 1; a <= w; a++){
        for (int b = 1; b <= x; b++){
            for (int c = 1; c <= h; c++){
                sum += dp[a][b][c];
            }
        }
    }
    cout << sum << endl;

    return 0;
}
