#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minCost = INT_MAX;  // 初始化为最大整数值

    for (int i = 0; i < 3; ++i) {
        int num, price;
        cin >> num >> price;

        // 计算需要购买的包数，并向上取整
        int packs = (n + num - 1) / num;
        int cost = packs * price;

        // 更新最小花费
        if (cost < minCost) {
            minCost = cost;
        }
    }

    // 输出最小花费
    cout << minCost << endl;

    return 0;
}