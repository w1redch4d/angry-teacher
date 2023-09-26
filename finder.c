#include <stdio.h>

int main() {

    for (int i = -999999999; i <= -10000000; i++) {
        /* I am not good with hex so here i would implement a dictionary of interesting words i would like
        the hexadecimal to look like, since u are in github i would leave that to ur creativity to figure out 
        how to do that, I am not bloating the code anymore sorry */
        
        // if (i == 0xdeadbeef) {
        //     fprintf(stdout, "NO I WONT DO IT LIKE THIS\n");
        // }
        
        printf("decimal = %d , hexadecimal = %x\n", i,  i);
    }

}
