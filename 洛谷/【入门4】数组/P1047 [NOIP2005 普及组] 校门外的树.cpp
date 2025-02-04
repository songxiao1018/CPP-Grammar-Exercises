//  [NOIP2005 普及组] 校门外的树

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    int l,m;
    cin>>l>>m;
    int road[l+1] = {1};
    for
	 (int i = 0; i < l +1; i++){
        road[i] = 1;
    }
    for (int i = 0; i < m; i++){
        int start,end;
        cin>>start>>end;
        for (int j = start; j <= end; j++){
            road[j] = 0;
        }
    }
    int sum = 0;
    for (int i = 0; i < l+1; i++){
            // cout << road[i]  << " ";
        if (road[i] == 1){
            sum++;
        }
    }
    cout<<sum;

    return 0;
}
