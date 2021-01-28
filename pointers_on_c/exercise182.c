/* exercise 1.8.2
 * 编写一个程序，从标准输入读取几行输入
 * 每行输入都要打印到标准输出上，前面要加上行号
 * 在编写这个程序时，
 * 要试图让程序能够处理的输入行的长度没有限制
 *
 * 编译：
 * cc -o build/exercise182 exercise182.c
 *
 * 测试：
 * 1. 执行程序，输入任意长度字符，回车，继续输入多行
 * 2. cat some_text_file_with_any_line | ./build/exercise182
 */

#include <stdio.h>

int main() {
    int in;

    int i = 1;
    char newLine = 1;

    while ((in = getchar()) != EOF) {
        if (newLine) {
            newLine = 0;
            printf("%d ", i);
            i++;
        }
        putchar(in);

        if (in == '\n') {
            newLine = 1;
        }
    }

    return 0;
}
