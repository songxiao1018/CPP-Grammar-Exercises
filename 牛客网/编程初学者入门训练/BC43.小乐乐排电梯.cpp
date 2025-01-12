/**
 * @nc app=nowcoder id=0f855c7642b74cccb3c2366bb7732d2a topic=290 question=632015 lang=C++
 * 2025-01-12 15:34:20
 * https://www.nowcoder.com/practice/0f855c7642b74cccb3c2366bb7732d2a?tpId=290&tqId=632015
 * [BC43] 小乐乐排电梯
 */

/** @nc code=start */

// 描述
// 小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）

// 输入描述：
// 输入包含一个整数n (0 ≤ n ≤ 109)

// 输出描述：
// 输出一个整数，即小乐乐到达楼上需要的时间。
// 示例1
// 输入：
// 1
// 复制
// 输出：
// 2
// 复制
// 示例2
// 输入：
// 12
// 复制
// 输出：
// 6

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // if (n < 12)
    //     cout << 2;
    // else
        cout << n / 12 * 4 + 2;
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
