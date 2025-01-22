#include <iostream>
using namespace std;

int main() {
    unsigned long long currentDay, daysPassed;
    cin >> currentDay >> daysPassed;

    // 计算从当前星期几开始，经过 daysPassed 天后有多少个完整的周末
    unsigned long long fullWeeks = daysPassed / 7;
    unsigned long long remainingDays = daysPassed % 7;

    // 计算完整的周末数量（每个周末两天）
    unsigned long long fullWeekends = fullWeeks * 2;

    // 计算剩余天数中的休息日（周六和周日）
    unsigned long long extraRestDays = 0;
    for (unsigned long long i = 0; i < remainingDays; ++i) {
        if ((currentDay + i) % 7 == 6 || (currentDay + i) % 7 == 0) {
            extraRestDays++;
        }
    }

    // 总休息日数量
    unsigned long long totalRestDays = fullWeekends + extraRestDays;

    // 计算实际工作天数并输出航程
    unsigned long long workingDays = daysPassed - totalRestDays;
    cout << workingDays * 250 << endl;

    return 0;
}