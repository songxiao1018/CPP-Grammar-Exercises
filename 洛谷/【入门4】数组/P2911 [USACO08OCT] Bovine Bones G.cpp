// P2911 [USACO08OCT] Bovine Bones G

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 在此处输入代码
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v(a+b+c);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                v[i+j+k]++;
            }
        }
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
            index = i;
        }
    }
    cout << index << endl;


    return 0;
}
