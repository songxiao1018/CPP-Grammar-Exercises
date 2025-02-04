// // P5731 【深基5.习6】蛇形方阵

// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main() {
//     // 在此处输入代码
//     int n;
//     cin >> n;
//     vector<vector<int>> matrix(n, vector<int>(n, 0));
//     int now = 1,x=0,y=0;
//     int direction = 0;
//     while(now <= n * n){
//         matrix[x][y] = now;
//         now++;
        
//         int next_x = x + 1, next_y = y + 1;
//         if(matrix[next_x][next_y] != 0 || next_x > n || next_y > n || next_x < 0 || next_y < 0){
//             switch(direction%4){
//                 case 0:
//                     next_x = x;
//                     next_y = y + 1;
//                     break;
//                 case 1:
//                     next_x = x - 1;
//                     next_y = y;
//                     break;
//                 case 2:
//                     next_x = x;
//                     next_y = y - 1;
//                     break;
//                 case 3:
//                     next_x = x + 1;
//                     next_y = y;
//                     break;
//             }
//             direction++;
//         }
//         x = next_x, y = next_y;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             printf("%d", matrix[i][j]);
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int now = 1, x = 0, y = 0;
    int direction = 0; // 0: right, 1: up, 2: left, 3: down

    while (now <= n * n) {
        matrix[x][y] = now;
        now++;

        int next_x = x, next_y = y;
        switch (direction % 4) {
            case 0: // right
                next_y = y + 1;
                break;
            case 1: // down
                next_x = x + 1;
                break;
            case 2: // left
                next_y = y - 1;
                break;
            case 3: // up
                next_x = x - 1;
                break;
        }

        // Check if the next position is out of bounds or already filled
        if (next_x < 0 || next_x >= n || next_y < 0 || next_y >= n || matrix[next_x][next_y] != 0) {
            direction++;
            switch (direction % 4) {
                case 0: // right
                    next_x = x;
                    next_y = y + 1;
                    break;
                case 3: // up
                    next_x = x - 1;
                    next_y = y;
                    break;
                case 2: // left
                    next_x = x;
                    next_y = y - 1;
                    break;
                case 1: // down
                    next_x = x + 1;
                    next_y = y;
                    break;
            }
        }

        x = next_x;
        y = next_y;

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << setw(3) << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", matrix[i][j]);
            // cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}