// #include <iostream>

// using namespace std;

// int main()
// {
//     int total_min = 60 * (24 + 8);
//     int s, v;
//     cin >> s >> v;
//     int t = s / v;
//     t += 10;
//     if (s % v == 0)
//         t--;
    
//     t = total_min - t;

//     if (t / 60 - 24 < 0)
//         if (t % 60 == 0)
//             printf("%02d:%02d", t / 60, t % 60);
//         else
//             printf("%02d:%02d", t / 60, t % 60 - 1);
//     else
//         if (t % 60 == 0)
//             printf("%02d:%02d", t / 60 - 24, t % 60);
//         else
//             printf("%02d:%02d", t / 60 - 24, t % 60 - 1);
// }

#include <iostream>
#include <iomanip> // for std::setw and std::setfill

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;

    // 计算到达学校所需时间（分钟）
    int travel_time = (s + v - 1) / v; // 向上取整
    int total_time = travel_time + 10; // 加上准备时间

    // 总分钟数从第二天8点开始计算
    int total_min = 60 * (24 + 8);

    // 剩余时间
    int remaining_min = total_min - total_time;

    // 计算小时和分钟
    int hours = remaining_min / 60;
    int minutes = remaining_min % 60;

    // 输出结果
    if (hours >= 24) {
        hours -= 24;
    }

    cout << setw(2) << setfill('0') << hours << ":" 
         << setw(2) << setfill('0') << minutes << endl;

    return 0;
}