/**
 * @nc app=nowcoder id=fcd30aac9c4f4028b23919a0c649824d topic=290 question=632017 lang=C++
 * 2025-01-12 15:40:16
 * https://www.nowcoder.com/practice/fcd30aac9c4f4028b23919a0c649824d?tpId=290&tqId=632017
 * [BC45] 小乐乐改数字
 */

/** @nc code=start */

// 描述
// 小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。

// 输入描述：
// 输入包含一个整数n (0 ≤ n ≤ 109)

// 输出描述：
// 输出一个整数，即小乐乐修改后得到的数字。
// 示例1
// 输入：
// 222222
// 复制
// 输出：
// 0
// 复制
// 示例2
// 输入：
// 123
// 复制
// 输出：
// 101

#include <iostream>
using namespace std;

int main(){
    int x, n;
    int a[10];
    int m = 0;

    scanf("%d", &x);

    for (n = 0; x; n++){
        if (x % 10 % 2 == 0)
            a[m] = 0;
        else
            a[m] = 1;
        x = x / 10;
        m++;
    }
    x = 0;
    for (m--; m >= 0; m--){
        //	printf ("%d",a[m]);
        x = x * 10 + a[m];
    }
    printf("%d", x);

    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
