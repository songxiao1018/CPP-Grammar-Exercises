// P5714 【深基3.例7】肥胖问题

#include <iostream>
using namespace std;

int main() {
    // 在此处输入代码
    double height, weight;
    cin >> weight >> height;

    if (weight / (height * height) > 24) {
        cout << weight / (height * height) << endl << "Overweight ";
    } else if (weight / (height * height) > 18.5){
        cout << "Normal ";
    }else {
        cout << "Underweight ";
    }

    return 0;
}
