// P2141 [NOIP2014 普及组] 珠心算测验

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 在此处输入代码
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<bool> ans(1e9,false);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans[arr[i]] = true;
    }
    int num = 0;
    for (int i = 0; i < n; i++){
        int temp = arr[i];
        for (int a = 0 ; a < n; a++){
            for (int b = a ; b < n; b++){
                if (a == b || !ans[arr[a] + arr[b]]){
                    continue;
                }
                if (temp == arr[a] + arr[b]){
                    ans[arr[a] + arr[b]] = false;
                    num++;
                }

            }
        }
    }
    cout << num;

    return 0;
}
