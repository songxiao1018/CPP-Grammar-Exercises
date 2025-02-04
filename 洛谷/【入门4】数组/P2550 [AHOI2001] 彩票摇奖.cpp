// P2550 [AHOI2001] 彩票摇奖

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int n ;
    cin >> n ;
    int zhong_jiang[7];
    int zhong[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 7; i++) {
        cin >> zhong_jiang[i];
    }
    for (int i = 0; i < n; i++) {
        int num[7];
        for (int j = 0; j < 7; j++) {
            cin >> num[j];
        }
        int count = 0;
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 7; k++){
                if (num[j] == zhong_jiang[k]) {
                    count++;
                }
            }
        }
        zhong[7-count]++;

    }
    for (int i = 0; i < 7; i++) {
        cout << zhong[i] << " ";
    }

    return 0;
}
