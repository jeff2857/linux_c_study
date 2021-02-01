#include <stdio.h>

enum Liquid {
    OUNCE = 1,
    CUP = 8,
    PINT = 16,
    QUART = 32,
    GALLON = 128
};

int main() {
    enum Liquid jar;

    jar = QUART;
    printf("%d\n", jar);

    jar = jar + PINT;
    printf("%d\n", jar);

    return 0;
}
