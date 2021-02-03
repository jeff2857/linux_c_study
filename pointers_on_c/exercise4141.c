/* 正数n的平方根可以通过计算一系列近似值获得，
 * 每个近似值都比前一个更加接近准确值，
 * 第一个近似值是1，接下来的近似值则通过下面的公式获得
 * a[i+1] = (a[i] + n / a[i]) / 2
 * 编写一个程序，读入一个值，计算并打印他的平方根，
 * 原则上，这种计算可以用于进行下去，
 * 他会不断产生更加精确的结果，
 * 但在实际中，由于浮点变量的精度限制，
 * 程序无法一直计算下去，
 * 当某个近似值与前一个近似值相等时，
 * 就可以让程序停止计算了
 */
#include <stdio.h>

double getNextValue(int n, double value);

int main() {
    int n;
    double value = 1.0;
    double nextValue;
    int a = 1, b;

    scanf("%d", &n);

    nextValue = getNextValue(n, value);

    while (nextValue != value) {
        value = nextValue;
        nextValue = getNextValue(n, value);
    }

    printf("%f\n", nextValue);

    return 0;
}

double getNextValue(int n, double value) {
    return (value + n / value) / 2;
}
