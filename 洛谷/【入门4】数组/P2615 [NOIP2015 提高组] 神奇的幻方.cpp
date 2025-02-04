// P2615 [NOIP2015 提高组] 神奇的幻方

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n,0));
    int x,y;
    x = 0;
    y = n/2;
    for (int i = 1 ; i < n*n + 1 ; i++){
        a[x][y] = i;
        int try_x = x - 1;
        int try_y = y + 1;
        if(try_x == -1){
            try_x = n - 1;
        }
        if(try_y == n){
            try_y = 0;
        }
        if(a[try_x][try_y] != 0){
            try_x = x + 1;
            try_y = y;
        }


        x = try_x;
        y = try_y;
        // for (int i = 0 ; i < n ; i++){
        //     for (int j = 0 ; j < n ; j++){
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

    }

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
