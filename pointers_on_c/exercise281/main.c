/* 编写一个程序，他由3个函数组成，
 * 每个函数分别保存在一个单独的源文件中
 * 函数 increment 接受一个整型参数，返回该参数的值加1
 * increment 函数应该位于文件 increment.c 中
 * 第二个函数称为 negate，他也接受一个整型参数
 * 返回该参数的负值
 * 最后一个函数是 main，保存于文件 main.c 中
 * 他分别用参数 10, 0, -10 调用另外两个函数
 * 并打印结果
 *
 * 编译：
 * mkdir build
 * cc main.c increment.c negate.c -o build/main
 */
#include <stdio.h>

#include "increment.h"
#include "negate.h"

int main() {
    int num1 = 10, num2 = 0, num3 = -10;

    printf("%d %d %d\n", increment(num1), increment(num2),
            increment(num3));

    printf("%d %d %d\n", negate(num1), negate(num2),
            negate(num3));

    return 0;
}
