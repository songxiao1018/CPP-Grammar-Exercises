#include <iostream>

using namespace std;

int main()
{
    int total_min = 60 * (24 + 8);
    int s, v;
    cin >> s >> v;
    int t = s / v;
    t += 10;
    if (s%v == 0)
        t--;

    t = total_min - t;
    printf("%02d:%02d", t / 60 - 24, t % 60 - 1 );
    

}