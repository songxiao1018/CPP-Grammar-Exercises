/**
 * @nc app=nowcoder id=08b28e61ff6345febf09969b3a167f7e topic=290 question=295418 lang=C++
 * 2025-01-13 20:13:40
 * https://www.nowcoder.com/practice/08b28e61ff6345febf09969b3a167f7e?tpId=290&tqId=295418
 * [BC58] 健康评估
 * 
 * 描述
BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。例如：一个人的身高为1.75米，体重为68千克，他的BMI=68/(1.75^2)=22.2（千克/米^2）。当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
输入描述：
一行，输入一个人的体重（千克）和身高（米），中间用一个空格分隔。
输出描述：
一行，输出身体Normal(正常)或Abnormal(不正常)。
示例1
输入：
68 1.75
复制
输出：
Normal
复制
示例2
输入：
67.5 1.65
复制
输出：
Abnormal
 */

/** @nc code=start */

#include <iostream>
using namespace std;

int main() {
    double w, h;
    while (cin >> w >> h) {
        double bmi = w / (h * h);
        if (bmi >= 18.5 && bmi <= 23.9) {
            cout << "Normal" << endl;
        } else {
            cout << "Abnormal" << endl;
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")

/** @nc code=end */
