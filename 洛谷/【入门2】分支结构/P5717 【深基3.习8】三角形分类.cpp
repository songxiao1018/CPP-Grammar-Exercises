#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // 对三条边进行排序
    int sides[3] = {a, b, c};
    sort(sides, sides + 3);

    // 检查是否能构成三角形
    if (sides[0] + sides[1] <= sides[2]) {
        printf("Not triangle\n");
        return 0;
    }

    // 计算平方值以减少重复计算
    int sum_of_squares = sides[0] * sides[0] + sides[1] * sides[1];
    int longest_side_square = sides[2] * sides[2];

    // 判断三角形类型
    if (sum_of_squares == longest_side_square) {
        printf("Right triangle\n");
    } else if (sum_of_squares > longest_side_square) {
        printf("Acute triangle\n");
    } else {
        printf("Obtuse triangle\n");
    }

    // 判断是否为等腰或等边三角形
    if (sides[0] == sides[1] || sides[1] == sides[2]) {
        printf("Isosceles triangle\n");
        if (sides[0] == sides[2]) {
            printf("Equilateral triangle\n");
        }
    }

    return 0;
}