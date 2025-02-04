// // P1789 【Mc生存】插火把

// #include <iostream>
// using namespace std;

// int main() {
//     // 在此处输入代码
//     int n,m,k;
//     cin >> n >> m >> k;
//     int arr[n][n] = {0};
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             arr[i][j] = 0;
//         }
//     }
//     int huo_ba [5][5] = {
//         {0,0,1,0,0},
//         {0,1,1,1,0},
//         {1,1,1,1,1},
//         {0,1,1,1,0},
//         {0,0,1,0,0}
//     };
//     int yin_shi[5][5] = {
//         {1,1,1,1,1},
//         {1,1,1,1,1},
//         {1,1,1,1,1},
//         {1,1,1,1,1},
//         {1,1,1,1,1}
//     };

//     for (int i = 0; i < m; i++) {
//         int x,y;
//         cin >> x >> y;
//         for (int a = 0 ; a < 5; a++){
//             for (int b = 0; b < 5; b++){
//                 if (huo_ba[a][b] == 1) {
//                     if(x + a - 3 >= 0 && x + a - 3 <= n && y + b - 3 >= 0 && y + b - 3 <= n){
//                         arr[x + a - 3][y + b - 3] = 1;
//                     }
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < k; i++) {
//         int x,y;
//         cin >> x >> y;
//         for (int a = 0 ; a < 5; a++){
//             for (int b = 0; b < 5; b++){
//                 if (yin_shi[a][b] == 1) {
//                     if(x + a - 3 >= 0 && x + a - 3 <= n && y + b - 3 >= 0 && y + b - 3 <= n){
//                         arr[x + a - 3][y + b - 3] = 1;
//                     }
//                 }
//             }
//         }
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             // cout << arr[i][j] << " ";
//             if(arr[i][j] == 0){
//                 sum++;
//             }
//         }
//         // cout << endl;
//     }
//     cout << sum << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> arr(n, vector<int>(n, 0)); // 使用 vector 动态管理数组

    int huo_ba[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int yin_shi[5][5] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1}
    };

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--; // 调整坐标从 1-based 到 0-based
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 5; b++) {
                if (huo_ba[a][b] == 1) {
                    int nx = x + a - 2; // 中心点偏移调整
                    int ny = y + b - 2;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        arr[nx][ny] = 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--; // 调整坐标从 1-based 到 0-based
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 5; b++) {
                if (yin_shi[a][b] == 1) {
                    int nx = x + a - 2; // 中心点偏移调整
                    int ny = y + b - 2;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        arr[nx][ny] = 1;
                    }
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // cout << arr[i][j] << " ";
            if (arr[i][j] == 0) {
                sum++;
            }
        }
        // cout << endl;
    }
    cout << sum << endl;

    return 0;
}