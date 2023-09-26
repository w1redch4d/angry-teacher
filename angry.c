#include <stdio.h>

int main() {
    int x = 0xDEADBEEF; // check finder.c maybe??

    for (int j = 9; j >= 0; j--) {
        x = (x >> 8) | (x << 24);
        int y = (x & ((1 << 10) - 1)) >> j;
        for (int k = 0; k < 10; k++) {
            putchar(y & (2 << (10 - 1)) ? '*' : ' '); // if u are chad enuf u would use '#' since im not im using '*'
            y <<= 1;
        }
        putchar('\n');
    }
}
