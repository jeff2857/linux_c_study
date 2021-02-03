/* 一个整数如果只能被1和他本身整除，他就被成为质数（prime），
 * 编写一个程序，打印出从1~100之间的所有质数
 */
#include <stdio.h>

int main() {
    unsigned i = 1;
    while (i < 100) {
        short isPrime = 1;
        unsigned j = 2;

        while (j < i) {
            if ((i % j) == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime) {
            printf(" %d ", i);
        }

        i++;
    }

    printf("\n");

    return 0;
}
