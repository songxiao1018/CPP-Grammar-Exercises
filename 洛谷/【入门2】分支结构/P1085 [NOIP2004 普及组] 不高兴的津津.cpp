#include <iostream>
using namespace std;

int main() {
    int maxHomework = -1; // 记录最大作业量
    int unhappyDay = 0;   // 记录最不高兴的那一天

    for (int day = 1; day <= 7; ++day) {
        int chinese, math;
        cin >> chinese >> math;

        int totalHomework = chinese + math;

        if (totalHomework > maxHomework) {
            maxHomework = totalHomework;
            unhappyDay = day;
        }
    }
    if (maxHomework > 8)
    cout << unhappyDay << endl;
    else
    cout << "0" << endl;
    return 0;
}