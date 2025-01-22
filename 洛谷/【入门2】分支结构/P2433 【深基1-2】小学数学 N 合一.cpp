#include <bits/stdc++.h>
using namespace std;

void case1() {
    cout << "I love Luogu!" << endl;
}

void case2() {
    cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
}

void case3() {
    int a = 14 / 4;
    cout << a << endl;
    cout << a * 4 << endl;
    cout << 14 - a * 4 << endl;
}

void case4() {
    cout << fixed << setprecision(3) << 500.0 / 3 << endl;
}

void case5() {
    cout << (260 + 220) / (12 + 20) << endl;
}

void case6() {
    double a = 6, b = 9;
    double c = sqrt(a * a + b * b);
    cout << c << endl;
}

void case7() {
    int a = 100;
    a += 10;
    cout << a << endl;
    a -= 20;
    cout << a << endl;
    a = 0;
    cout << a << endl;
}

void case8() {
    int r = 5;
    double pi = 3.141593;
    cout << 2 * pi * r << endl;
    cout << r * r * pi << endl;
    cout << 4.0 / 3 * pi * r * r * r << endl;
}

void case9() {
    cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
}

void case10() {
    cout << 9 << endl;
}

void case11() {
    cout  << 100.0 / (8 - 5) << endl;
}

void case12() {
    cout << 'M' - 'A' + 1 << endl;
    cout << char('A' - 1 + 18) << endl;
}

void case13() {
    int r1 = 4, r2 = 10;
    double pi = 3.141593;
    double v = 4.0 / 3 * pi * r1 * r1 * r1 + 4.0 / 3 * pi * r2 * r2 * r2;
    v = pow(v, 1.0 / 3);
    printf("%.0lf\n", v);
}

void case14() {
    cout << 50 << endl;
}

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 1: case1(); break;
        case 2: case2(); break;
        case 3: case3(); break;
        case 4: case4(); break;
        case 5: case5(); break;
        case 6: case6(); break;
        case 7: case7(); break;
        case 8: case8(); break;
        case 9: case9(); break;
        case 10: case10(); break;
        case 11: case11(); break;
        case 12: case12(); break;
        case 13: case13(); break;
        case 14: case14(); break;
        default: cout << "Invalid input" << endl; break;
    }

    return 0;
}