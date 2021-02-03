/* 编写一些语句，从标准输入读取一个整型值，
 * 然后打印一些空白行，
 * 空白行的数量由这个值决定
 */
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("\n");
    }

    return 0;
}
