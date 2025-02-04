// P1320 压缩技术（续集版）

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

// int main() {
//     // 在此处输入代码
//     char c,now_char='0';
//     int arr_now = 0,arr[300] = {-1};
//     int now_num = 0,line_num=0,line_over = 0;
//     while (cin >> c && c != EOF) {
//         if(c != '\n' && line_over == 0){
//             line_num ++;
//         }
//         if(c == '\n'){
//             line_over = 1;
//         }

//         if(c == now_char){
//             now_num ++;
//         }else{
//             arr[arr_now] = now_num;
//             arr_now ++;
//             now_char = c;
//             now_num = 1;
//         }
//     }
//     cout << line_num << " ";
//     for(int i = 0;i < arr_now;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// using namespace std;

// char a,b='0';//注意了：一定是赋值为'0'；
// int n,ans[1000001],zz=1;//zz是指针的意思，我用来存储第几位

// int main(){
//  while(cin>>a) {
//  	n++;
//  	if(a==b)
//  		ans[zz]++;
//  	else{
//         zz=zz+1;
//         ans[zz]++;
//  		b=a;
//         }
//  }
//  cout<<sqrt(n);//平方根，用到了<cmath>或者是<math.h>，也就是一行的行数
//  for(int i=1 ; i<=zz ; i++)
//      cout<<" "<<ans[i];
// }

int main() {
    char current_char = '0'; // 初始化为无效字符
    int char_count = 0;
    vector<int> counts; // 动态数组存储每个字符的出现次数
    int total_chars = 0;

    char c;
    while (cin >> c) {
        // if (c == '\n') {
        //     continue; // 忽略换行符
        // }
        total_chars++;
        if (c == current_char) {
            char_count++;
        } else {
            if (current_char != '\0') {
                counts.push_back(char_count);
            }
            current_char = c;
            char_count = 1;
        }
    }

    // 处理最后一个字符
    if (current_char != '\0') {
        counts.push_back(char_count);
    }

    // 计算行数并取整
    int line_num = static_cast<int>(ceil(sqrt(total_chars)));
    cout << line_num << " ";

    for (size_t i = 0; i < counts.size(); ++i) {
        cout << counts[i] << " ";
    }

    return 0;
}