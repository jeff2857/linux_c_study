/* 编写函数cpoy_n，他的原型如下
 * void copy_n(char dst[], char src[], int n);
 * 这个函数用于把一个字符串从数组src复制到数组dst，
 * 但有如下要求
 * 如果src字符串的长度小于n,
 * 必须在复制后的字符串尾部补充足够的NUL字符，
 * 使他的长度正好为n
 * 如果src的长度大于等于n
 * 在dst中存储了n个字符后便可终止，
 * 此时，数组dst将不是以NUL结尾
 */
#include <stdio.h>

void copy_n(char dst[], char src[], int n);

int main() {

}

void copy_n(char dst[], char src[], int n) {
    int dst_index, src_index;
    src_index = 0;

    for (dst_index = 0; dst_index < n; dst_index++) {
        dst[dst_index] = src[src_index];

        if (src[src_index] != 0) {
            src_index++;
        }
    }
}
