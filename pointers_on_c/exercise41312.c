/* 能被4整除的年份是闰年，但其中能被100整除的却不是闰年，
 * 除非他同时能被400整除，
 * 编写一些语句，判断year这个变量是否是闰年，
 * 如果他是闰年，把变量leap_year设置为1，
 * 如果不是，把变量leap_year设置为0
 */
#include <stdio.h>

int main() {
    short leap_year = 0;
    unsigned year;

    scanf("%d", &year);

    if ((year % 4) != 0) {
        printf("%d is not leap year.\n", year);
        leap_year = 0;
    } else {
        if ((year % 400) == 0) {
            printf("%d is leap year.\n", year);
            leap_year = 1;
        } else if ((year % 100) != 0) {
            printf("%d is leap year.\n", year);
            leap_year = 1;
        } else {
            printf("%d is not leap year.\n", year);
            leap_year = 0;
        }
    }

    return 0;
}
