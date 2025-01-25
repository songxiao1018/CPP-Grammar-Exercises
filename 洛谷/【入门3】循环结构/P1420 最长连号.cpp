// P1420 最长连号

#include <iostream>
using namespace std;

int main()
{
    // 在此处输入代码
    int n, max, now, last, k;
    cin >> n;
    cin >> last;
    max = 1;
    now = 1;
    for (int i = 1; i < n ; i++)
    {
        cin >> k;
        if (k == last + 1)
        {
            now++;
            last = k;
            if (now > max)
            {
                max = now;
            }
        }
        else
        {
            last = k;
            now = 1;
        }
    }
    cout << max;

    return 0;
}
