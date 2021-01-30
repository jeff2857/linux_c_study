/* 编写一个程序，一行行的读取输入行，
 * 直至到达文件尾，算出每行的长度
 * 然后把最长的那行打印出来，
 * 可以假定所有输入行不超过1000字符
 *
 * 编译：
 * cc -o build/exercise184 exercise184.c
 *
 * 测试：
 * ./build/exercise184 exercise184_input.txt
 */
#include <stdio.h>

int find_max_line(FILE* fp);

void print_max_line(FILE* fp, int lineNumber);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage:\n\t./exercise184 <input file>\n");
        return 0;
    }

    FILE *fp = NULL;

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Can't open file: %s\n", argv[1]);
        return -1;
    }

    int lineNumber = find_max_line(fp);
    printf("max line number: %d\n", lineNumber);

    fseek(fp, 0, SEEK_SET);
    print_max_line(fp, lineNumber);

    fclose(fp);

    return 0;
}

int find_max_line(FILE* fp) {
    int lineNumber = 0;
    int maxLineNumber = 0;
    int maxLineLen = 0;
    int lineLen = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            if (lineLen > maxLineLen) {
                maxLineLen = lineLen;
                maxLineNumber = lineNumber;
            }
            lineLen = 0;
            lineNumber++;
        } else {
            lineLen++;
        }
    }

    return maxLineNumber;
}

void print_max_line(FILE* fp, int lineNumber) {
    int curLine = 0;
    int ch;

    while (curLine < lineNumber) {
        if ((ch = fgetc(fp)) == '\n') {
            curLine++;
        }
    }

    while ((ch = fgetc(fp)) != '\n') {
        printf("%c", ch);
    }
    printf("\n");
}
