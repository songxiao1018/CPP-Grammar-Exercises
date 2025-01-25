// P4956 [COCI2017-2018#6] Davor

#include <iostream>
using namespace std;

// int main() {
//     // 在此处输入代码
//     int n;
//     cin >> n;
//     n = n / 364;
//     for (int i = 100 ; i > 0 ; i--){
//         for(int k = 1 ; k < 200 ; k ++){
//             int now = i + k * 3;
//             if(now * 52 == n) {
//                 cout << i << "\n" << k << endl;
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }

// int main(){//主函数
//     int n;
//     cin >> n;
//     n = n / 364;//读入，开始直接/364
// 	if(n<=103) printf("%d\n%d\n",n-3,1);//k可以取到1的情况
// 	else{//k不能取1
// 		if(n%3==0) printf("%d\n%d\n",99,(n-99)/3);//分类讨论，直接输出
// 		if(n%3==1) printf("%d\n%d\n",100,(n-100)/3);
// 		if(n%3==2) printf("%d\n%d\n",98,(n-98)/3);
// 	}
// 	return 0;//华丽结束
// }

int main() {
    int n;
    cin >> n;
    n = n / 364; // 读入，开始直接 / 364

    if (n <= 103) {
        // k 可以取到 1 的情况
        cout << n - 3 << "\n" << 1 << endl;
    } else {
        // k 不能取 1 的情况
        // int i;
        //      if (n % 3 == 2) i = 98;
        // else if (n % 3 == 0) i = 99;
        // else if (n % 3 == 1) i = 100;
        
        int i[3] = {99, 100, 98};

        int k = (n - i[n % 3]) / 3;
        cout << i[n % 3] << "\n" << k << endl;
    }

    return 0; // 华丽结束
}