// // P1009 [NOIP1998 普及组] 阶乘之和

// #include <iostream>
// using namespace std;

// unsigned long long jiecheng(int k){
//     unsigned long long result = 1;
//     for (int i = k; i > 0; i--){
//         result *= i;
//     }

//     return result;
// }

// int main() {
//     // 在此处输入代码
//     int n;
//     cin >> n;
//     if (n == 1){
//         cout << 1 << endl;
//         return 0;
//     }
//     unsigned long long sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += jiecheng(i);
//     }
//     cout << sum << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>

// using namespace std;

// // 大数加法
// string addStrings(const string& num1, const string& num2) {
//     string result;
//     int carry = 0;
//     int i = num1.size() - 1;
//     int j = num2.size() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//         int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
//         int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         result += (sum % 10) + '0';
//     }

//     reverse(result.begin(), result.end());
//     return result;
// }

// // 大数乘法
// string multiplyStrings(const string& num1, const string& num2) {
//     if (num1 == "0" || num2 == "0") return "0";

//     int n1 = num1.size();
//     int n2 = num2.size();
//     vector<int> result(n1 + n2, 0);

//     for (int i = n1 - 1; i >= 0; --i) {
//         for (int j = n2 - 1; j >= 0; --j) {
//             int digit1 = num1[i] - '0';
//             int digit2 = num2[j] - '0';
//             int product = digit1 * digit2 + result[i + j + 1];
//             result[i + j + 1] = product % 10;
//             result[i + j] += product / 10;
//         }
//     }

//     string resultStr;
//     int i = 0;
//     while (i < result.size() && result[i] == 0) ++i;
//     for (; i < result.size(); ++i) {
//         resultStr += result[i] + '0';
//     }

//     return resultStr.empty() ? "0" : resultStr;
// }

// // 计算阶乘
// string factorial(int n) {
//     string result = "1";
//     for (int i = 2; i <= n; ++i) {
//         result = multiplyStrings(result, to_string(i));
//     }
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;

//     string sum = "0";
//     for (int i = 1; i <= n; ++i) {
//         sum = addStrings(sum, factorial(i));
//     }

//     cout << sum << endl;

//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

// 大数加法
string addStrings(const string& num1, const string& num2) {
    string result;
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

// 大数减法
string subtractStrings(const string& num1, const string& num2) {
    string result;
    int borrow = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        int diff = digit1 - digit2 - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result += diff + '0';
    }

    reverse(result.begin(), result.end());

    // 去掉前导零
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    }
    return "0";
}

// 大数乘法
string multiplyStrings(const string& num1, const string& num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n1 = num1.size();
    int n2 = num2.size();
    vector<int> result(n1 + n2, 0);

    for (int i = n1 - 1; i >= 0; --i) {
        for (int j = n2 - 1; j >= 0; --j) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2 + result[i + j + 1];
            result[i + j + 1] = product % 10;
            result[i + j] += product / 10;
        }
    }

    string resultStr;
    int i = 0;
    while (i < result.size() && result[i] == 0) ++i;
    for (; i < result.size(); ++i) {
        resultStr += result[i] + '0';
    }

    return resultStr.empty() ? "0" : resultStr;
}

// 大数除法（除以单个数字）
string divideStringByDigit(const string& num, int divisor) {
    string result;
    int remainder = 0;

    for (char digitChar : num) {
        int digit = remainder * 10 + (digitChar - '0');
        result += (digit / divisor) + '0';
        remainder = digit % divisor;
    }

    // 去掉前导零
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    }
    return "0";
}
// // 大数除法
// pair<string, string> divideStrings(const string& dividend, const string& divisor) {
//     if (divisor == "0") {
//         throw invalid_argument("Division by zero");
//     }
//     if (dividend == "0") {
//         return {"0", "0"};
//     }

//     string quotient;
//     string remainder = "0";
//     int divisorLen = divisor.size();

//     for (size_t i = 0; i < dividend.size(); ++i) {
//         remainder += dividend[i];
//         int low = 0, high = 9;
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             string midProduct = multiplyStrings(divisor, to_string(mid));
//             if (midProduct <= remainder) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
//         quotient += to_string(low - 1);
//         remainder = subtractStrings(remainder, multiplyStrings(divisor, to_string(low - 1)));
//     }

//     // 去掉前导零
//     size_t pos = quotient.find_first_not_of('0');
//     if (pos != string::npos) {
//         quotient = quotient.substr(pos);
//     } else {
//         quotient = "0";
//     }

//     return {quotient, remainder};
// }

// 计算阶乘
string factorial(int n) {
    string result = "1";
    for (int i = 2; i <= n; ++i) {
        result = multiplyStrings(result, to_string(i));
    }
    return result;
}

int main() {
    int a,b;
    cin>>a>>b;

    // +
    cout << "a+b=" ;
    cout<<addStrings(to_string(a),to_string(b))<<endl;
    // -
    cout << "a-b=" ;
    cout<<subtractStrings(to_string(a),to_string(b))<<endl;
    // *
    cout << "a*b=" ;
    cout<<multiplyStrings(to_string(a),to_string(b))<<endl;
    // /
    cout << "a/b=" ;
    cout<<divideStringByDigit(to_string(a),b)<<endl;
    // try {
    //     auto result = divideStringByDigit(to_string(a), b);
    //     cout << result.first << " " << result.second << endl;
    // } catch (const invalid_argument& e) {
    //     cout << "Error: " << e.what() << endl;
    // }
    // 阶乘
    cout << "a!=" ;
    cout<<factorial(a)<<endl;
    cout << "b!=" ;
    cout<<factorial(b)<<endl;


    return 0;
}
