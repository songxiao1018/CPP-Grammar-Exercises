// // P1205 [USACO1.2] 方块转换 Transformations

// #include <iostream>
// #include <vector>
// using namespace std;

// bool check_90(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (arr_start[i][j] != arr_end[j][n - 1 - i]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool check_180(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (arr_start[i][j] != arr_end[n - 1 - i][n - 1 - j]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool check_270(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (arr_start[i][j] != arr_end[n - 1 - j][i]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool check_mirror(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (arr_start[i][j] != arr_end[n - 1 - i][j]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool check_not(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (arr_start[i][j] != arr_end[i][j]) {
//                 return false;
//             }
//         }
//    }
//     return true;
// }

// bool check_mix(int n, const vector<vector<char>>& arr_start, const vector<vector<char>>& arr_end) {
//     vector<vector<char>> arr_middle(n, vector<char>(n));
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             arr_middle[i][j] = arr_start[n - 1 - i][j];
//         }
//     }
//     if (check_90(n, arr_middle, arr_end)) {
//     return true;
//     } else if (check_180(n, arr_middle, arr_end)){
//     return true;
//     } else if (check_270(n, arr_middle, arr_end)){
//     return true;
//     } 
//     return false;

// }



// int main() {
//     // 在此处输入代码
//     int n ;
//     cin >> n ;

//     vector<vector<char>> arr_start(n, vector<char>(n));
//     vector<vector<char>> arr_end(n, vector<char>(n));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr_start[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr_end[i][j];
//         }
//     }

//     if (check_90(n, arr_start, arr_end)) {
//         cout << "1" << endl;
//     } else if (check_180(n, arr_start, arr_end)){
//         cout << "2" << endl;
//     } else if (check_270(n, arr_start, arr_end)){
//         cout << "3" << endl;
//     } else if (check_mirror(n, arr_start, arr_end)){
//         cout << "4" << endl;
//     } else if (check_mix(n, arr_start, arr_end)){
//         cout << "5" << endl;
//     } else if (check_not(n, arr_start, arr_end)){
//         cout << "6" << endl;
//     } else {
//         cout << "7" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool check_rotation(int n, const vector<vector<char>>& original, const vector<vector<char>>& transformed, int angle) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            switch (angle) {
                case 90:
                    if (original[i][j] != transformed[j][n - 1 - i]) return false;
                    break;
                case 180:
                    if (original[i][j] != transformed[n - 1 - i][n - 1 - j]) return false;
                    break;
                case 270:
                    if (original[i][j] != transformed[n - 1 - j][i]) return false;
                    break;
            }
        }
    }
    return true;
}

bool check_mirror_vertical(int n, const vector<vector<char>>& original, const vector<vector<char>>& transformed) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (original[i][j] != transformed[i][n - 1 - j]) return false;
        }
    }
    return true;
}

bool check_no_change(int n, const vector<vector<char>>& original, const vector<vector<char>>& transformed) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (original[i][j] != transformed[i][j]) return false;
        }
    }
    return true;
}

bool check_combination(int n, const vector<vector<char>>& original, const vector<vector<char>>& transformed) {
    vector<vector<char>> mirrored(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            mirrored[i][j] = original[i][n - 1 - j];
        }
    }
    return check_rotation(n, mirrored, transformed, 90) ||
           check_rotation(n, mirrored, transformed, 180) ||
           check_rotation(n, mirrored, transformed, 270);
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> original(n, vector<char>(n));
    vector<vector<char>> transformed(n, vector<char>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> original[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> transformed[i][j];
        }
    }

    if (check_rotation(n, original, transformed, 90)) {
        cout << "1" << endl;
    } else if (check_rotation(n, original, transformed, 180)) {
        cout << "2" << endl;
    } else if (check_rotation(n, original, transformed, 270)) {
        cout << "3" << endl;
    } else if (check_mirror_vertical(n, original, transformed)) {
        cout << "4" << endl;
    } else if (check_combination(n, original, transformed)) {
        cout << "5" << endl;
    } else if (check_no_change(n, original, transformed)) {
        cout << "6" << endl;
    } else {
        cout << "7" << endl;
    }

    return 0;
}