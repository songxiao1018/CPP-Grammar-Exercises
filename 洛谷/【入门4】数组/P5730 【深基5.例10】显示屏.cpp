// P5730 【深基5.例10】显示屏

#include <iostream>
#include <vector>
using namespace std;

char num_desplay[10][5][3] = {
    {{'X', 'X', 'X'},{'X', '.', 'X'},{'X', '.', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},},
    {{'.', '.', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},},
    {{'X', 'X', 'X'},{'.', '.', 'X'},{'X', 'X', 'X'},{'X', '.', '.'},{'X', 'X', 'X'},},
    {{'X', 'X', 'X'},{'.', '.', 'X'},{'X', 'X', 'X'},{'.', '.', 'X'},{'X', 'X', 'X'},},
    {{'X', '.', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},},
    {{'X', 'X', 'X'},{'X', '.', '.'},{'X', 'X', 'X'},{'.', '.', 'X'},{'X', 'X', 'X'},},
    {{'X', 'X', 'X'},{'X', '.', '.'},{'X', 'X', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},},
    {{'X', 'X', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},{'.', '.', 'X'},},
    {{'X', 'X', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},},
    {{'X', 'X', 'X'},{'X', '.', 'X'},{'X', 'X', 'X'},{'.', '.', 'X'},{'X', 'X', 'X'},}
};

int main(){
    // 在此处输入代码
    int n;
    cin >> n;
    vector<vector<char>> display(5, vector<char>(n*4-1,'.'));
    int now = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 3; k++){
                display[j][now+k] = num_desplay[c-'0'][j][k];
            }
        }
        now += 4;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < n*4-1; j++){
            cout << display[i][j];
        }
        cout << endl;
    }


    return 0;
}
