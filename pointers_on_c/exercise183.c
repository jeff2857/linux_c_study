/* 编写一个程序，从标准输入读取一些字符
 * 并把他们写到标准输出上，同时应该计算checksum值
 * 并写在字符后面
 * checksum(校验和)用一个 signed char 类型的变量进行计算
 * 他初始值为 -1，当每个字符从标准输入读取时，
 * 他的值就被加到 checksum 中，
 * 如果 checksum 变量产生了溢出，这些溢出会被忽略
 * 当所有字符均被写入后，程序以十进制整肃的形式
 * 打印出 checksum 值，他有可能是负值，
 * 注意在 checksum 后面要添加一个换行符
 * 在使用 ASCII 码的计算机中，
 * 在包含"Hello world!"这几个词并以换行符结尾的文件上
 * 运行这个程序应该产生一下输出：
 * Hello world!
 * 102
 *
 * 编译：
 * cc -o build/exercise183 exercise183.c
 *
 * 测试：
 * cat exercise183_input.txt | ./build/exercise183
 */
#include <stdio.h>

int main() {
    signed char checksum = -1;
    int input;

    while ((input = getchar()) != EOF) {
        printf("%c", input);
        checksum += input;
    }
    printf("%d\n", checksum);

    return 0;
}
