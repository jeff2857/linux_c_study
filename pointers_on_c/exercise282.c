/* 编写一个程序，他从标准输入读取 c 源代码
 * 并验证所有的花括号都正确的成对出现
 * 你不必担心注释内部，字符串常量内部和字符常量形式的花括号
 *
 * 编译：
 * cc -o build/exercise282 exercise282.c
 *
 * 测试：
 * cat exercise282_input_1.txt | ./build/exercise282
 * cat exercise282_input_2.txt | ./build/exercise282
 */
#include <stdio.h>

int main() {
    int ch;
    int braces = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '{') {
            braces++;
        } else if (ch == '}') {
            braces--;
        }
    }

    if (braces == 0) {
        printf("success: braces pair.\n");
        return 0;
    } else {
        printf("failure: braces unpair.\n");
        return 0;
    }
}
